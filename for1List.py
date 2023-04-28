# WAP, to calculate sum and average of first 10 numbers using for loop & list
list=[1,2,3,4,5,6,7,8,9,10]
sum=0
avg=0
for num in list:
    sum+=num
avg=sum/len(list)
print("sum is",sum)
print("avg is",avg)

# Output
# sum is 55
# avg is 5.5
