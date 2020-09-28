n = int(input())
l = list(map(int,input().split()))
l.sort(reverse = True)
x = l[0]
y = 1
p='x'
#print(l)
for i in range(1,n):
    if l[i-1]==l[i]:
        if p=='x' and y%l[i]==0:
            pass
        elif p=='y' and x%l[i]==0:            
            pass
        else:
             y=l[i]
             continue
    elif x%l[i]==0:
        p='x'
    elif y%l[i]==0:
        p='y'    
    else:
        y=l[i]
        continue


print(x,y)