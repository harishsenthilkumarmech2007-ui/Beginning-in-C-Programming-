#include<stdio.h>
int main()
{
    int i,j,sum1=1,sum2=0,n;
    printf("enter the no of terms \n");
    scanf("%d",&n);
    printf("%d\n",sum1);
    for(i=2;i<=n;i++)
        {
           if(i%2==0)
            {
                for(j=1;j<=i;j++)
                {
                    sum2=sum2+2;
                    printf("%d\t",sum2);
                }
            }
        else
                {
                    for(j=1;j<=i;j++)
                    {
                        sum1=sum1+2;
                        printf("%d\t",sum1);
                    }
                }

            printf("\n");
        }
        return 0;
}
