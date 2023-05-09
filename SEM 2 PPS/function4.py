# WAP, to print fibonnaci series upto n terms
def fibonnaci(n):  
   if n <= 1:  
       return n  
   else:  
       return(fibonnaci(n-1) + fibonnaci(n-2))  

nterms = 10
series=[]
for i in range(nterms):  
    series.append(fibonnaci(i))
    
print("Fibonacci sequence for",nterms,"terms")  
print(series)

# Output
# Fibonacci sequence:
# [0, 1, 1, 2, 3, 5, 8, 13, 21, 34]
