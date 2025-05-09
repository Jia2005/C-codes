#include<stdio.h>
#include<conio.h>

void main()
{
    int a, b, c, n, i, x, f=1;  
    a=0;
    b=1;  
    
    clrscr();
    printf("Enter the range of Fibonacci series \n");
    scanf("%d", &n);
    
    printf("\n%d \n%d", a, b);
    
    printf("\nEnter the number to search: ");  
    scanf("%d", &x);  
    
    for(i=3; i<=n; i++)  
    {
        c = a + b;
        printf("\n%d", c);
        a = b;
        b = c;
        
        if(x == c)
        {
            f = 0;
            break;
        }
    }
    
    if(f == 0)
    {
        printf("\nYes, it is a part of Fibonacci series");
    }
    else
    {
        printf("\nNo, it is not a part of Fibonacci series");
    }
    
    getch();
}
