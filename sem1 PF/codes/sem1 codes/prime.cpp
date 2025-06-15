def is prime(n)
if n<=1:
 return false
 for i in range(2,int(n**0.5)+1):
 if n % i==0
 return false
 return true
 print(is prime(11))
 print(is prime(4))
