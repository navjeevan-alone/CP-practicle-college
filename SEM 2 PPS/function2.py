# wap, to calculate factorial of number using functions

def factorial(num):
    fact=1
    while num>0:
        fact*=num
        num-=1
    return fact 
factorial_num=factorial(5)
print("Factorial of 5 is ",factorial_num)

# Output 
# Factorial of 5 is 120