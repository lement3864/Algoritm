# 2원과 5원 짜리만 거스름돈 
# 동전의 갯수가 최소가 되도록 거슬러 준다
# 이때, 최소 동전의 개수 출력

change = int(input().rstrip())
ans = 0
while True:
    if change % 5 == 0:
        ans += change // 5
        break
    else:
        change -= 2
        ans += 1

    if change < 0:
        break

if change < 0:
    print(-1)
else:
    print(ans)

