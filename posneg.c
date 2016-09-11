#include<stdio.h>
void main(){
int a;
printf("\n enter the number to be checked");
scanf("%d",&a);
if(a==0){
printf("\n the given number is zero");
}
else if(a>0)
{
printf("\n the given number is positive");
}
else{
printf("\n the given number is negative");
}
}