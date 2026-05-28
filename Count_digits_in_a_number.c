#include<stdio.h>
int main(){
    int n,m,count=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    m=n;
    while(n>0){
        count+=1;
        n=n/10;
    }
    printf("The Number of Digits in %d is= %d",m,count);
    return 0;
}