n=(int)(input())
while(n>0):
	n-=1
	s1=input()
	s2=input()
	c1=0
	c2=0
	c3=0
	c4=0
	for i in range(0,len(s1)):
		if(s1[i]=='?' and s2[i]=='?'):
			c1+=1
		elif(s1[i]=='?' and s2[i]!='?'):
			c2+=1
		elif(s1[i]!='?' and s2[i]=='?'):
			c3+=1
		elif(s1[i]!=s2[i]):
			c4+=1
	min1=c4
	max1=c3+c2+c1+c4
	print(min1,max1)