letters = "abcdefghijklmnopqrstuvwxyz"


def Checker(string):

    string = string.replace(" ", "").lower()

    total = 0

    for l in letters:
        count = string.count(l)
        if count > 1:
            total += count

    if total > 0:
        print("Duplicates found.")
    else:
        print("No duplicates found.")


Checker("stringssdsda")


