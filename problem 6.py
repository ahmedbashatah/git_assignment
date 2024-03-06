def print_factors(x): #define (x) as the number to show the factors for
   print("The factors of",x,"are:")
   for i in range(1, x + 1):#check the factors for the number
       if x % i == 0:
           print(i)

num =int(input("Enter the number")) #enter the number to show the factors

print_factors(num) #show all the factors