#include <stdio.h>
int main()
{
    int a[20][20];
    int b[20][20];
    int k;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d   ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("transpose\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            b[i][j] = a[j][i];
            // printf("%d   ",b[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <3; j--)
        {if()
          k=b[][]
        }
        printf("\n");
    }

    return 0;
}