#include<stdio.h>
#include<conio.h>

struct student
{
    char name[30];
    int roll_no;
    int p, c, m, tmarks;
};

void main()
{
    struct student s[100], temp;
    int n, i, j;
    
    clrscr();
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    for(i=0; i<=n-1; i++)
    {
        printf("\nEnter the student's roll number, name and marks in three subjects: ");
        scanf("%d %s %d %d %d", &s[i].roll_no, s[i].name, &s[i].p, &s[i].c, &s[i].m);
        s[i].tmarks = s[i].p + s[i].c + s[i].m;
    }
    
    printf("\nDisplaying before sorting \n");
    printf("Roll No. \t Name \t Total Marks \n");
    
    for(i=0; i<=n-1; i++)
    {
        printf("%d \t\t %s \t %d \n", s[i].roll_no, s[i].name, s[i].tmarks);
    }
    
    for(i=0; i<=n-2; i++)
    {
        for(j=0; j<=n-2-i; j++)
        {
            if(s[j].tmarks < s[j+1].tmarks)
            {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    
    printf("\nDisplaying after sorting \n");
    printf("Roll No. \t Name \t Total Marks \n");
    
    for(i=0; i<=n-1; i++)
    {
        printf("%d \t\t %s \t %d \n", s[i].roll_no, s[i].name, s[i].tmarks);
    }
    
    getch();
}
