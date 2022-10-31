import os
import sys

def compare_Triplets(a, b):
    count1=0
    count2=0
    for i in range(0,3):
        if a[i]>b[i]:
            count1+=1
        if a[i]<b[i]:
            count2+=1
    return [count1,count2]
        
if __name__ == '__main__':
    a = list(map(int, input().rstrip().split()))
    b = list(map(int, input().rstrip().split()))
    result = compare_Triplets(a, b)
    print(result)
