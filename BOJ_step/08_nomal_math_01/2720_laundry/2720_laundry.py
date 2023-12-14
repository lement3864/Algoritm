T = int(input())

for _ in range(T):
    C = int(input())
    result = [0, 0, 0, 0]

    while C != 0:
        if C >= 25:
            result[0] += 1
            C -= 25
        
        elif C >= 10:
            result[1] += 1
            C -= 10
        
        elif C >= 5:
            result[2] += 1
            C -= 5
        
        else:
            result[3] += 1
            C -= 1

    print(*result)