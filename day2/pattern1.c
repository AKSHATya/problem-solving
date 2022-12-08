#include<stdio.h>
int main (){
int n, i,k=1 ,j;

scanf("%d",&n);
     for(i=1;i<=n;i++){
for(j=i;j<i+k;j++){
printf("%d",j);
         }
         k++;
     printf("\n");
     }   

return 0;

}