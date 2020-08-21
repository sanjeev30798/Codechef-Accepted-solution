import math
n=(int)(input())
while(n>0):
	n-=1
	l1,k=map(int,input().split(" "))
	l=list(map(int,input().split(" ")))
	sum1=sum(l)
	
	if(sum1%2==0):
		if(k==1):
			print('odd')
		else:
			print('even')
	else:
	    print('even')

