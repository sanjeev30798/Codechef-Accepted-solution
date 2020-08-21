import math
n=(int)(input())
while(n>0):
	n-=1
	l=list(input())
	dict1={}
	for i in range(0,len(l)):
		if(l[i] not in dict1.keys()):
			dict1[l[i]]=1
		else:
			dict1[l[i]]+=1
	g=list(dict1.values())
	if(max(g)==(sum(g)-max(g))):
		print('YES')
	else:
		print('NO')