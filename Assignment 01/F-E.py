n = int(input())

monday = 0
tuesday = 0
wednesday = 0
thursday = 0 
friday = 0
saturday = 0
sunday = 0

arr = input()
splitNum = arr.split()
nice = []
for x in splitNum:
    nice.append(int(x))

InitTotal = sum(nice)
