n=(int)(input())
while(n>0):
	n-=1
	a,b=map(int,input().split(" "))
	i=1
	while(a>=0 and b>=0):
		a=a-i
		if(a<0):
			break
		#print('a=',a,i)
		i+=1
		b=b-i
		if(b<0):
			break
		#print('b=',b,i)
		i+=1
	if(a<0):
		print('Bob')
	if(b<0):
		print('Limak')
