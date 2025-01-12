n= int(input())
count =0
if n<0:
    n=-n
while n >0:
    n//=10
    count+=1
print(count)
