n=input()
n=int(n)
a=list(map(int,input().split()))

a.sort()
for i in range (0,10000000000):
    if pow(i,n-1)>=a[n-1]:
        bs=i
        #print("i",i)
        break
pr=pow(bs-1,n-1)
ps=pow(bs  ,n-1)

if a[n-1]-pr >= ps-a[n-1]:
    bs=bs
else:
    bs=bs-1
cost=0
for i in range(len(a)):
    c=a[i]-pow(bs,i)
    if c<0:
        c=c*-1
    cost=cost+c
    
    
print(cost)
    