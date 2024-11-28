#include<stdio.h>
int main(){
    int i,n1,n2,min,HCF,LCM;
    printf("Enter two Numbers: ");
    scanf("%d %d" , &n1,&n2);
    min=(n1<n2)?n1:n2;
    for(i=1;i<min;i++)
    {
        if(n1%i==0 && n2%i == 0)
        {
            HCF = i;
        }
    }
    LCM=(n1*n2)/HCF;
    printf("%d , %d" , HCF , LCM);
    return 0;
}