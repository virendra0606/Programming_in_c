#include<stdio.h>
int  main(){
    int num[25],temp;
    num[0]=100;
    num[25]=200;
    temp=num[25];
    num[25]=num[0];
    num[0]=temp;
    printf("%d %d ",num[0],num[25]);
    return 0;
}