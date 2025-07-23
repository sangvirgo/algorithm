def min_moves(test_cases):
    results = []
    for case in test_cases:
        sx, sy, tx, ty = case
        dx = abs(tx - sx)
        dy = abs(ty - sy)
        
        # If the differences in x and y are the same, it takes exactly 2 * dx moves
        if dx == dy:
            results.append(2 * dx)
        else:
            results.append(2 * min(dx, dy) + abs(dx - dy))
    
    return results