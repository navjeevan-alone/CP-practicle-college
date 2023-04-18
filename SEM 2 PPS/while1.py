# WAP, to calculate sum and average of first 10 numbers using while and list

# Using while
x = 1
sum = 0
while x <= 10:
    sum += x
    x += 1
average = sum/10
print("sum is ", sum, " & average is ", average)
# ------------------------------------------------------------ #
# Using list
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
i = 0
sum = 0
while i < len(numbers):
    sum += numbers[i]
    i += 1
average = sum/len(numbers)
print("sum is ", sum, " & average is ", average)
