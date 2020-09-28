for t in range(int(input())):
    n,k=map(int,input().split())
    
    if n<k:
        print("NO")
    elif n%2==0:     
        
        if n==k:
            print("YES")
            for i in range(k): 
                print(1,end=' ')
            print()
        elif n/2>=k:
            print("YES")
            for i in range(k-1):
                print(2,end=' ')
            print(n-(k-1)*2)            
        elif k%2==0:
            print("YES")
            for i in range(k-1):
                print(1,end=' ')
            print(n-(k-1))
        else:
            print("NO")
    elif n%2==1 and k%2==1:
         print("YES")
         for i in range(k-1):
             print(1,end=' ')
         print(n-k+1)
    elif n%2==1 and k%2==0:
        print("NO")
        
        
"""
        8
10 3
100 4
8 7
97 2
8 8
3 10
5 3
1000000000 9
output
"""