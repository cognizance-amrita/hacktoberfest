n = int(input())
candles = list(map(int, input().split()))

max_height = max(candles)
count = 0
for i in candles:
    if i == max_height:
        count += 1
print(count)
