s1=input()
s2=input()
l1=len(s1)
l2=len(s2)
c=0
i=l1-1
j=l2-1
while i>=0 and j>=0:    
    if s1[i]==s2[j]:
        c=c+2
    else:
        break
    i=i-1
    j=j-1
print(l1+l2-c)
#print(c)