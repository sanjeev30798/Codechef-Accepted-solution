import math
n=(int)(input())
while(n>0):
	n-=1
	s=(input())
	w=[]
	for i in range(0,len(s)):
		d=s[0:i]+s[i+1:]
		#print(d)
		w.insert(i,int(d))
	print(min(w))