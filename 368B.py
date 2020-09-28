n,m = map(int,input().split())
b=list(map(int,input().split()))
a=set()
unq=[0]*n
for i in range(n-1,-1,-1):
    a.add(b[i])
    unq[i]=len(a)    
l=[]
for i in range(m):
    l.append(int(input()))
j=0
for i in range(m):
    print(unq[l[i]-1])
        
e 