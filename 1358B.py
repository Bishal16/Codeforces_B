for t in range(int(input())):
    n=int(input())
    a = list(map(int,input().split()))
    a.sort()
    ans,t=1,0
    for i in range(n):
        if a[i]<=ans+t:
            ans=ans+1+t
            t=0
        else:
            t=t+1
    print(ans)