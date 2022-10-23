import math
def catAndMouse(A,B,C):
    if abs(A-C)>abs(B-C):
        print("Cat B")
    elif abs(A-C)<abs(B-C):
        print("Cat A")
    else:
        print("Mouse C")

N = int(input())
for _ in range(N):
    X = list(map(int,input().split()))
    catAndMouse(X[0],X[1],X[2])