for t in range(int(input())):
    n = int(input())
    a = list(map(int,input()))
    s,e=-1,-1
    for i in range(n): 
        if a[i]==1 and s==-1:
            s=i
        elif a[i]==0 and s>-1:
            e=i
    if s==-1 or e==-1:
        for i in range(n):
            print(a[i],end='')
        print()    
    else:
        for i in range(n):
            if i<s or i>=e:
                print(a[i],end='')
        print()
    
    
    ;
