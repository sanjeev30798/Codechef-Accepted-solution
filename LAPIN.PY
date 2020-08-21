n=(int)(input())
while(n>0):
    n-=1
    s=input()
    l=len(s)
    if(l%2==0):
        s1=(list)(s[0:l//2])
        s2=(list)(s[l//2:])
        s1.sort()
        s2.sort()
        if(str(s1)==str(s2)):
            print("YES")
        else:
            print("NO")
    else:
        s1=(list)(s[0:l//2])
        s2=(list)(s[l//2 + 1:])
        s1.sort()
        s2.sort()
        if(str(s1)==str(s2)):
            print("YES")
        else:
            print("NO")
        