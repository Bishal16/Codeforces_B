for t in range(int(input())):
    num = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    pp,nn=0,0
    p=[]
    n=[]
    for i in range(num):
        if a[i]==1:
            pp=pp+1
            p.append(pp)
            n.append(nn)
        elif a[i]==-1:
            nn=nn+1
            p.append(pp)
            n.append(nn)
        else:
            p.append(pp)
            n.append(nn)
    if a[0]!=b[0]:
        print("NO")
        continue
    x=0
    for i in range(num-1,0,-1):
        if  a[i]<b[i] and p[i-1]<1:
            print("NO")
            x=1
            break
        elif a[i]>b[i] and n[i-1]<1:
            print("NO")
            x=1
            break
    if x==0:
        print("YES")