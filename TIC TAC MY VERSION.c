#include<stdio.h>

char base[3][3],a;
int pos,win=0;

    int cond(char a)
        { int i;
            for(i=0;i<3;i++)
            {if (base[i][0]==base[i][1]&&base[i][0]==base[i][2])
                {printf("PLAYER %C WINS",a);return 1;}
            else if(base[0][i]==base[1][i]&&base[0][i]==base[2][i])
                {printf("PLAYER %C WINS",a);return 1;}}
            if(base[0][0]==base[1][1]&&base[0][0]==base[2][2])
                {printf("PLAYER %C WINS",a); return 1;}
            else if(base[0][2]==base[1][1]&&base[0][2]==base[2][0])
                {printf("PLAYER %C WINS",a);return 1;}
                else{printf("DRAW");}
                return 0;
        }

            void xturn()
        {int aga,i;
            switch (pos){
            case 1:
                base[0][0]='X';
                break;
            case 2:
                base[0][1]='X';
                break;
            case 3:
                base[0][2]='X';
                break;
            case 4:
                base[1][0]='X';
                break;
            case 5:
                base[1][1]='X';
                break;
            case 6:
                base[1][2]='X';
                break;
            case 7:
                base[2][0]='X';
                break;
            case 8:
                base[2][1]='X';
                break;
            case 9:
                base[2][2]='X';
                break;
            default:
                printf("wrong entery\n");
            }
              for(i=0;i<3;i++)
                    {
                        printf(" %c | %c | %c \n",base[i][0],base[i][1],base[i][2]);
                        if(i==0||i==1)
                        {printf("--- --- --- \n");}}
                    }
            void Oturn()
            {int i,aga;
            switch (pos){
            case 1:
                base[0][0]='O';
                break;
            case 2:
                base[0][1]='O';
                break;
            case 3:
                base[0][2]='O';
                break;
            case 4:
                base[1][0]='O';
                break;
            case 5:
                base[1][1]='O';
                break;
            case 6:
                base[1][2]='O';
                break;
            case 7:
                base[2][0]='O';
                break;
            case 8:
                base[2][1]='O';
                break;
            case 9:
                base[2][2]='O';
                break;
            default:
                printf("wrong entery\n");
                }
                 for(i=0;i<3;i++)
                    {
                        printf(" %c | %c | %c \n",base[i][0],base[i][1],base[i][2]);
                        if(i==0||i==1)
                        {printf("--- --- --- \n");}}
            }
    void game()
    {    int flage=0;
        int i,t,k,check=2,pch[9];
     printf("TO PLAY THE GAME ENTER THE POSITION 1 TO 9 DURING YOUR TURN \n");
     printf(" DO NOT REPEAT THE POISITONS \n ");
    sel : printf("SELECT WHO IS FIRST X OR O\n");
    char p;
     scanf("%c",&p);
        if(p=='x'||p=='X')
            {
          t=0;
            }
        else if(p=='O'||p=='o')
        {
           t=1;
        }
        else
        {
            printf("WRONG ENTERY \n");
            goto sel;
        }
        if(t==0)
        {
            for(i=0;i<9;i++)
            { if(i%2==0)
                {   a='X';
                    again1:   printf("\t---X TURN---\n");
                    printf(" ENTER THE POSITION OF X\n");
                    scanf("%d",&pos);
                    pch[i]=pos;
                    for(k=0;k<9;k++)
                    {if(pch[k]!=pos||k==i){check=2;}
                    else{check=1; break;}}
                        if(check==2)
                        {xturn();flage=cond(a); }
                        else
                        {printf("\nDO NOT REPEAT THE POSITION\n");
                            goto again1;}

                }
            else
                {   a='O';
                     again2 :printf("\t---O TURN---\n");
                    printf(" ENTER THE POSITION OF O\n");
                    scanf("%d",&pos);
                    pch[i]=pos;
                    for(k=0;k<9;k++)
                    {if(pch[k]!=pos||k==i){check=2;}
                    else{check=1; break;}}
                    if(check==2)
                        {Oturn();flage=cond(a); }
                        else
                        {   printf(" \nDO NOT REPEAT THE POSITION\n");
                            goto again2;}
                    }
                    if(flage){break;}
                }
            }

         else if(t==1)
         {
           for(i=0;i<9;i++)
            { if(i%2==0)
                {   a='O';
                    again3:   printf("\t---O TURN---\n");
                    printf(" ENTER THE POSITION OF O\n");
                    scanf("%d",&pos);
                    pch[i]=pos;
                    for(k=0;k<9;k++)
                    {if(pch[k]!=pos||k==i){check=2;}
                    else{check=1;}}
                        if(check==2)
                        {Oturn();flage=cond(a); }
                        else
                        {printf("\nDO NOT REPEAT IN POSITION\n");
                            goto again3;}
                }
            else
                {    a='X';
                     again4 :printf("\t---X TURN---\n");
                    printf(" ENTER THE POSITION OF X\n");
                    scanf("%d",&pos);
                    pch[i]=pos;
                    for(k=0;k<9;k++)
                    {if(pch[k]!=pos||k==i){check=2;}
                    else{check=1;}}
                    if(check==2)
                        {xturn();flage=cond(a); }
                        else
                        {   printf(" \nDO NOT REOEAT THE POSITION\n");
                            goto again4;}
                    }
                    if(flage){break;}
                }

         }

    }
  int main()
    {
        char k='1';
        int i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                    base[i][j]=k++;
            }
        }

        for(i=0;i<3;i++)
        {
            printf(" %c | %c | %c \n",base[i][0],base[i][1],base[i][2]);
            if(i==0||i==1)
            {printf("--- --- --- \n");}
        }
        game();
        return 0;
    }
