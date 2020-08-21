import math
n=(int)(input())
while(n>0):
	n-=1
	h=(int)(input())
	l=list(map(int,input().split(" ")))
	l.sort()
	l=l[::-1]
	#print(l)
	sum1=0
	for i in range(0,h):
		#print(l[i])
		if(l[i]-i>0):
			sum1+=l[i]-i
	print(sum1%(10**9 +7))