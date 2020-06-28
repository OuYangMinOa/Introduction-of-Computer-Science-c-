import random

def rrr():
    a = []
    for i in range(6):
        a.append(random.randint(0,10))
    print(*a)
    clockwise(*a)


def clockwise(ax,ay,bx,by,cx,cy):
    determind(ax,ay,bx,by,cx,cy)
    determind(bx,by,ax,ay,cx,cy)
    determind(cx,cy,ax,ay,bx,by)

def determind(ax,ay,bx,by,cx,cy):
    abx, aby = bx - ax, by - ay
    acx, acy = cx - ax, cy - ay
    cross = abx*acy-acx*aby
    if (cross <0):
        print(f'{ax},{ay}   {bx},{by}   {cx},{cy}')
    elif (cross ==0):
        print("not a taingle")
    else:
        print(f'{ax},{ay}   {cx},{cy}   {bx},{by}')
    
    
for i in range(10):
    rrr()
    print()
