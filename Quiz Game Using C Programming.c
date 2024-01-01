#include<stdio.h>
int main()
{
    int i;
    int ans1,ans2,ans3,ans4,ans5,ans6;
    int point1,point2,point3,point4,point5,point6,point7,point8,point9,point10;
    int point01,point02,point03,point04,point05,point06,point07,point08,point09,point010;
    int total1,total2,total3;
    printf("welcome to the game\n\n");

    printf("->press 7 to start the game\n");
    printf("->press 0 to quit the game\n");
    scanf("%d",&i);
    if(i==7)
    {
        printf("the game has started\n\n");
    }

    else if(i==0)
    {
        printf("the game has ended\n\n");
    }
    else
    {
        printf("invalid\n\n");
    }
    if(i==7)
    {
        printf("1=which one is the first search engine in internet?\n\n");//
        printf("1->google\n");
        printf("2->archie\n");
        printf("3->wais\n");
        printf("4->altavista\n");
        printf("enter your answer:");
        scanf("%d",&ans1);
        if(ans1==2)
        {
            printf("correct answer\n\n");
            point1=5;
            printf("you have scored %d point \n",point1);
        }
        else
        {
            printf("wrong answer\n");
            point01 =0;
            printf("you have scored %d point\n\n",point01);
        }
        printf("2=which one is the first web browser invented in 1990?\n\n");
        printf("1) internet explorer\n");
        printf("2) mosaic\n");
        printf("3) mozilla\n");
        printf("4) nexus\n");
        printf("enter your answer:");
        scanf("%d",&ans2);
        if(ans2==4)
        {
            printf("correct answer\n\n");
            point2=5;
            printf("you have scored %d point \n",point2);
        }
        else
        {
            printf("wrong answer\n");
            point02=0;
            printf("you have scored %d point\n\n",point02);
        }
        printf("3=first computer virus is known as ?\n\n");
        printf("1)Robbit \n");
        printf("2)creeper virus\n");
        printf("3) Elk cioser\n");
        printf("4) sca virus \n");
        printf("enter your answer:");
        scanf("%d",&ans3);
        if(ans3==2)
        {
            printf("correct answer\n\n");
            point3=5;
            printf("you have scored %d point \n",point3);
        }
        else
        {
            printf("wrong answer\n");
            point03=0;
            printf("you have scored %d point\n\n",point03);
        }
        printf("4=firewall in computer is used for ?\n\n");
        printf("1) security\n");
        printf("2)data transmission\n");
        printf("3) monitoring\n");
        printf("4) authentication\n");
        printf("enter your answer:");
        scanf("%d",&ans4);
        if(ans4==1)
        {
            printf("correct answer\n\n");
            point4=5;
            printf("you have scored %d point \n",point4);
        }
        else
        {
            printf("wrong answer\n");
            point04=0;
            printf("you have scored %d point\n\n",point04);
        }
        printf("5=which of the following is not a database management software?\n\n");
        printf("1) mysql\n");
        printf("2)oracle\n");
        printf("3)cobal\n");
        printf("4)sybase\n");
        printf("enter your answer:");
        scanf("%d",&ans5);
        if(ans5==3)
        {
            printf("correct answer\n\n");
            point5=5;
            printf("you have scored %d point\n",point5);
        }
        else
        {
            printf("wrong answer\n");
            point05=0;
            printf("you have scored %d point\n\n",point05);
        }
        printf("6=what i want ?\n\n");
        printf("1)don't know\n");
        printf("2)doctor\n");
        printf("3)halping people \n");
        printf("4)nothing \n");
        printf("enter your answer:");
        scanf("%d",&ans6);
        if(ans6==3)
        {
            printf("correct answer\n\n");
            point6=5;
            printf("you have scored %d point \n",point6);
        }
        else
        {
            printf("wrong answer\n");
            point06=0;
            printf("you have scored %d point\n\n",point06);
        }


    }
return 0;
}
