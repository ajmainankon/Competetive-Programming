text = input().split()
arr = []
brr = []
for x in text:
    if x not in arr:
        arr.append(x)

x = 1
for y in arr:
    if x < len(arr):
        first = arr[x]
        print (y, " ------ ",  first)
        if y.__eq__(first):
            print ("yes")
        x = x + 1




# first = arr[0]
# if first in arr:
#     print (True)
