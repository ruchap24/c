// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter a no.=");
//     scanf("%d",&n);
//     int nst=n;
//     int nsp=1;
//     for(int i=1;i<=2*n+1;i++)
//     {
//         printf("*");
//     }
//     printf("\n");
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=nst;j++)
//         {printf("*");
//         }
//         for(int k=1;k<=nsp;k++)
//         {printf(" ");
//         }
//         for(int j=1;j<=nst;j++)
//         {printf("*");
//         }
//         nst--;
//         nsp+=2;
//         printf("\n");
//        }
//        return 0;
// }

#include<stdio.h>
int main()
{
    int n;
    printf("enter a no.=");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    for(int i=1;i<=2*n+1;i++)
    {
        printf("%d",i);
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++)
        {printf("%d",j);
        }
        for(int k=1;k<=nsp;k++)
        {printf(" ");
        }
        for(int j=1;j<=nst;j++)
        {printf("%d",j);
        }
        nst--;
        nsp+=2;
        printf("\n");
       }
       return 0;
}