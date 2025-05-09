#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int n;
    float num;
    
    clrscr();
    printf("\n Enter the number: ");
    scanf("%d", &n);
    
    num = sqrt(n);
    
    if(n == num*num)
    {
        printf("\n Yes the number is a perfect square");
    }
    else
    {
        printf("\n No it is not a perfect square");
    }
    
    getch();
}
