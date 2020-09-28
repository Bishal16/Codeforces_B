for t in range(int(input())):
    a,b,x,y,n = map(int,input().split())

    d1=a-x
    d2=b-y
    if n<=d1 and n<=d2:
        if a<=b:
            a-=n
        else:
            b-=n
    
    else:
        if d2>=d1:
            if b<=a:
                b=y
                n-=d2
                if n>=d1:
                    a=x
                    n-=d1
                else:
                    a-=n
            else:
                b-=n
        else:
            if n>=d:
                a=x
                n-=d1
                if n>=d2:
                    b=y
                    n-=d2
                else:
                    b-=n
            else:
                a-=n
            
        print(a*b)