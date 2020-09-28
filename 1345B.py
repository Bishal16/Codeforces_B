i=1
s=2
d=5
p=0
l=[]
while True:
   l.append(s)
   if s>1000000000:
       break
   s=s+d
   d=d+3
   i=i+1
  
    
import bisect
for t in range(int(input())):
    n = int(input())
    if n==1:
        print(0)
        continue
    ans=0
    while True:
        ix=bisect.bisect_left(l,n)
        val=l[ix-1]
        if l[ix]==n:
            val=l[ix]
        n=n-val
        #print(n)
        ans=ans+1
        if n==1 or n==0:
            break
        
    
    print(ans)
    '''
    s=0
    e=25819
    while s<=e:        
        m=(s+e)//2
        if n==l[m]:
            ans=l[m]
            e=m-1
            print(ans)
            break
        elif n<l[m]:
            e=m-1
        elif n>l[m]:
            s=m+1
        if s+1==e:
            ans=l[s]
            print(ans)
            break
        '''
    