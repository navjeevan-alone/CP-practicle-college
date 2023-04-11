# WAP, to take marks of five subjects of students as input and calculate its percentage & display his grades

sub1 = int(input("Enter sub1 Marks :"))
sub2 = int(input("Enter sub2 Marks :"))
sub3 = int(input("Enter sub3 Marks :"))
sub4 = int(input("Enter sub4 Marks :"))
sub5 = int(input("Enter sub5 Marks :"))

max_marks = 500
total = sub1+sub2+sub3+sub4+sub5
percentage = total*100/max_marks

print("You got :", percentage,"%")

if percentage > 80:
    print("Grade A")
elif percentage > 50:
    print("Grade B")
elif percentage > 35:
    print("Grade C")
else:
    print("Fail")

# Output
# Enter sub1 Marks: 90
# Enter sub2 Marks: 50
# Enter sub3 Marks: 60
# Enter sub4 Marks: 70
# Enter sub5 Marks: 50
# You got: 64.0%
# Grade B
