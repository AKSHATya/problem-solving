#include <stdio.h>

/*               patttern 2              */

/* void pattern(int n)
 {
      int n, i, k = 1, j, b;

      scanf("%d", &n);
      for (i = 1; i <= n; i++)
      {
           for (b = i; b < n; b++)
           {
                printf(" ");
           }
           for (j = k; j < k + k; j++)
           {
                printf(" %d", j);
           }
           k++;
           printf("\n");
      }
 }*/

/*              pattern 3               */
/*void pattern(int n)
{
     int  i, j,k = 1;
     char a = 65;

     for (i = 1; i <= n; i++)
     {
          for (j = 0; j < k; j++)
          {
               printf("%c", a);
          }
          k++;
          a++;
          printf("\n");
     }
}*/

/*              pattern 4               */

/*void pattern(int n)
{
     int  i,k =65;
     char j = 65;

     for (i = 0; i < n; i++)
     {
          for (j = 65+i; j<=k+i; j++)
          {
               printf("%c", j);

          }
          k++;

          printf("\n");
     }
}*/

/*              pattern 5               */

/*void pattern(int n)
{
     int  m=0,i,k =65;
     char j = 65;

     for (i = n; i > 0; i--)
     {
          for (j =k+i-1; j<65+n; j++)
          {
               printf("%c", j);

          }

          printf("\n");
     }
}*/

/*              pattern 6               */
/*void pattern(int n)
{
     int  m=0,i,k=1,l,a,b=2,z=0;
     int j ;

     for (i =1; i <= n; i++)
     {
          for(l=k;l<n;l++)
          printf(" ");
          for (j =i; j<b; j++)
          {
               printf("%d", j);

          }
          for(a=m;a>z;a--)
          printf("%d",a);
          k++;
          b+=2;
          m+=2;
          z++;
          printf("\n");
     }
}*/

/*              pattern 7               */

/*void pattern(int n)
{
     int  m=0,i,k=1,l,a,b=2;
     int j ;

     for (i =1; i <= n; i++)
     {
          for(l=k;l<n;l++)
          printf(" ");
          for (j =i; j>0; j--)
          {
               printf("%d", j);

          }
          for(a=2;a<b;a++)
          printf("%d",a);
          k++;
          b++;
          printf("\n");
     }
}*/
/***************end***************************/

/*              pattern                 */

/*void pattern(int n)
{
     int  m=0,i,k=1,l,a,b=2;
     int j ;

     for (i =0; i <= n/2; i++)
     {

          for (j =1; j<=k; j++)
          {
               printf("*");

          }
          k++;
          k++;
          printf("\n");
     }
     k-=4;

for (i =1; i <= n/2; i++)
     {

          for (j =1; j<=k; j++)
          {
               printf("*");

          }
          k--;
          k--;
          printf("\n");
     }
}*/

/****************pattern *****************/
/*
void pattern(int n)
{
     int  m=0,i,k=1,l,a,b=2;
     int j ;

     for (i =1; i <= n; i++)
     {

          for (j =1; j<=k; j++)
          {
               printf("*");

          }
          k++;
          k++;
          printf("\n");
     }
}*/

/****************pattern******************/

/*
void pattern(int n)
{
     int  m=0,i,k=0,l,a,b=2;
     int j ;

     for (i =0; i <= n/2; i++)
     {

          for (j =n; j>k; j--)
          {
               printf("*");

          }
          k++;
          k++;
          printf("\n");
     }
     k-=4;

for (i =1; i <= n/2; i++)
     {

          for (j =1; j<=k; j++)
          {
               printf("*");

          }
          k++;
          k++;
          printf("\n");
     }
}*/
/*               bonus                   */
/*
void pattern(int n)
{
     int  m=0,i,k=0,l,a,b=2;
     int j=0 ;

     for (i =0; i < n/2; i++)
     {

          for (j =0; j<n/2; j++)
          {
               printf(" ");

          }


          for (j =1; j<n/2; j++)
          {
               printf("*");

          }

          printf("\n");
     }

for (i =0; i < n; i++)
     {
               printf("*");
     }
 printf("\n");
     for (i =0; i < n/2; i++)
     {

          for (j =0; j<n/2; j++)
          {
               printf(" ");

          }


          for (j =1; j<n/2; j++)
          {
               printf("*");

          }

          printf("\n");
     }
}*/

/*                pattern  8              */
/*
 void pattern(int n)
 {
      int  m=0,i,k=1,l,a,b=2;
      int j ;

      for (i =1; i <= n; i++)
      {

           for (m=i; m<n; m++)
           {
                printf(" ");

           }
           for (j =1; j<=k; j++)
           {
                printf("*");

           }
           k++;
           k++;
           printf("\n");
      }
 }*/

/*                pattern  9              */
/*
void pattern(int n)
 {
      int  m=0,i,k=1,l,a,b=2;
      int j ;

      for (i =1; i <= n/2+1; i++)
      {

           for (m=i; m<=n/2; m++)
           {
                printf(" ");

           }
           for (j =1; j<=k; j++)
           {
                printf("*");

           }
           k++;
           k++;
           printf("\n");
      }
          k-=4;

      for (i =1; i <= n/2; i++)
      {

           for (m=0; m<i; m++)
           {
                printf(" ");

           }
           for (j =1; j<=k; j++)
           {
                printf("*");

           }
           k--;
           k--;
           printf("\n");
      }
 }*/
/*                pattern  10             */
/*
void pattern(int n)
 {
      int  m=0,i,k=n,l,a,b=2;
      int j ;

      for (i =1; i <= n/2; i++)
      {

           for (m=1; m<i; m++)
           {
                printf(" ");

           }
           for (j =1; j<=k; j++)
           {
                printf("*");

           }
           k--;
           k--;
           printf("\n");
      }
      for (i =1; i <= n/2+1; i++)
      {

           for (m=i; m<=n/2; m++)
           {
                printf(" ");

           }
           for (j =1; j<=k; j++)
           {
                printf("*");

           }
           k++;
           k++;
           printf("\n");
      }
 }*/
/*                pattern  11             */
/*
void pattern(int n)
 {
      int  m=0,i,k=1,a;
      int j ;
          a=2*n-2;
      for (i =1; i <= n; i++)
      {
          for (j =1; j<=k; j++)
           {
                printf("%d",j);

           }

           for (m=1; m<=a; m++)
           {
                printf(" ");

           }
           for (j =i; j>0; j--)
           {
                printf("%d",j);

           }
           a-=2;
           k++;
           printf("\n");
      }
 }*/
/*                pattern  12             */

/*void pattern(int n)
 {
      int  m=0,i,k=n,l,a;
      int j ;
          a=0;
          l=n;
      for (i =1; i <= n; i++)
      {
          for (j =1; j<=k; j++)
           {
                printf("%d",j);

           }
           for (m=1; m<=a; m++)
           {
                printf(" ");

           }

           for (j =l; j>0; j--)
           {
                printf("%d",j);

           }
           l-=1;
           a+=2;
           k--;
           printf("\n");
      }
 }*/
/*                pattern  14             */
/*
void pattern(int n){
     int j,i;
for(i=0;i<n;i++){
printf("*");
}
printf("\n");
for(i=0;i<n-2;i++){
for(j=i;j<n-2;j++){
printf(" ");
}
printf("*");
printf("\n");
}
for(i=0;i<n;i++){
printf("*");
}
}*/
/*                pattern  19             */

 void pattern(int n){

int i,j,k=0;
int a[n][n];

for(i=n;i>0;i--){
for(j=i;j>0;j--){
printf(" ");}
printf("\n");}

i=0;j=0;

for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(j==0||i==j)
a[i][j]=1;
else {a[i][j]=a[i-1][j]+a[i-1][j+1];
printf("%d",a[i][j]);}
}
}
 
int main(){
     int n,i,j;
       scanf("%d",&n);
      pattern( n);
      return 0;
}

/*                series  1               */

/*int series(int n){
    if(n == 1) return 1;
    return n * fsum(n-1);

}


int main()
{
     int x=0,i,n;
     scanf("%d", &n);
     for(i=n;i>0;i--){
      x += series(i);}
     printf("%d",x);

     return 0;
}*/

/*               series  2               */
/*
int series(int n)
{
     if (n == 1)
          return 1;
     return n * series(n - 1);
}

int main()
{
     int i, n;
     float x = 0;
     scanf("%d", &n);
     for (i = n; i > 0; i--)
     {
          x += series(i - 1);
     }
     printf("%d", x);

     return 0;
}*/


i