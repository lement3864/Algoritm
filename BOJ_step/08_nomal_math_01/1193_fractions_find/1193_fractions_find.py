X = int(input())

i = 1

while (X > i):
    X -= i
    i += 1

if i % 2 == 1:
    print(f'{i + 1 - X}/{X}')
else:
    print(f'{X}/{i + 1 - X}')