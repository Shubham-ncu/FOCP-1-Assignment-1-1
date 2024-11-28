#include <stdio.h>
int main(){
    int Num , arm=0 , r ,c;
    printf("Enter any number: ");
    scanf("%d" , &Num);
    c=Num;
    while(Num>0)
    {
        r=Num%10;
        arm=(r*r*r)+arm;
        Num=Num/10;
    }
    if(c==arm)
    printf("Armstrong Number: ");
    else
    printf("Not");
    return 0;
}