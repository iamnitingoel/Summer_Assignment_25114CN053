#include <stdio.h>
int main(){
    int n,sum=0;
    printf("Enter a number N: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("The sum of fisrt N natural numbers are: %d",sum);
    return 0;
}