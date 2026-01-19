#include<stdio.h>
int main(){
    int a=123;
    float rem,rev;
    while(a!=0){
        rem = a%10;
        rev = rev*10 + rem;
        a = a/10;
    }
printf("Reversed number is %f",rev);    
}