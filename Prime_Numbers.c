#include<stdio.h>
#include<conio.h>

void main()
{
    int n, i, flag;
    
    clrscr();
    printf("\n These are the prime numbers between 50 to 150 \n");
    
    for(n=50; n<=150; n++)
    {
        flag=0;
        for(i=2; i<n; i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        
        if(flag==0)
        {
            printf("\n%d", n);
        }
    }
    
    getch();
}
