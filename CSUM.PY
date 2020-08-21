n=(int)(input())
counter=0
while(n>0):
    n-=1
    l,k=map(int,input().split())
    a=(list)(map(int,input().split()))
    dict1={}
    flag=-1
    for i in a:
        if(i not in dict1.keys()):
            dict1[i]=1
        else:
            dict1[i]+=1
        if(i<k):
            if(k-i!=i and k-i in dict1.keys()):
                flag=1
                break
    if(flag==1):
        print('Yes')
    elif(k%2==0):
        if(k//2 in dict1.keys() and dict1[k//2]>=2):
            print('Yes')
            
        else:
            print('No')
    else:
        print('No')
    counter+=1