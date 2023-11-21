#include<stdio.h>
void fibo(int n,int x)
{
    int a=0;
    int b=1;
    int c=1;
    n=n-1;
    int arr[n+x];
    arr[0]=a;   // initializing the fibonacci sequence
    arr[1]=b;
    arr[2]=c;
    printf("numbers are : \n");
    switch (n)
    {
    case 0:
        printf("%d\n%d\n%d\n",a,b,c);
        break;
    case 1:
        printf("%d\n%d\n",b,c);
        break;
    case 2:
        printf("%d\n",c);
        break;    
    default:
        break;
    }
    for(int i=3;i<n+x;i+=1)
    {
        a=b;
        b=c;
        c=a+b;
        arr[i]=c;
        if(i>=n){       // only printing the numbers if they are greater then or equal to the nth fibonacci number
            printf("%d\n",arr[i]);    
        }

    }
    
}
int main()
{
    int n,x; 
    printf("enter n and x : \n");
    scanf("%d\n%d",&n,&x);
    fibo(n,x);
    return 0 ;
}


