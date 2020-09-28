from math import sqrt

n,k = map(int,input().split())
a,b,c=1,2*n+3,n*n+n-2*k

r = b**2 - 4*a*c

x1,x2=-1,-1
if r > 0:
    num_roots = 2
    x1 = (((b) + sqrt(r))/(2*a))     
    x2 = (((b) - sqrt(r))/(2*a))
    
elif r == 0:
    num_roots = 1
    x1 = (-b) / 2*a


x1,x2 = int(x1),int(x2)
#print(x1,x2)
if x2==-1:
    print(x1)
else:
    print(min(x1,x2))