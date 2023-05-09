# wap, to find out greatest of three numbers using functions

def greatest(a,b,c):
    
    if a>b and a>c:
        biggest=a
    elif b>c and b>a:
        biggest=b
    else:
        biggest=c
    return biggest

bigger=greatest(10,20,15)
print("Greatest of 3 numbers is",bigger)

# Output
# Greatest of 3 numbers is 20