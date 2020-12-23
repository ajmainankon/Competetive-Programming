while True:
    try:
        how_many = int(input())
        arr = list(map(int,input().split()))
        num = int(input())
        input()
    except EOFError:
        break

    arr.sort()
    cry = range (how_many)
      
    for i in cry:
        rest = range (how_many-i)
        for j in rest:
            if (arr[i]+arr[j] == num) and (i!=j) and (i<=j):
                a = arr[i]
                b = arr[j]

    print('Peter should buy books whose prices are', a, 'and', b)
    print('')