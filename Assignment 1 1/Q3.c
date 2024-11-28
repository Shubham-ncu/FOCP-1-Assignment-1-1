#include<stdio.h>
int main(){
    int a , b , sub;
    printf("Enter Two numbers:\n");
    scanf("%d %d" , &a , &b);

    sub=a+~b+1;

    printf("Subtraction of %d and %d is %d" , a , b , sub);
    return 0;
}