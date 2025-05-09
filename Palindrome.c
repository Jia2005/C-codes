#include<stdio.h>
#include<conio.h> 
#include<string.h>

void main()
{
    int i, j, len, flag=0; 
    char a[50], reva[50];
    
    clrscr();
    printf("\n Enter a string: ");    
    gets(a);
    puts(a);
    
    len = strlen(a);
    for(i=len-1, j=0; i>=0; i--, j++)
    { 
        reva[j] = a[i];
    }
    reva[j] = '\0';    
    puts(reva);
    
    for(i=0; i<len; i++)
    {
        if(reva[i] != a[i])
        {
            flag = 1;
            break; 
        } 
    }
    
    if(flag == 0)
    {
        printf("\n The given string is a palindrome");
    }
    else
    {
        printf("\n The given string is not a palindrome");
    }
    
    getch();    
}
