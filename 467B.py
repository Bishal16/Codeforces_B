n,m,k=map(int,input().split())
l=[]
for i in range(m+1): l.append(int(input()))
    
f,ans=l[m],0
for i in range(m):
    s=str(bin(f^l[i]))#;print(s);p
    s=s[2:]#;print(s)
    c=0
    for i in range(len(s)):
        if s[i]=='1':
            c+=1
    if c<=k:
        ans+=1
print (ans)
        

