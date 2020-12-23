
import itertools

marbles = int(input())
queries = int(input())

arr = []
qrr = []

for marble in range(marbles):
    arr.append(input())

count = 0
crime = 0
crmea = 0

for query in range(queries):
    qrr.append(input())


for x in arr:
    for y in qrr:
        if x == y:
            count = count +1
            crime = arr.index(x)
            crmea = y

if count>0:
    print(crmea,  "found at " , crime+2)
if count ==0:
    print(crmea , "not found " )


            