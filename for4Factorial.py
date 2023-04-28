# WAP, to calculate factorial of number
num = int(input("Enter a number :"))
factorial = 1
for i in range(1, num+1):
    factorial *= i
print("Factorial is ", factorial)

# Output
# Enter a number: 6
# Factorial is 720
