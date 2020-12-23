
count = 1
while 1:
    cry = input()
    if cry == "*":
        break
    if cry == "Hajj":
        print("Case ", count,":", " Hajj-e-Akbar", sep="")
    if cry == "Umrah":
        print("Case ", count,":", " Hajj-e-Asghar", sep="")
    count = count + 1