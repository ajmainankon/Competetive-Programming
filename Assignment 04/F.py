list_size = int(input())
arr = []
arr = [int(x) for x in input().split()]

query = int(input())

for x in range(query):
    brr = [int(x) for x in input().split()]

    cry = arr[brr[0]:brr[1]+1]
    # print(cry)
    total = sum(cry)
    print(total)  



