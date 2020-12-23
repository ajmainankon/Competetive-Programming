import math
arr = [] 
def primeFactors(n):
    while n % 2 == 0: 
        arr.append("2") 
        n = n / 2

    for i in range(3,int(math.sqrt(n))+1,2): 
        while n % i== 0: 
            arr.append(str(i))
            n = n / i 
              
    if n > 2: 
        arr.append(str(int(n)))
    


while True:
    a = int(input())
    if a == 0:
        break
    if a > 0:
        primeFactors(a)
        nice = list(dict.fromkeys(arr))
        also = len(nice)
        print(a,":", also)
        arr = []
        