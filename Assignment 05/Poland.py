arr = [int(x) for x in input().split()]

n = arr[0]
m = arr[1]
used = []
both = []
poland = []
enemy = []
for x in range(n):
    s = input()
    if (used.count(s)):
        continue
    poland.insert(0, s)
    used.insert(0, s)

for x in range(m):
    s = input ()
    if(used.count(s)):
        if (poland.count(s)):
            both.insert(0, s)
            poland.remove(s)
        else:
            used.insert(0, s) 
            enemy.insert(0, s)

psz = len(poland)
bsz = len(both)
esz = len(enemy)

temp = bsz/2
esz += temp
psz += (bsz-temp)
	
if psz>esz:
    print ("YES")
else:
    print("NO")
	

