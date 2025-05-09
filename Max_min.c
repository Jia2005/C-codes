//To find maximum and minimum from the array (input from user)
#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],large,small,i.n;
clrscr();
printf("Enter the number of elements\n");
scanf("%d”,&n);
printf("Enter the array \n");
for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
printf(“The array is \n”);
for(i=0;i<n;i++)
 {
 printf("%d \n",a[i]);
 }
large=a[0];
for(i=1;i<n;i++)
 {
 if(a[i]>large)
{
a[i]=large;
}
 }
printf("The largest number is %d \n",large);
small=a[0];
for(i=1;i<n;i++)
 {
 if(a[i]<small)
{
a[i]=small;
}
 }
printf("The smallest number is %d \n",small);
getch();
}
