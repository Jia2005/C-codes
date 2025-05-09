#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10], b[10][10], c[10][10], d[10][10], e[10][10], i, j, k, m, n, p, q;
    
    clrscr();
    printf("Enter the dimensions of the 1st matrix\n");
    scanf("%d%d", &m, &n);
    
    printf("Enter the matrix elements\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    printf("Enter the dimensions of the 2nd matrix\n");
    scanf("%d%d", &p, &q);
    
    printf("Enter the matrix elements\n");
    for(i=0; i<p; i++)
    {
        for(j=0; j<q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    
    for(i=0; i<p; i++)
    {
        for(j=0; j<q; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    
    if(m==p && n==q)
    {
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
                d[i][j] = a[i][j] - b[i][j];
            }
        }
        
        printf("Addition of the matrix is \n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
        
        printf("Subtraction of the matrix is \n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("%d\t", d[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix cannot be added or subtracted \n");
    }
    
    if(n==p)
    {
        for(i=0; i<m; i++)
        {
            for(j=0; j<q; j++)
            {
                e[i][j]=0;
                for(k=0; k<n; k++)
                {
                    e[i][j]=e[i][j]+(a[i][k]*b[k][j]);
                }
            }
        }
        
        printf("Multiplication of the matrices is \n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<q; j++)
            {
                printf("%d\t", e[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix cannot be multiplied \n");
    }
    
    getch();
}
