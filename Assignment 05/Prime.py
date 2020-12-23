import math

def primeFactors(n):
    arr= []
    while n % 2 == 0: 
        arr.append("2") 
        n = n / 2

    for i in range(3,int(math.sqrt(n))+1,2): 
        while n % i== 0: 
            arr.append(str(i))
            n = n / i 
              
    if n > 2: 
        arr.append(str(int(n)))
    return (arr)

while 1:
    num = int(input())
    if num == 0:
        print()
        break
    if num > 0:
        print(num,"="," x ".join(primeFactors(num)))
        
    if num < 0:
        newNum = -1 * num
        print(num,"=","-1", "x" , " x ".join(primeFactors(newNum)))
        


    
