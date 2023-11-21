def vault(a):
    b=0
    c=0
    for i in range(len(a)-1):
        if a[i]==0 and i!=0 :    # counting how many levels have 0 artifacts 
            b+=1
        c+=a[i]                  # doing the operation in all levels 
    d=b+c      # counting how many times the operation has been done
    print(d)         
    
    
aa=input("enter the sequence : ").split(" ")   
a=[] 
for i in aa:
    a.append(int(i))
vault(a)    

