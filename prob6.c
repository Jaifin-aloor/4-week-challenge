#include<stdio.h>
#include<string.h>


void isLexo(char a[],int b)
{
    int s=0;
    int n = strlen(a);    // finding the length of the string
    char tmp;             // declaring a temporary variable to swap
    for(int i=0;i<n-1;i++){
        for(int j =0;j<n-i-1;j++){
            if(a[j]>a[j+1]){      // actual swapping
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
                s++;             // counting how many swaps
            }
            
        }
    }
    if(s<=b){             //comparing number of swaps
        printf("YES");
    }
    else{
        printf("NO");
    }

}


int main()
{
    int Y;
    char X[50];
    printf("enter the cards and the number of operations allowed ? \n");
    scanf("%s %d",&X,&Y);
    isLexo(X,Y);
    return 0;
}


