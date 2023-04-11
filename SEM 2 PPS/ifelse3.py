# WAP, to find out the greatest number out of three
a = int(input("Enter first number :"))
b = int(input("Enter second number :"))
c = int(input("Enter third number :"))

if a > b:
    if a > c:
        g = a
    else:
        g = c
else:
    if b > c:
        g = b
    else:
        g = c 
print("Greatest:", g)

# Output
# Enter first number: 1
# Enter second number: 2
# Enter third number: 3
# Greatest: 3
