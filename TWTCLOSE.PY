n,k=map(int,input().split(" "))
i=0
count=0
dict1={}
for i in range(0,k):
    s=input().split(" ")
    if(s[0]=='CLICK'):
        if(s[1] not in dict1.keys()):
            dict1[s[1]]=1
            count+=1
        elif(dict1[s[1]]==1):
            dict1[s[1]]=0
            count-=1
        elif(dict1[s[1]]==0):
            dict1[s[1]]=1
            count+=1
    elif(s[0]=='CLOSEALL'):
        dict1={}
        count=0
    print(count)
    
    