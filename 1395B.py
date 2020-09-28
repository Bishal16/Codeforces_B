n,m,x,y=map(int,input().split())

print(x,y)
p=-1
if y!=1:    
    print(1,y)
    p=0
for i in range(1,n+1):
    if i%2==1:
        j=1
        while j<=m:
            if (i==x and j==y )or (p==0 and i==1 and j==y):
                pass
            else:
                print(i,j)
            j=j+1
    else:
        j=m
        while j>=1:
            if (i==x and j==y )or (p==0 and i==1 and j==y):pass
            else:
                print(i,j)
            j=j-1

