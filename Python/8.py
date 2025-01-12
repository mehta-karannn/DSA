n = int(input())
factorial=1
if n < 0:
    print("Factorial is not defined")
elif n==0:
    print("Factorial of 0 is ")
else:
    for i in range(1,n+1):
        factorial*=i
print(factorial)
