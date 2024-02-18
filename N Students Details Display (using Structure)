#include<stdio.h>
#include<conio.h>
struct student
{
char name[30];
int roll_no;
int p,c,m,tmarks;
};
void main ()
{
struct student s[100],temp;
int n,i,j;
clrscr();
printf("Enter the number of students");
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
printf("Enter the student's roll number, name and marks in three subjects:");
scanf("%d %s %d %d %d",s[i].rno,&s[i].name,&s[i].p,&s[i].c,&s[i].m);
s[i].tmarks=s[i].p+s[i].c+s[i].m;
}
printf(“Displaying before sorting \n”);
printf(“Roll No. \t Name \t Total Marks \n”);
for(i=0;i<=n-1;i++)
{
printf(“%d \t %s \t %d \n”,s[i].rno,s[i].name,s[i].tmarks);
}
for(i=0;i<=n-2;i++)
{
 for(j=0;j<=n-2;j++)
 {
 if(s[j].total<s[j+1].total)
 {
 temp=s[j];
 s[j]=s[j+1];
 s[j+1]=temp;
 }
 }
}
printf(“Displaying after sorting \n”);
printf(“Roll No. \t Name \t Total Marks \n”);
for(i=0;i<=n-1;i++)
{
printf(“%d \t %s \t %d”,s[i].rno,s[i].name,s[i].tmarks);
}
getch();
}
