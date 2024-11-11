#include<stdio.h>
int main(){
    int arr[6];
    for(int i=0;i<=5;i++){
        int a=i+1;
        printf("\n enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    // 
    for(int i=0;i<=5;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}