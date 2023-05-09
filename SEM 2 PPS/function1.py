# wap to find out sum and average of first 10 numbers using functions

def sum(num):
    sum=0
    for x in range(num+1):
        sum+=x
    return sum

def average(num):
    total_sum=sum(num)
    average=total_sum /num
    return average

total=sum(10)
avg=average(10)
print("sum of first 10 numbers is ",total)
print("Average of first 10 numbers is ",avg)

# Output
# sum of first 10 numbers is  55
# Average of first 10 numbers is  5.5
