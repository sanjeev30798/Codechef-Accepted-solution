import math
n=(int)(input())
while(n>0):
	n-=1
	s=(input())
	if(s=='B' or s=='b'):
		print("BattleShip")
	elif(s=='C' or s=='c'):
		print('Cruiser')
	elif(s=='D' or s=='d'):
		print('Destroyer')
	elif(s=='F' or s=='f'):
		print('Frigate')
		