#include<stdio.h>
#include<conio.h>

void main()
{
    int n, sum = 0;
    
    clrscr();
    
    for(n = 5; n*(n+1) < 400; n++)
    {
        sum = sum + 5;
    }
    
    printf("The sum is %d \n", sum);
    
    getch();
}
