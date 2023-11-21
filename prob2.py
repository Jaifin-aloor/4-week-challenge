def cand(a,arr):
    f=0
    x=0
    y=[]
    z=[]
    for i in range(len(arr)):  # to check the number of zeros 
        if arr[i]==0:
            x+=1
            for j in range(len(arr)):
                if arr[j]==1:
                    if i-j<a and i-j>(-1*a):  # if the distace between a zero and a one is less than the distribution range then the island can recive freshwater
                        f+=1
                        print(i,j)
                        y.append(j)
                        z.append(i)                                  
                        break 
    if f!=x:
        print("-1")  
    if f==x:
        print("1")    
        
        
       
a=int(input("enter the distribution range (k) : "))     
b=input("enter the array of islands  : ").split(" ")
c=[]      
for i in b:
    c.append(int(i))      
cand(a,c) 
