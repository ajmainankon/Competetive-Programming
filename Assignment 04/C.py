T = int(input())

while(T>0):

    s = input()
    c = 0
    o = 0 
    count=0
    sLen = len(s)
    for i in range(sLen-1):
        if((s[i]=='0'and s[i+1]=='1') or (s[i]=='1'and s[i+1]=='0')):
            count = count + 1

            if(s[i]=='0'):
                o = o + 1
            if(s[i]=='1'):
                c = c+ 1

    if(s[sLen-1]=='0'):
        o = o +1
    else:
        c = c+1


    if((count>2)or((s[0]=='1')and(s[sLen-1]=='1')and(o!=0))or(o==sLen)):
        print("NO")
    else:
        print("YES")   














    T = T - 1