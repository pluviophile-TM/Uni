
def mat_multiply(mat,a,b,c,d):
    res=1
    print("***********************")
    for i in range(a,b+1):
        for j in range(c,d+1):
            res*=mat[i][j]
            print(mat[i][j],end="")
        print()   
    print("mul=",res)     
    return res


def magic(mat,x,y,k):
    res=0
    for x1 in range (0,x):
        for x2 in range(x1,x):
            for y1 in range(0,y):
                for y2 in range(y1,y):
                    if mat_multiply(mat,x1,x2,y1,y2)==k:
                        print(x1,x2,y1,y2)
                        res+=1

    return res


a = [
    [1, 1, 2, 3],
    [3, 2, 1, 1],
    [2, 3, 2, 6]
]


print(magic(a,3,4,12))                        
