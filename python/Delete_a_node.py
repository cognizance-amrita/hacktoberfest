lim=int(input())
l=[]
while(lim):
    l.append(int(input()))
    lim=lim-1
l.pop(int(input()))
print(l)