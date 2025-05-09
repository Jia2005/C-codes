//to store and display Name, Roll number and PCM marks of a student
#include<stdio.h>
#include<conio.h>

struct student
{
    char name[20];
    int rno;
    float tmarks;
};

void main()
{ 
    struct student s1;
    float p, c, m;
    
    clrscr();
    printf("\n Enter roll no.: ");
    scanf("%d", &s1.rno);
    
    fflush(stdin);  // Clear input buffer before using gets
    printf("\n Enter name: ");
    gets(s1.name);
    
    printf("\n Enter the marks obtained in physics, chemistry and maths: ");
    scanf("%f %f %f", &p, &c, &m);
    
    s1.tmarks = p + c + m;
    
    printf("\nRoll No. \t Name \t Total Marks \n");
    printf("%d \t\t %s \t %.2f", s1.rno, s1.name, s1.tmarks);
    
    getch(); 
}
