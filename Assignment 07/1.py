from queue import PriorityQueue

from ctypes import c_longlong as ll


while True:
    sum = 0    
    myq = PriorityQueue()
    how_may = int(input())
    if how_may == 0:
        break
    arr = [int(x) for x in input().split()]
    for x in arr:
        myq.put(x)
    sizeByPriority = myq.qsize()
    
    while(sizeByPriority>1):
        a =  myq.get()
        myq.get()
        b =  myq.get()
        myq.get()
        sum = sum + a + b
        
    print(sum)

    # x = arr[0] + arr[1]
    # y = x + arr[2]
    # z = x + y
    # print(z)