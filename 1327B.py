for t in range(int(input())):
    n = int(input())
    l = []
    x=0
    for i in range(n):
        a = list(map(int, input().split()))   
        if x!=0:
            continue
        if a[0]==0:
            x=1
            if len(l)==0:
                print("IMPROVE")
                print(i+1,1)
                continue
            else:
                #print("IMPROVE")
                #print(n,l[len(l)-1])
                if l[len(l)-1]!=n:
                    x=n
                    print("IMPROVE")
                    print(i+1,x)
                    continue
                for k in range(1,n+1):
                    if k!=l[k-1]:
                        x=k
                        break
                print("IMPROVE")
                print(i+1,x)
            
                
            continue
        
        for j in range(1,len(a)):
            if a[j] not in l:
                l.append(a[j])
                break
            elif j==len(a)-1:
                print("IMPROVE")
                l=list(set(l))
                l.sort()
               # print(l)
                if l[len(l)-1]!=n:
                    x=n
                    print(i+1,x)
                    break
                for k in range(1,n+1):
                    if k!=l[k-1]:
                        x=k
                        break
                print("IMPROVE")
                print(i+1,x)
                break
    if x==0:
        print("OPTIMAL")
    
    
    