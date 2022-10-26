import sys
h = [int(h_temp) for h_temp in input().strip().split(' ')]
w = input().strip()
ht = 0
for i in range (len(w)):
    num = ord(w[i])-97
    if (h[num] >= ht):
        ht = h[num]

area = len(w)*ht
print(area)
