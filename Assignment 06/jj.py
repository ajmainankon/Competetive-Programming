make = int(input())
while make>0:
    cry = [int(x) for x in input().split()]
    if sum(cry) == 180:
        print("YES")
    else:
        print("NO")
        
    make = make - 1
