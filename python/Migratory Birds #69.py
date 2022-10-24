def migratoryBirds(n):
    d={}
    for i in range(1,6):
        d[i]=0
    for i in n:
        d[i]+=1
    return list(d.keys())[list(d.values()).index(max(d.values()))]
    
N=int(input())
print(migratoryBirds(list(map(int,input().split()))))