# wap, to check wether the entered number is pallindrome or not using whilenum = int(input("Enter a number: "))
num = int(input("Enter a number: "))
num2 = num
sum = 0
rev = 0
while num > 0:
    digit = num % 10
    rev = rev*10+digit
    num //= 10

if num2 == rev:
    print("Number is pallindrome")
else:
    print("Number is not pallindrome")

# Output
# Enter a number: 121
# Number is pallindrome
