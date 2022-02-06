import threading
import os
import numpy as np

def checkAll(s,algo):
    for t in s:   
        for u in algo:
            flag=True    
            if not check(t,u):
                flag=False
                break
        if flag:
            print(t,end="")
    # print("Task assigned to  {} ended".format(threading.current_thread().name))
    # print("ID of process running task : {}".format(os.getpid()))
    print('-'*100)

def check(s,algo):
    s=s.split(',')
    if s[algo[0]]==algo[1]:   
        return True
    return False




if __name__ == "__main__":
  
    
    file = open('text.txt')
    content = file.readlines()
    file.close()
    a=np.array_split(content, 4)
    
    algo = [(1,'pixar'),(5,'Ubuntu OS')]

    t1 = threading.Thread(target=checkAll(a[0],algo))
    t2 = threading.Thread(target=checkAll(a[1],algo))  
    t3 = threading.Thread(target=checkAll(a[2],algo)) 
    t4 = threading.Thread(target=checkAll(a[3],algo)) 
    
    t1.start()
    t2.start()
    t3.start()
    t4.start()
    
    t1.join()
    t2.join()
    t3.join()
    t4.join()
