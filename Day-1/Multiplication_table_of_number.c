#include<stdio.h>
int main(){
    int n;
    printf("Enter the number whose multiplication table you want: ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d",n,i,i*n);
        printf("\n");
    }
    return 0;
}
