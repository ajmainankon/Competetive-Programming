printErJonno = 1


while True:
    marbles, query = [int(x) for x in input().split()]
    if marbles == query == 0:
        break

    
    arr = [0]
    
    while marbles > 0:
        marbles = marbles - 1
        arr.append(int(input()))

    arr.sort()
    print ('CASE#', printErJonno)

    while query > 0:
        query = query - 1
        marbles = int(input())
        
        if marbles in arr:
            print (marbles, 'found at' , arr.index(marbles) )
            
        else:
            print (marbles, 'not found')
    
    printErJonno =  printErJonno + 1