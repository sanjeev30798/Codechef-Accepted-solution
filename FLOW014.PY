n=(int)(input())
while(n>0):
    n-=1
    a=list(input().split(" "))
    b=a[1]
    c=a[2]
    a=a[0]
    #print(a)
    a=(float)(a)
    b=float(b)
    c=float(c)
    #print(a,b,c)
    if(a>50):
        a=True
    else:
        a=False
    if(b<0.7):
        b=True
    else:
        b=False
    if(c>5600):
        c=True
    else:
        c=False
    #print(a,b,c)
    if(a==True and  b==True and c==True):
        print(10)
    elif(a==True and b==True):
        print(9)
    elif(c==True and b==True):
        print(8)
    elif(a==True and c==True):
        print(7)
    elif(a==True or b==True or c==True):
        print(6)
    elif(a==False and b==False and c==False):
        print(5)
    
    