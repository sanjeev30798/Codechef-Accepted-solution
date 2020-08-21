import math
n=(int)(input())

def prime(a):
	c=0
	for i in range(1,(int)(math.sqrt(a))+1):
		if(a%i==0):
			if(a==i*i):
				c+=1
			else:
				c+=2
	
	if(c==2):
		return True
	else:
		return False
while(n>0):
	n-=1
	a,b=map(int,input().split(" "))
	sum1=a+b
	c=1
	while(True):
		if(prime(sum1+c)==True):
			break
		else:
			c+=1
	print(c)
