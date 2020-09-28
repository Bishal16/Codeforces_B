
def combination(n):
    if n==1:
        mx=0
    else:
        mx=int(n*(n-1)/2)
        
    return mx


n,m=map(int,input().split())
n1=n-(m-1)
mx=combination(n1)

p=int(n/m)
if p==1:
    p=2
mn=combination(p)*(m-1)
r=n-(p*(m-1))
if r==0:
    
    mn=mn-combination(p)
    mn=mn+combination(p-1)
else:
    mn=mn+combination(r)


print(mn,mx)
"""
5 1
outputCopy
10 10
inputCopy
3 2
outputCopy
1 1
inputCopy
6 3
outputCopy
3 6
"""