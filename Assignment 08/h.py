import math

def hcfnaive(a,b): 
    if(b==0): 
        return a 
    else: 
        return hcfnaive(b,a%b) 

mum = [int(x) for x in input().split()]
a = mum[0]
b = mum[1]

x = math.factorial(a)
y = math.factorial(b)

print(hcfnaive(x,y)) 
