lim=int(input())
l=[]
while(lim):
    l.append(int(input()))
    lim=lim-1
rem=int(input())
l.pop(rem)
print(l)
