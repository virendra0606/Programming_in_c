#include<stdio.h>
int main(){
    int arr[5]={10,9,8,7,6};
    int sum=0;
    for(int i=0;i<=4;i++){
        sum = sum+ arr[i];
    }
    printf("%d",sum);
    return 0;
}