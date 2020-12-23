import math

num = input(" insert lower range ")
# print(num)
splitNum = num.split()
# print(splitNum)
numA= int(splitNum[0])
numB = int(splitNum[1])   

total = 0
if numA != 0 and numB != 0:
    for count in range(numA, numB+1):
        sqRoot = math.sqrt(count)
        if count == pow(sqRoot, 2):
            total += 1
    print(total)
else:
    print()

# C++

#include <iostream>
#include <cstdlib>
#include <cmath>
 
# using namespace std;
 
# int main(){
# 	int num1;
# 	int num2;
	
# 	while (cin >> num1 >> num2 && num1+num2) {
# 	    int total = 0;
		
# 		for (int count=int(sqrt(num1-0.1))+1; 
# 		count*count <=num2; 
# 		++count)
# 			++total;
# 		}
# 	return 0;
# }
