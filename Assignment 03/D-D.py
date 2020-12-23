import numpy as np

inp = int(input())
d = []
i = 1
for x in range(inp):
    a = input()
    g = a.split()
    b = int(g[0])
    c = int(g[1])
    e = int(g[2])
    d.append(b)
    d.append(c)
    d.append(e)
    max_value = np.max(d)
    min_value = np.min(d)
    d.remove(max_value)
    d.remove(min_value)
    print("Case", i,":", d[0])
    i = i+1
    d.remove(d[0])
    
