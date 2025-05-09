// to calculate Y in Y= ([A] + [B]) * ([C] * [D]), where A,B,C and D are 4 matrices taken through user-input
#include<stdio.h>
#include<conio.h>
void Accept(int a[10][10],int m,int n)
{
int i,j;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf(“%d”,&a[i][j]);
}
}
}
void Display(int a[10][10],int m,int n)
{
int i,j;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf(“%d”,a[i][j]);
}
printf(“\n”);
}
}
void Add(int a[10][10],int b[10][10],int c[10][10],int m,int n)
{
int i,j;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
}
void Multiply(int e[10][10],int f[10][10],int h[10][10],int m,int z,int n)
{
int i,j,k;
for(i=0;i<m;i++)
{2
for(j=0;j<z;j++)
{
e[i][j]=0;
{
for(k=0;k<n;k++)
{
e[i][j]=e[i][j]+(a[i][k]*b[k][j]);
}
}
}
}
void main()
{ 
int a[10][10],b[10][10],c[10][10],d[10][10],e[10][10],f[10][10],h[10][10],m,n,x,p,q,z,w,y;
clrscr();
printf(“Enter the dimension of matrix A \n”);
scanf(“%d%d”,&m,&n);
printf(“Enter the elements of matrix A \n”);
Accept(a,m,n);
printf(“Matrix A is \n”);
Display(a,m,n);
printf(“Enter the dimension of matrix B \n”);
scanf(“%d%d”,&p,&q);
printf(“Enter the elements of matrix B”);
Accept(b,p,q);
printf(“Matrix B is \n”);
Display(b,p,q);
printf(“Enter the dimension of matrix C \n”);
scanf(“%d%d”,&y,&z);
printf(“Enter the elements of matrix C”);
Accept(c,y,z);
printf(“Matrix C is \n”);
Display(c,y,z);
printf(“Enter the dimension of matrix D \n”);
scanf(“%d%d”,&w,&x);
printf(“Enter the elements of matrix D”);
Accept(d,w,x);
printf(“Matrix D is \n”);
Display(d,w,x);
if(m==p && n==q)
{
Add(a,b,e,m,n);
printf(“Addition of A and B is \n”);
Display(e,m,n);
}
else
{
printf(“A and B cannot be added \n”);
}
if(z==w)
{
Multiply(c,d,f,y,z,x);
printf(“Multiplication of C and D is \n”);
Display(f,y,x);
}
else
{
printf(“C and D cannot be multiplied \n”);
}
if(n==y)
{
Multiply(e,f,g,m,n,x);
printf(“([A] + [B]) * ([C] * [D]) is \n”);
display(g,m,x);
}
else
{
printf(“The equation cannot be solved \n”);
}
getch();
}
