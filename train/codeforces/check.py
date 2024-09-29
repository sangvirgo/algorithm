import heapq

def find_k_smallest_sums(lists, K):
    for lst in lists:
        lst.sort()
    
    min_heap = []
    
    initial_sum = sum(lst[0] for lst in lists)
    min_heap.append((initial_sum, [0] * K))
    
    visited = set(tuple([0] * K))
    
    result = []
    
    while len(result) < K:
        current_sum, indices = heapq.heappop(min_heap)
        result.append(current_sum)
        
        for i in range(K):
            new_indices = indices[:]
            if new_indices[i] + 1 < K:
                new_indices[i] += 1
                new_sum = current_sum - lists[i][indices[i]] + lists[i][new_indices[i]]
                new_tuple = tuple(new_indices)
                if new_tuple not in visited:
                    heapq.heappush(min_heap, (new_sum, new_indices))
                    visited.add(new_tuple)
    
    return result

K = int(input()) 
lists = []

for _ in range(K):
    lists.append(list(map(int, input().split())))  

result = find_k_smallest_sums(lists, K)

print(" ".join(map(str, result)))