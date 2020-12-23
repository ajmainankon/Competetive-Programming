from bisect import insort, bisect_left

cry = 1
while True:
    arr = []
    
    marbles = input().split()
    if marbles[0] == '0':
        break

    crime = int(marbles[0])
    cremea = int(marbles[1])

    for x in range(crime):
        insort(arr, input())
    print ('CASE#', cry)

    for x in range(cremea):
        y = input()
        temp = bisect_left(arr, y)  

        if y not in arr:
            print (y, 'not found')
        else:
            print (y, 'found at' , temp + 1)
    
    cry = cry + 1



