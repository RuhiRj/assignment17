//Write a program in C to copy one string to another string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char str[10]={"ruhiparth"},st[10];
    int i;
    strcpy(st,str);
    printf("%s ",st);
    return 0;
}

