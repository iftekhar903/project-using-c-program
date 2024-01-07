#include<stdio.h>
#define CYCLE 6
//CYCLE (60)second por por change hobe ;
#include<conio.h>//stop watch aki jayga kaj korar jonno
#include<unistd.h>
int main()
{
    int hour,minute,second;
    printf("enter hour,minute,second:");
    scanf("%d%d%d",&hour,&minute,&second);


    int h=0,m=0,s=0;
    while(1)

    {
        system("cls");
        printf("\n\n########STOP WATCH#########\n\n");
        printf("          %.2d:%.2d:%.2d\n",h,m,s);
        printf("\n\n############################\n\n");
        if(h==hour && m==minute && s==second)
        {
            break;
        }
        s++;
        sleep(1);//1,1ta print korbee ar 1 second wait korbe;
        if(s==CYCLE)
        {
            m++;
            s=0;
        }
        if(m==CYCLE)
        {
            h++;
            m=0;
        }
    }




}
