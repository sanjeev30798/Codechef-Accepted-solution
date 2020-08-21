n=(int)(input())
while(n>0):
    n-=1
    s=(list)(input())
    c1=0
    c2=0
    for i in s:
        if(i=='0'):
            c1+=1
        elif(i=='1'):
            c2+=1
        
        if((c1>=11 and c2<10)):
            print("LOSE")
            break
        elif((c2>=11 and c1<10)):
            print("WIN")
            break
        elif(c1>=10 and c2>=10 and c1-c2>=2):
            print("LOSE")
            break
        elif(c2>=10 and c1>=10 and c2-c1>=2):
            print("WIN")
            break
            
        