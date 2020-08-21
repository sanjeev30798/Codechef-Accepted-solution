import math
n=(int)(input())
while(n>0):
	n-=1
	l=list(map(int,input().split(" ")))
	l.sort()
	c1=c2=0
	if(l[0]==l[1]):
		c1=1
	if(l[2]==l[3]):
		c2=1
	if(c1==1 and c2==1):
		print('YES')
	else:
		print('NO')
