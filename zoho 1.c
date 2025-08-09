#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char *a=malloc(10);
    int len,i,j;
    printf("enter a word");
    scanf("%s",a);
    len=strlen(a);
    for(i=0;i<len;i++)
        {
            for(j=0;j<=i;j++)
            {
                printf("%c \t",a[j]);
            }
            printf("\n");

        }
    return 0;
}
