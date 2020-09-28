for test in range(int(input())):
    t = input()
    l = len(t)
    z,n=0,0
    for i in range(l):
        if t[i]=='0':
            z=z+1
        else:
            n=n+1
    if n>0 and z>0:
        for i in range(l):            
            print('10',end='')            
        print()
    else:
        print(t)