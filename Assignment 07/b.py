def hcfnaive(a,b): 
    if(b==0): 
        return a 
    else: 
        return hcfnaive(b,a%b) 


while True:
    g = 0
    N = int(input())
    if N == 0:
        break
    for i in range(1, N):
        for j in range(i+1, N+1):
            g += hcfnaive(i,j) 
    print(g)
            