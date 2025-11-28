a = int(input("test"))
c=0
d=0
while a!=0:
    c=a%10
    a= a//10
    d=d*10+c

print(d)