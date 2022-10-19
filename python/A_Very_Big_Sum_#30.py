#find sum of elements in given array
def _sum(arr):

	# initialize a variable to store the sum while iterating through
	# the array later
	sum = 0

	# iterate through the array and add each element to the sum variable
	# one at a time
	for i in arr:
		sum = sum + i

	return(sum)

#Taking input of the size of the array
n=int(input())

#creating an empty list
arr = []

# iterating till the range
for i in range(0, n):
    ele = int(input())
    arr.append(ele) # adding the element
print("Array is", arr)
ans = _sum(arr)

# display sum
print('Sum of the array is ', ans)
