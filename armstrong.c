#include<stdio.h>
int main(){
    int n,remainder,updated_num;
    int sum = 0;
    printf("enter the number :");
    scanf("%d",&n);
    updated_num = n;
    while(updated_num!=0){
        remainder = updated_num%10;
        sum = sum+(remainder*remainder*remainder);
        updated_num/=10;
    }
    if(sum==n){
        printf("%d is number armstrong number.",n);
    }
    else{
        printf("%d is not armstrong number",n);
    }
    // printf("%d",sum);
    return 0;
}