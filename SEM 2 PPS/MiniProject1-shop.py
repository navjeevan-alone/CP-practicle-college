print("Welcome to N1😎 Shops🤞")
grocery=[{"sr":1,"item":"milk","rate":40},
        {"sr":2,"item":"eggs","rate":60},
        {"sr":3,"item":"cream","rate":500},
        {"sr":4,"item":"bread","rate":50},
        {"sr":5,"item":"jam","rate":100},
]
print("Checkout our Menu : ")
print("SR|\tItem\tRate")
print("-----------------")
for x in range(len(grocery)):
    print(grocery[x]["sr"],"|\t",grocery[x]["item"],"\t",grocery[x]["rate"])
print("-----------------")
print("What you want to buy?")
print("Select Sr.No & Enter No of Items:")

isShoping=True
i=0
total=0

while isShoping==True:
    sr=int(input("Enter sr no: "))
    quantity=int(input("Enter quantity: "))
    total+=quantity*grocery[sr-1]["rate"]
    isContinue=input("shop more? [y/n] : ")
    if isContinue=="n":
        isShoping=False
    else:
        i+=1

def final_bill(total):
    print("Billing :-------")
    print("Total purchase :\t",total)
    total_with_tax=total+total*5/100
    tax=total*5/100
    print("Taxes 5% : ",tax)
    if total>=2000:
        total_with_tax-=total*10/100
        print("Congrats! You got 10% discount")
    return total_with_tax

print("Your bill is Rs.",final_bill(total))
print("Come again!!👍👌")