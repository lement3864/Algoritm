# B진법 수 N을 10진법으로 출력

N, B = input().split()
N = ''.join(reversed(N))
B = int(B)
arr = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"

result = 0

for i in range(len(N) - 1, -1, -1):
    sum = arr.index(N[i]) * (B ** i)
    result += sum

print(result)