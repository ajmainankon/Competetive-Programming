def hcfnaive(a,b): 
    if(b==0): 
        return a 
    else: 
        return hcfnaive(b,a%b) 



g = 0
N = int(input())
while N > 0:
    arr = [int(x) for x in input().split()]
    mam = 0
    cry = len(arr)
    for i in range(cry-1):
        for j in range(i+1, cry):
            g = hcfnaive(arr[i],arr[j]) 
            if g>mam:
                mam = g
    print(mam)        
    N = N - 1
  


    # for i in range(1, N):
    #     for j in range(i+1, N+1):
    #         g += hcfnaive(i,j) 