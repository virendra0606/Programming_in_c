#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    for(int i=0;i<=6;i++){
        if(i%2!=0){
            printf("%d ",2*arr[i]);
        }
        else
        printf("%d ",10+arr[i]);
    }
    return 0;
}
//if index is even then multiply by two and index is odd then add 10.