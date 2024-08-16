//2. Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char str[20]={"ruhiparth"};
    int i,count=0;
    for(i=0;str[i];i++){
    count+=1;
    }
    printf("%d",count);
    return 0;
}