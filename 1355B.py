for t in range(int(input())):
    n = int(input())
    a = sorted(map(int, input().split()))    
    x,team=0,0
    for i in a:
        x=x+1
        if x==i:
            team=team+1
            x=0
    print(team)
    