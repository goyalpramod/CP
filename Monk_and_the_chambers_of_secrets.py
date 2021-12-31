n,x = map(int, input().split())
arr = list(map(int, input().split()))
a = []
for i in range(n):
    a.append([arr[i],i+1]);
for _ in range(x):
    m = [-1,-1]
    p = -1
    new = []
    for i in range(min(x,len(a))):
        y = a.pop(0)
        if y[0] > m[0]:
            m[0],m[1] = y[0],y[1]  #something about this line
            p = i
        y[0] = max(y[0]-1,0)
        new.append(y)
    print(m[1],end=' ')
    new.pop(p)
    a += new


