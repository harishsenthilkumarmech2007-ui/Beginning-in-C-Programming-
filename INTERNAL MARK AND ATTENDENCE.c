#include<stdio.h>

        struct marks
    {
        int assignment ;
        int fat;
    };
    int mark()
{ int j,check=0;
    for(j=0;j<6;j++)
    { if(check==0){
        check=1;
    struct marks s[5];
    int i ,flage=0;
    for(i=1;i<=3;i++)
    {
    printf("\n enter the assignment %d mark :",i);
    scanf("%d",&s[i].assignment);
    printf("\n enter the FAT %d mark :",i);
    scanf("%d",&s[i].fat);
    }
    float a[5],f[5],x[5],sum=0;
    for(i=1;i<=3;i++)
    {
        if((s[i].assignment<=50)&&(s[i].fat<=50))
    {
        a[i]=s[i].assignment*0.3;
        f[i]=s[i].fat*0.7;
        x[i]=(a[i]+f[i])/3;
        printf("FAT %d internal mark : %2f \n",i,x[i]);
        sum=sum+x[i];
    }
    else
    {
        printf("The fat %d or assingnment %d mark is incorrect",i,i);
        flage=1,check=0;
        break;
    }
    }
   if(flage==0)
    {
    int IM;
         IM=(sum/50)*40;
         printf(" \n The internal mark is  :%d",IM);
         IM>=20?(printf("\n internal PASS")):(printf("\n internal FAIL"));
         printf("\n Enter zero '0' for check again ");
         scanf("%d",&check);
    }}
    else
    {
        break;
    }
    }

}
int attendence()
{
    float x,y,z,w;
    printf("ENTER THE TOTAL NUMBEER OF PERIODS :");
    scanf("%f",&z);
    printf("ENTER THE PERCENTAGE NEEDED :");
    scanf("%f",&y);
    x=(y/100)*z;
    w=z-x;
    printf("THE TOTAL NUMBER OF PERIODS THAT YOU CAN TAKE LEAVE IS %f ",w);

}

int main()
{int d;

again : printf("\n TO CHECK THE INTERNAL MARK ENTER 1 :\n TO CHECK THE ATTENDENCE ENTER 2 :\n");
scanf("%d",&d);
    if (d==1)
    {
        mark();
        goto again;
    }
    else if(d==2)
    {
        attendence();
        goto again;
    }
    else
    {
        printf("SORRY WRONG ENTER \n");
        goto again;
    }

}

