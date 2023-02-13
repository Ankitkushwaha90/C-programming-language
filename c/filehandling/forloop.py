def pyramid(n):
    for i in range(1,n):
        for j in range(1,i+1):
            print("*", end="")

        print("\r")

print("Enter the value of n::")
a = input()
n= int(a)
pyramid(n)