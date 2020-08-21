n=(int)(input())
s=[2010,2015,2016,2017,2019]
while(n>0):
    n-=1
    k=(int)(input())
    if(k in s):
        print("HOSTED")
    else:
        print("NOT HOSTED")