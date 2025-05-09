//to calculate summation of each row and column from user-input matrix
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10], i, j, m, n, rowsum, colsum;

    clrscr();
    printf("Enter the dimensions of the matrix (rows columns):\n");
    scanf("%d%d", &m, &n);

    printf("Enter the matrix elements:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe matrix is:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t", a[i][j]); 
        }
        printf("\n");
    }

    printf("\nRow sums:\n");
    for(i=0; i<m; i++)
    {
        rowsum = 0;
        for(j=0; j<n; j++)
        {
            rowsum = rowsum + a[i][j];
        }
        printf("The sum of row %d is %d\n", i+1, rowsum);
    }

    printf("\nColumn sums:\n");
    for(j=0; j<n; j++) 
    {
        colsum = 0;
        for(i=0; i<m; i++)  
        {
            colsum = colsum + a[i][j];
        }
        printf("The sum of column %d is %d\n", j+1, colsum);
    }

    getch();
}
