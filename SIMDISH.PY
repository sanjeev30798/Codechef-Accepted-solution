import math
n=(int)(input())
while(n>0):
	n-=1
	#k,p,h=map(int,input().split(" "))
	a=list(input().split())
	b=list(input().split())
	c=0
	for i in a:
		if(i in b):
			c+=1
	if(c>=2):
		print("similar")
	else:
		print('dissimilar')
