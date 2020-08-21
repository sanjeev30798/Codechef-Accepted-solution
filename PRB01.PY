import math
n=(int)(input())
while(n>0):
    n-=1
    k=(int)(input())
    c=0
    for i in range(2,k):
        if(k%i==0):
            c=-1
            break
    if(c==0):
        print("yes")
    else:
        print("no")
        