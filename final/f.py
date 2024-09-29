
s = input()

valid_num = [1, 2, 3, 4, 5, 6, 7, 8, 9]
valid_digit = {
    1: 0,
    2: 0,
    3: 0, 
    4: 0,
    5: 0,
    6: 0,
    7: 0,
    8: 0, 
    9: 0
}
def is_satisfi(s):
    # handle case len = 1, 2
    if len(s) == 1:
        return (int(s) % 8 == 0)
    if len(s) == 2:
        second_num = s[::-1]

        return ((int(s) % 8 == 0) or (int(second_num) % 8 == 0))
        
    for c in s:
        if int(c) in valid_num:
            valid_digit[int(c)] = 1

    list_num = [key for key, val in valid_digit.items() if val == 1]

    for i in range(1, len(list_num)+1):
        for j in range()
        digit_1 = list_num[i]
        digit_2 = list_num[i+1]
        digit_3 = list_num[i+2]
        list_hoan_vi = []

        hv1 = str(digit_1) + str(digit_2) +str(digit_3)
        hv2 = str(digit_1) + str(digit_3) +str(digit_2)
        hv3 = str(digit_2) + str(digit_1) +str(digit_3)
        hv4 = str(digit_2) + str(digit_3) +str(digit_1)
        hv5 = str(digit_3) + str(digit_1) +str(digit_2)
        hv6 = str(digit_3) + str(digit_2) +str(digit_1)
        list_hoan_vi.append(hv1)
        list_hoan_vi.append(hv2)
        list_hoan_vi.append(hv3)
        list_hoan_vi.append(hv4)
        list_hoan_vi.append(hv5)
        list_hoan_vi.append(hv6)
        for num in list_hoan_vi:
            if int(num) % 8 == 0:
                return True
            
    return False

if is_satisfi(s):
    print("YES")
else:
    print("NO")
        



