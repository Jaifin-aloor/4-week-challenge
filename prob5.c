#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void passwrdstrength(char a[])
{
    int size = strlen(a);
    int score = 0;
    if(size>16)              // checking length of the password 
    {
        score+=25;
    }
    else if(size>=8)
    {
        score+=15;
    }
    bool Upper = false,lower = false,number = false,special = false;
    for(int i=0;i<=size;i++)
    {
        if(a[i]>='A' && a[i]<='Z'){    // checking if the password has uppercase charecters in it.
            Upper=true;
        }
        if(a[i]>='a' && a[i]<='z'){    // checking if the password has lowercase charecters in it.
            lower=true;
        }
        if(a[i]>='!' && a[i]<='/' || a[i]=='@' || a[i]=='?'){    // checking if the password has special charecters in it.
            special=true;
        }
        if(a[i]>='0' && a[i]<='9'){     // checking if the password has number charecters in it.
            number=true; 
        }
    }
    if(Upper==true){
        score+=10; 
    }
    if(lower==true){
        score+=10;
    }
    if(special==true){
        score+=30;  
    }
    if(number==true){
        score+=25;  
    }
    printf("password strength : %d/100\n",score);

}

int main()
{
    char password[50];
    printf("enter your password : ");
    scanf("%s",&password);
    passwrdstrength(password);
    return 0 ;
}

