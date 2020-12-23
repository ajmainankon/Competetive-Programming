# for i in range(int(input())):
#     x = int(input())
#     sum=0
#     for j in range(x/2):
#         if(x%j==0):
#             sum += j
#     print(sum)
import math

# n = int(input())
# if 1<= n <= 500000:
#     total = 0
#     i = 1
#     while i <= n : 
#         if (n % i==0) and (i != n):
#             total = total + i
#         i = i + 1
#     print(total) 

    
# def my_function(a) : 
#     total = 0
#     count = 2
#     while count<= (math.sqrt(a)) : 
#         if (a % count == 0) : 
#             if (count == (a / count)) : 
#                 total = total + count; 
#             else : 
#                 total = total +  (count + a/count); 
#         count = count + 1
#     return (int(total + 1))
# a = int(input()) 
# print(my_function(a))

a = int(input())
total = 0
count = 2
if 1<= a <= 500000:
    while count<= (math.sqrt(a)) : 
        if (a % count == 0) : 
            if (count == (a / count)) : 
                total = total + count; 
            else : 
                total = total +  (count + a/count); 
        count = count + 1
    print (int(total + 1))
