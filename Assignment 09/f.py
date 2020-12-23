import math
k = int(input())
while(k>0):
    arr = [float(x) for x in input().split()]
    m = arr[0]
    n = arr[1]
    o = (m/n)*n - m
    print(o)
    k = k -1