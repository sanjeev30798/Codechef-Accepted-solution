n=(int)(input())
while(n>0):
	n-=1
	k,p=map(int,input().split(" "))
	a=list(map(int,input().split()))
	c=0
	c1=0
	#print(p//2,p//10)
	for i in range(0,k):
		
		if(a[i]>=(p//2)):
			c+=1
		elif(a[i]<=(p//10)):
			c1+=1
	if(c==1 and c1==2):
		print("yes")
	else:
		print("no")