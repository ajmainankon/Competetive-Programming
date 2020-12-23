how_many=int(input())
for i in range(how_many):
    inp=int(input())
    if inp>5:
        D = [1]*(inp+1)
        D[1]=2
        D[2]=1
        D[3]=1
        D[4]=1
        D[5]=1
        cry = range(inp+1)
        for x in cry:
            if D[x-2]==2 or D[x-3]==2 or D[x-5]==2:
                D[x]=1
            else:
                D[x]=2
        if D[inp]==1:
            print ("First")
        else:
            print ("Second")
    else:
        if inp==1:
            print ("Second")
        else:
            print ("First")