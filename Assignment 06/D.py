make = int(input())
while make>0:
    cry = [int(x) for x in input().split()]
    if cry[0] < cry[1]:
        print ("<")
    if cry[0] > cry[1]:
        print (">")
    if cry[0] == cry[1]:
        print ("=")
    make = make - 1
