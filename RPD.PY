import math
n=(int)(input())
while(n>0):
	n-=1
	k=(int)(input())
	s1=0
	l=list(map(int,input().split()))
	for i in range(0,len(l)):
		for j in range(i+1,len(l)):
			d=l[i]*l[j]
			sum1=0
			while(d!=0):
				sum1+=d%10
				d=d//10
			if(sum1>s1):
				s1=sum1
	print(s1)