# Sample Test Cases generator program...
import random
T = random.randint(1,10)
print(T)
while(T>0):
	n = random.randint(1,20)
	print(n)
	#A = random.sample(range(1,1000),n)
	while(n>0):
		print(random.randint(1,1000000000),end = ' ')
		n-= 1
	print()
	T-= 1
