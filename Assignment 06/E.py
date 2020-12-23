import math
PI = math.pi
make = int(input())
while make>0:
    cry = int(input())

    w = 0.6 * cry
    r = 0.2 * cry

    mam = PI * r * r
    fam = w * cry - PI * r * r
    print('%.2f'%mam, '%.2f'%fam)
    
    make = make - 1
