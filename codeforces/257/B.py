n,m=input().split()
n=int(n)
m=int(m)
if n==m:
    print(n-1,n)
else:
    print(min(n,m)+abs(n-m)-1,min(n,m))



        


