# WAP, to take a number as input from user and  classify as prime or composite
num = int(input("Enter a number :"))
flag = False

if num == 1:
    print(num, "is not a prime number")
elif num > 1:
    for i in range(2, num):
        if (num % i) == 0:
            flag = True
            break
    if flag:
        print(num, "is composite number")
    else:
        print(num, "is a prime number")
# Output
# Enter a number: 3
# 3 is a prime number
