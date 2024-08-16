//Write a C program to sort a string array in ascending order.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[20];//= {'b','g','c','e','t'};
    printf("enter the string:");
        gets(str);
    int i,j,temp=0;
    for(i=0; str[i]; i++)
    {
        for(j=i+1; str[j]; j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("%s ",str);
    return 0;
}
