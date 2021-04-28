INF = 99999
n=4 
def floyd(n,d,p):
    # for i in range(0,n ):
    #     for j in range(0,n):
    #         p[i][j]=0
    #         d[i][j]=INF

    for k in range(0,n):
        for i in range(0,n):
            for j in range(0,n):
                if d[i][k]+d[k][j]<d[i][j]:
                    p[i][j]=k+1
                    d[i][j]=d[i][k]+d[k][j]

def path(q,r,p):
    print(q,r,p[q][r])
    if p[q][r]!=0 :
        path(q,p[q][r],p)
        print("v",p[q][r])
        path(p[q][r],r,p)



d = [[0, 5, INF, 10],
    [INF, 0, 3, INF],
    [INF, INF, 0,   1],
    [INF, INF, INF, 0]
         ]
p = [([0]*(n+5)) for _ in range(n+5)]

floyd(n,d,p)
path(0,3,p)
for x in d:
    print(x)