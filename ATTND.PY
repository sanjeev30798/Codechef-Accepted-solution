n=(int)(input())
while(n>0):
	n-=1
	k=(int)(input())
	dict1={}
	a=[]
	i=0
	while(k>0):
		k-=1
		s=input()
		a.insert(i,s)
		i+=1
		h=s.find(' ')
		h=s[0:h]
		if(h not in dict1.keys()):
			dict1[h]=1
		else:
			dict1[h]+=1
		#print(a,h)
		y=dict1.keys()
	for i in a:
		f=i.find(' ')
		f=i[0:f]
		if(dict1[f]>1):
			print(i)
		else:
			print(f)

