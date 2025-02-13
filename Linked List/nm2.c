#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10][10];
    int n;
    printf("enter matrix");
    scanf("%d",&n);
    float x[n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n+1; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=1; i<=n-1; i++)
    {
        if(a[i][i] == 0)
        {
            printf("mathematical error");
        }

        for(int j=i+1; j<=n; j++)
        {
            float ratio = a[j][i] / a[i][i];

            for(int k=1; k<n+1; k++)
            {
                a[j][k] = a[j][k] - ratio * a[j][k];
            }
        }
    }

    x[n] = a[n][n+1] / a[n][n];

    for(int i=n-1; i>=1; i--)
    {
        x[i]= a[i][n+1];
    }

    for(int i=1; i<n; i++)
    {
        printf("%f",x[i]);
    }


}