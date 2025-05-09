/* To print pattern 
1
2 4
3 6 9
4 8 12 16
5 10 15 20 25
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j, n;
    
    clrscr();
    printf("\n Enter number of rows: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ", j*i);
        }
        printf("\n");
    }
    
    getch();
}
