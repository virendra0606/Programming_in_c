#include<stdio.h>
int main(){
    int a = 5;
    int b = 6;
    a = a+b;
    b = a-b;
    a = a-b;
    printf("the swaped value of a and b is:%d%d",a,b);
    return 0;
}