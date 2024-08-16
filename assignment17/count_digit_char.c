/*Write a program in C to count the total number of alphabets, digits and special
characters in a string.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[30]={"453487hsfh*@&*^%$#^"};
    int alpha=0,i,digit=0,special=0;
    for(i=0; str[i]; i++)
    {
        if(str[i]>='a' && str[i]<='z')
            alpha+=1;
        else if(str[i]>='0' && str[i]<='9')
            digit+=1;
        else
            special+=1;
    }
    printf("%d %d %d ",digit,alpha,special);
    return 0;
}
