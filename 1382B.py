for t in range(int(input())):
    n = int(input())
    a = list(map(int,input().split()))
    s=sum(a)
    if s==n:
        if n%2==1:
            print("First")
        else:
            print("Second")
    else:
        for i in range(n):
            if a[i]>1:
                s=i
                break
        if s%2==0:
            print("First")
        else:
            print("Second")
    