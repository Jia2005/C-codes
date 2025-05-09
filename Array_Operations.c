//to take an array from user and do Search, Sort, Delete and Insert Operations using Switch case
#include<stdio.h>
#include<conio.h>
void search(int*,int);
void sort(int*,int);
void insert(int*,int*);
void delet(int*,int*);
void main()
{
 int a[20],i,n,j;
 clrscr();
 printf(“\n Enter no. the array elements”);
 scanf(“%d”,&n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
printf(“The array elements are \n”);
for(i=0;i<n;i++)
 {
 printf("%d \n",a[i]);
 }
printf(“\n Enter 1 for search”);
printf(“\n Enter 2 for sort”);
printf(“\n Enter 3 for insert”);
printf(“\n Enter 4 for delete”);
printf(“\n Enter your choice”);
scanf(“%d”,&j);
switch(j)
 {
 case 1: search(a,n);
 break; 
 case 2: sort(a,n);
 break; 
 case 3: insert(a,&n);
 break; 
 case 4: delet(a,&n);
 break; 
 default: printf(“\n Invalid output);
 break;
 }
getch();
}
void search(int*a,int n)
{
 int i,x;
 printf(“ \n Enter the element to be searched”);
 scanf(“\n%d”,&x);
 for(i=0;i<n;i++)
 {
 if(a[i]==x)
 {
 printf(“\n The element is found at %d position in the array”,i+1);
 break;
 }
 }
 if(i==n)
 {
 printf(“\n The number is not found”);
 }
}
void sort(int*,int)
{
 int i,j,temp;
 printf(“\n The array in the sorted manner is”);
 for(i=0;i<n-1;i++)
 {
 for(j=0;j<n-1;j++)
 {
 if(a[j]>a[j+1])
 {
 temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp;
 }
 }
 } 
for(i=0;i<n;i++)
 {
 printf("%d \n",a[i]);
 }
}
void insert(int*a,int*n)
{
 int i,x,num,temp;
 printf(“\n Enter at which position u want to insert the element);
 scanf(“%d”,&x);
 temp=x;
 printf(“\n Enter the element to be inserted”);
 scanf(“%d”,&num);
 for(i=*n+1;i>=x;i--)
 {
 a[i]=a[i-1];
 }
 a[temp-1]=num;
 *n=*n+1;
 for(i=0;i<*n;i++)
 {
 printf("%d \n",a[i]);
 }
}
void delet(int*a,int*n) 
 {
 int i,x,num;
 printf(“\n Enter at which position u want to delete the element);
 scanf(“%d”,&x);
 for(i=x-1;i<*n;i++)
 {
 a[i]=a[i+1];
 }
 *n=*n-1;
 for(i=0;i<*n;i++)
 {
 printf("%d \n",a[i]);
 }
}
