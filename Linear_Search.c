#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,n,num;
clrscr();
printf("Enter the number of elements\n");
scanf("%d”,&n);
printf("Enter the array elements\n");
for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
printf(“The array is \n”);
for(i=0;i<n;i++)
 {
 printf("%d \n",a[i]);
 }
printf(“Enter the number to be searched \n”);
scanf(“%d”,num);
for(i=0;i<n;i++)
{
 if(a[i]==num)
 {
 printf("Successful search at %d \n",i+1);
 break;
 }
}
 if(i==n)
 {
 printf(“Unsuccessful Search \n”);
 } 
 getch();
}
