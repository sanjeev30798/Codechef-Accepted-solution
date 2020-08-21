n=(int)(input())
while(n>0):
	n-=1
	s=input()
	b=1
	for i in range(0,len(s),2):
		s1=s[i]+s[i+1]
		if(s1!='AB' and s1!='BA'):
			b=-1
	if(b==1):
		print('yes')
	else:
		print('no')