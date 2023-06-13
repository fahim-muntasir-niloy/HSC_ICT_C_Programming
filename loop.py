# n = int(input("Enter: "))

# sum = 0

# for i in range(n):
#     sum+=(i+1)

# print(sum)

# getting the minimum and maximum of an array.
arr = [1,2,50,2,5,1,0,3]
sorted = set()
for i,j in enumerate(arr):
    sorted.add(j)

print(list(sorted)[-1])