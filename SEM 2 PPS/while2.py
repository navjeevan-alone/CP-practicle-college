# WAP, to check wether the entered number is armstrong or not using while

num = int(input("Enter a number: "))
num2 = num
sum = 0
while num > 0:
    x = num % 10
    sum += x**3
    num = num//10

if sum == num2:
    print("Number is armstrong")
else:
    print("Number is not armstrong")

# Output
# Enter a number: 153
# Number is armstrong
