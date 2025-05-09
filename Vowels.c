//to find number of vowels, consonants, digits and spaces
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    int i, len, vow=0, con=0, sp=0, dig=0;
    char a[100];
    
    clrscr();
    printf("Enter the string \n");
    gets(a);
    puts(a);
    
    len = strlen(a);
    
    for(i=0; i<len; i++)
    {
        if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U' || 
           a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
        {
            vow++;
        }
        else if(a[i]<='9' && a[i]>='0')
        {
            dig++;
        }
        else if(a[i]==' ')
        {
            sp++;
        }
        else
        {
            con++;
        }
    }
    
    printf("Length of the array is %d\n", len);
    printf("Following is the list of \n1.Vowels - %d \n2.Digits - %d \n3.Spaces - %d \n4.Consonants - %d", vow, dig, sp, con);
    
    getch();
}
