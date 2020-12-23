make = int(input())
while make>0:
    cry = [int(x) for x in input().split()]
    cry.sort()
    print(cry[1])
    cry = []
    make = make - 1
