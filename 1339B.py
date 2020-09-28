for t in range(int(input())):
    n = int(input())
    l=list(map(int, input().split()))
    l.sort()
    m=n//2
    le=m
    re=m
    i=0
    ans=[]
    ans.append(l[m])
    while True:
        if i%2==0 and le-1>=0 :
            le=le-1
            ans.append(l[le])
        elif i%2==1 and re+1<=n-1:
            re=re+1
            ans.append(l[re])
        else:
            break
        i=i+1
        #print(ans)
    for i in range(n):
        print(ans[i],end=' ')
    print()