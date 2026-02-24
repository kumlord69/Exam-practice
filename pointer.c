#include <stdio.h>
int change(int *a, int *b){
int temp;
temp = *a;
*a = *b;
*b = temp;
}
int main(){
int a = 10;
int b = 20;
printf("%d,%d\n",a,b);
change(&a,&b);
printf("%d,%d",a,b);
}