#include<stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<=9;i++){
        printf("enter the element%d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=9;i++){
    if(arr[i]<=35){
        printf("your element is:%d\n",i);
    }
    }
    return 0;
}