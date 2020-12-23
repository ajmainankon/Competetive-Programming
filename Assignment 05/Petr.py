arr = []
arr = [int(x) for x in input().split()]

n = arr[0]
a = arr[1]
b = arr[2]

c =n-a-1
if c>b:
    r = b +1
else:
    r = c+1

print (r)
