n=(int)(input())
while(n>0):
	n-=1
	k=(int)(input())
	s=(list)(input())
	s1=(list)(input())
	s.sort()
	s1.sort()
	#print(s1,s)
	if(s1==s):
		print("YES")
	else:
		print("NO")

