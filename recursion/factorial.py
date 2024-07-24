def recursionfactor(n):
    if n== 0:
        return 1
    else:
        return n * recursionfactor(n-1)
    
print("Factorial of a number")
no = recursionfactor(int(input("Enter a number: ")))
print(no)