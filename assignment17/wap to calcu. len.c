//1. Write a program to calculate the length of the string. (without using built-in method)
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char str[20]={"bhubneshwar"}; 
    int i;
    for(i=0;str[i]!='\0';i++);
    printf("%d ",i);
    return 0;
}