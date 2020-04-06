# Sample Test Cases generator program...

import random

# T = random.randint(1,5)
# print(T)
T = 1
while(T>0):
	n = random.randint(1,100)
	print(n)
	for i in range(0, n):
		print(random.randint(-100, 100), end = ' ')
	print()
			
	'''
	k = random.randint(1,10)
	r = random.randint(1,10)
	print(n,k,r,sep=' ',end='\n')
	s = [n,k,r]
	s.sort()
	p = s[2]
	print(random.randint(1,p))
	A = random.sample(range(1,1000),n)
	
	back = 0
	while(n>0):
		rnd = random.randint(1,3)
		if(rnd != 3 and back != 3):
			while(rnd == back):
				rnd = random.randint(1,3)
		if(rnd == 3):
			print(-1,end=' ')
		else:
			print(rnd,end = ' ')
		back = rnd
		n-= 1		
	print()
	'''

	T-= 1
