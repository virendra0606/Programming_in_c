#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int sumofeven=0;//2+4+6=12
    int sumofodd=0;//1+3+5+7=16
    for(int i=0;i<=6;i++){
    if(i%2!=0){
        sumofodd=sumofodd+arr[i];
    }
    else
    sumofeven=sumofeven+arr[i];
    }
    printf("%d",sumofeven-sumofodd);
    return 0;
}