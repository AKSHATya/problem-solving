#include<stdio.h>
int main(){

int x,y;
printf("enter your x&y cordinate");
scanf("%d%d",&x,&y);
if(x>0&&y>0)printf("first quadrant");
if(x<0&&y>0)printf("second quadrant");
if(x<0&&y<0)printf("third quadrant");
if(x>0&&y<0)printf("fourth quadrant");
return 0;}