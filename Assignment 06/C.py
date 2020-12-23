import math
make = int(input())
while make>0:
    cry = [int(x) for x in input().split()]
    ce = sum(cry)
    print(ce)
    cry = []
    make = make - 1
