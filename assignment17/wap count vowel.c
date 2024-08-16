//3. Write a program to count vowels in a given string
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[20];
    int i,count=0;
    printf("enter the string:");
    //gets(str);
    scanf("%s",&str[0]);
    for(i=0; str[i]; i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'|| str[i]=='o'|| str[i]=='u')
        {
            count+=1;
        }
    }
    printf("%d ",count);

    return 0;
}
