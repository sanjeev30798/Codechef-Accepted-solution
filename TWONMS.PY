import math
n=(int)(input())
while(n>0):
	n-=1
	k,p,h=map(int,input().split(" "))
	#a=list(map(int,input().split()))
	c1=math.ceil(h/2)
	c2=math.floor(h/2)
	c1=int(c1)
	c2=int(c2)
	k=k*(2**c1)
	p=p*(2**c2)
	print(max(k,p)//min(k,p))