for t in range(int(input())):
    n = int(input())
    x=int((n*4-n)/4)
    for i in range(n):
        if i<x:
            print(9,end='')
        else:
            print(8,end='')
    print()
    