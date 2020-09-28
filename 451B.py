n=int(input())
a=list(map(int,input().split()))
sp=-1
ep=-1
ck=-1
for i in range(n-1):
    if a[i]>a[i+1]:        
        if ck==1:
            print("no")
            raise SystemExit
        if sp==-1:
            sp=i
        ep=i+1
    elif sp!=-1:
        ck=1
if sp==-1 and ep==-1:
    print("yes")
    print(1,1)
elif sp==0 and ep==n-1:
    print("yes")
    print(sp+1,ep+1)
elif sp!=0 and ep!=n-1:
    if a[sp]<a[ep+1] and a[ep]>a[sp-1]:
        print("yes")
        print(sp+1,ep+1)
    else:
        print("no")
elif sp!=0 and ep==n-1:
    if a[ep]>a[sp-1]:
        print("yes")
        print(sp+1,ep+1)
    else:
        print("no")
elif sp==0 and ep!=n-1:
    if a[sp]<a[ep+1]:
        print("yes")
        print(sp+1,ep+1)
    else:
        print("no")

    
#print(sp,ep)