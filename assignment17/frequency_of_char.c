/*Write a program in C to Find the Frequency of Characters
#include<stdio.h>
#include<conio.h>
//#include<string.h>
void input(int * , int );
void display(int * , int);
int main()
{
    int *p,arr[10],i;
    input(arr, 10);
    display(arr,10);

}
void input(int *a, int size)//a[]
{
    int i;
    printf("enter %d the number of size:");
    for(i=0; i<size; i++)
        scanf("%d",a+i);
}
void display(int *b, int size)
{
    int i;
    for(i=0;i<size;i++)
    printf("%d ",*(b+i));

}
//Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("enter the two numbers:");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("swap number is: %d %d",a,b);
    return 0;
}
int swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
#include<stdio.h>
#include<conio.h>
int main()
{
char arr[5]={'e','r'},ar[5]={'e','i','a'};
swap(arr,10);
printf("swaping value%s %s is:=",arr,ar);
}
void swap(int a[],int size,int b[])
{
    int i;
    printf("enter %d the number of size:");
    for(i=0; i<size; i++)
        scanf("%d",a+i);
    int *i;
}*/
#include<stdio.h>
#include<conio.h>

// Function declaration
void swap(char a[], int size_a, char b[], int size_b);

int main() {
    char arr[5] = {'e', 'r'};
    char ar[5] = {'e', 'i', 'a'};
//int i;
//char size_a,size_b;
    // Call the swap function
    swap(arr, 2, ar, 3);
    /* for (i = 0; i < size_a; i++)
    printf("Swapped values in arr and ar are: %s\n",ar);
     for (i = 0; i < size_b; i++)
     printf("Swapped values in arr and arr are:%s\n",arr);
     */
    printf("Swapped values in arr and ar are: %c %c %c %c %c and %c %c %c\n", arr[0], arr[1], arr[2], arr[3], ar[0], ar[1], ar[2]);
    return 0;
}

// Function definition
void swap(char a[], int size_a, char b[], int size_b) {
    int i;
    printf("Enter %d values for arr:\n", size_a);
    for (i = 0; i < size_a; i++)
        scanf(" %c", &a[i]);
        printf("Enter %d values for arr:\n", size_b);
    for (i = 0; i < size_b; i++)
        scanf(" %c", &b[i]);
        char *temp;
    for (i = 0; i < size_a; i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}


























