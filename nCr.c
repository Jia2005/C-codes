//to calculate nCr
#include<stdio.h>
#include<conio.h>

unsigned long fact(int n)
{
    unsigned long f;
    f = 1;
    while(n != 0) 
    {
        f = f * n;
        n--;
    }
    return f;  
}

void main()
{
    int n, r;
    unsigned long n1, n2, nCr;
    
    clrscr();
    printf("\nEnter the values of n and r: ");
    scanf("%d%d", &n, &r);
    
    if(n >= r)
    {
        n1 = fact(n);
        n2 = fact(r) * fact(n-r);
        nCr = n1 / n2;
        printf("Value of nCr is %lu", nCr);  // %lu for unsigned long
    }
    else
    {
        printf("nCr of these 2 numbers is not possible \n");
    }
    
    getch();
}
