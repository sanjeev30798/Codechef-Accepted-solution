n=(int)(input())
while(n>0):
    n-=1
    s=input()
    f=set(s)
    if(len(f)!=2):
        print("NO")
        continue
    d1=""
    d2=""
    flag=0
    for i in s:
        if(flag==0):
            d1=d1+str(i)
            flag=1
        else:
            d2=d2+str(i)
            flag=0
    d=set(d1)
    d3=set(d2)
    if(len(d)==1 and len(d3)==1):
        print('YES')
    else:
        print("NO")
        