#include<stdio.h>
 
 int main(){
   float r;
   int n,arr[1000],j=3,i;
   scanf("%d",&n);

   arr[0]=3;
   for( i=1; i<n*10;i++){
    arr[i]=arr[i]+j;
    j++;
   }
   

   
 }