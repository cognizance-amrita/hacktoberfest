#Function to left rotate arr[] of size n by d
def rotateList(arr,d,n):
    arr[:]=arr[d:n]+arr[0:d]
    return arr

#creating an empty array
arr = []
  
# number of elements as input
n,d=map(int,input().split(' '))
  
# iterating till the range
for i in range(0, n):
    ele = int(input())
    arr.append(ele) # adding the element

#Printing the lists
print("Original list is",arr)
print("Rotated list is")
print(rotateList(arr,d,n))
