/*To print the pattern 
A
B C
D E F 
G H I J 
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j, n;
    char k = 'A';
    
    clrscr();
    printf("\n Enter number of rows: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c ", k);
            k++;
        }
        printf("\n");
    }
    
    getch();
}
