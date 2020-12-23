how_many_test = int(input())
cry = []

for x in range(how_many_test):
    text = input()
    how_many = int(input())
    for y in range(how_many):
        test_text = input()
        
        cry.append(test_text)
    for z in cry:
        if z in text:
            print("y")
        else:
            print("n")


