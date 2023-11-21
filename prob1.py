def makeequal(real):   
    n=len(real) 
    op=0
    while True:  
        f=False
        s=0
        for i in range(n):      #checking if any two of the elements are same
            c=real[i] 
            for j in range(i+1,n):
                if real[0]==0:
                    continue
                if real[j]==c and real[j]!=0:   #if they are same then equalise them to zero
                    real[j]=0
                    real[0]=0
                    op+=2
                    f=True 
        if not f:
            a=min(real)
            b=max(real) 
            if a==b:
                for i in range(n):
                    if real[i]==a:
                        real[i]=0        
                op+=1  
            else:
                for i in range(n):     # doing the operation to equalise the min and max values
                    if real[i]==b:
                        real[i]=a
                op+=1        
        for i in real:    # if the sum is zero , break out of the loop
            s+=i     
        if s==0:
            break      
    print(op)             
a=input("enter the array : ").split(" ") 
b=[] 
for i in a:
    b.append(int(i))
         
makeequal(b)  








