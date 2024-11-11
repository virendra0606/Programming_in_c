#include<stdio.h>
int main(){
    int arr[5]={5,8,9,12,6};
    int max=arr[0];
    for(int i=0;i<=4;i++){
        if(max < arr[i]){
            max=arr[i];
        }
    }
    printf("%d ",max);
    return 0;
}