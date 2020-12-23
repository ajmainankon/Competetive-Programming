
from collections import Counter 
mum = [int(x) for x in input().split()]
A = mum[0]
B = mum[1]
C = mum[2]
D = mum[3]

X = [a+b for a in A for b in B] 
Y = [c+d for c in C for d in D] 
counts = Counter(Y) 
ans = 0 
for x in X: 
  if -x in counts: 
    ans += counts[-x] 
print (ans) 