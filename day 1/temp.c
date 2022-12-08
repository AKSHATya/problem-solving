#include<stdio.h>
int main(){

int temp,i;
printf("enter the temp in celsius");
scanf("%d",&temp);

if(temp<0) printf("freezing weather");
if(  (0<temp) &&(temp<10)) printf(" very cold weather");
if(  (10<temp) &&(temp<20) )printf("cold weather");
if(  (20<temp) &&(temp<30) )printf("normal weather");
if(  (30<temp) &&(temp<40) )printf("hot weather");
if(  (40<=temp)  )printf("very hot weather");

return 0;}
