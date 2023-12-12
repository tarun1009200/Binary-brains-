num = int(input("enter the value:"))
temp = num
rev = 0
while(num > 0):
    dig =num%10
    rev = rev * 10  + dig
    num = num // 10
    if(temp==rev):
        print("this value is a palindrome number(true)")
    else:
        print("enter value is not a palindrome number(false)")