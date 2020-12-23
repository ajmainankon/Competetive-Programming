def hcfnaive(a,b): 
    if(b==0): 
        return a 
    else: 
        return hcfnaive(b,a%b) 
def lcm(a,b):
    return (a / hcfnaive(a,b))* b


g = 0
N = int(input())
while N > 0:
    arr = [int(x) for x in input().split()]
    g = hcfnaive (arr[0],arr[1])
    m = lcm (arr[0],arr[1]) 
    print(g, int(m))        
    N = N - 1
  


    # for i in range(1, N):
    #     for j in range(i+1, N+1):
    #         g += hcfnaive(i,j) 