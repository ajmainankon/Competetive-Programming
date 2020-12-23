how_many = int(input())
x = []
for nice in range(how_many):
    numbers = int(input())
    for nokia in range(1, numbers+1):
        x.append(nokia)
    nokiaa = str(x)
    zero = 0
    one = 0
    two = 0
    three = 0
    four = 0
    five = 0
    six = 0
    seven = 0
    eight = 0
    nine = 0
    for number in nokiaa:
        if number == "0":
            zero = zero + 1
        if number == "1":
            one = one + 1
        if number == "2":
            two = two + 1
        if number == "3":
            three = three + 1
        if number == "4":
            four = four + 1
        if number == "5":
            five = five + 1
        if number == "6":
            six = six + 1
        if number == "7":
            seven = seven + 1
        if number == "8":
            eight = eight + 1
        if number == "9":
            nine = nine + 1
    print (zero, one, two, three, four, five, six, seven, eight, nine)
    nokiaa = []
    x = []
    


