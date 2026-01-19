#include<stdio.h>
int main(){
float a,p = 0 ,i=0,num;
printf("Enter the number of Students: ");
scanf("%f",&num);
while (i<num)
{
    printf("Enter '1' if present and '0' if absent: ");
    scanf("%f",&a);
    if(a == 1 ){
    p += 1;   }
    else
    p += 0;
    i++;
}
float percent;
percent = (p/num)*100;
printf("The number of students present is: %.0f\nThe percent of students that appeared is: %.2f",p,percent); 

return 0;
}