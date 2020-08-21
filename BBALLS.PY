import math
n=(int)(input())
while(n>0):
    n-=1
    k=(int)(input())
    c=0
    while(k>0):
        h=(int)(math.log(k,2))
        c+=1
        
        k=k-2**h
    print(c-1)
       
   