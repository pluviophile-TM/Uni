
def mat_multiply(mat,a,b,c,d):
    res=1
    for i in range(a,b+1):
        for j in range(c,d+1):
            res*=mat[i][j]  
    return res


def magic(mat,x,y,k):
    res=0
    for x1 in range (0,x):
        for x2 in range(x1,x):
            for y1 in range(0,y):
                for y2 in range(y1,y):
                    if mat_multiply(mat,x1,x2,y1,y2)==k:
                        res+=1
                        #if u wanna save them do it

    return res


x,y,k=[int (x) for x in input().split()]
mat=[]
for i in range(x):
    mat.append([int (x) for x in input().split()])


print(magic(mat,3,4,12))                        
