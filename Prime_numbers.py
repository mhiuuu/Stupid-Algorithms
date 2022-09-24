#import to use sqrt()
import math
#get the number from user
n = int(input("Enter a number?: "))
#prime number is always greater than 1
if num > 1:
    #If num is not a prime number => num = k1 * k2 which k1 =< k2 < n => k1 * k1 =< k1 * k2 (k1*k2 = n) => so k1 =< sqrt(n) thereby we just need to check from 2 to sqrt(n)
    for i in range(2,round(math.sqrt(num)+1)):
       if (num % i) == 0:
           print(num,"is not a prime number")
           print(i,"times",num//i,"is",num)
           break
       else:
           print(num,"is a prime number")
else: 
  print(num, "is not a prime number")
       
# if input number is less than
# or equal to 1, it is not prime
else:
   print(num,"is not a prime number")

    
