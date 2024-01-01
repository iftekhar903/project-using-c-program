#include<stdio.h>
int rules();
int round();

int main()
{
    rules();
    printf("\n\n");
    round1();
    return 0;
}
int round1()
{
    char name[50];
    printf("enter your name :");
    scanf("%s",&name);

    printf("\n\n");

    int deposit1;
    printf("enter the amount of money to deposite for the game :");
    scanf("%d",&deposit1);

    printf("\n\n");
    printf("your current balance is $%d",deposit1);
    printf("\n\n");
    int bet1;
    printf("%s, Enter the money to bet :$",name);
    scanf("%d",&bet1);
    printf("\n\n");
    if(bet1>deposit1)
    {
        printf("money exceeds,\n");
        printf("enter again: $");
        scanf("%d",&bet1);
    }
    printf("\n\n");
    int computer1;
    computer1= rand()%10;
    int guess1;
    printf("Guess a number from 1 to 10:");
    scanf("%d",&guess1);
    printf("\n\n");

    if(guess1>10)
    {
       printf("number exceeds,\n");
       printf("enter again: ");
       scanf("%d",&guess1);
    }
    printf("\n\n");

    if(guess1==computer1)
    {
      printf("you have won $%d",bet1);
      printf("\n\n");

      int bet2;
      bet2=bet1*10;

      int new_won;
      if(bet1==deposit1)
      {
          new_won=bet2+0;
      }
      else
      {
          new_won=bet2+deposit1;
      }
      printf("you have won$%d as total",new_won);

    }
    else if(guess1!=computer1)
    {
        printf("you have loss $%d",bet1);
        printf("\n\n");

        printf("the correct number is:%d",computer1);
        printf("\n\n");

        int new_loss;
        new_loss=deposit1-bet1;

        printf("now you have $%d as a balance",new_loss);
        printf("\n\n");
        if(new_loss==0)
        {
            printf("sir ,you have $0 as a balance\n");
            printf("you have no more money to play\n");
            printf("have a nice day");

        }
        else
        {
            int decision;
            printf("press 1 for yes\n");
            printf("press 2 for no \n\n");

            printf("Do you want to continue(Y\N):");
            scanf("%d",&decision);
            printf("\n\n");

            if(decision==1)
            {
                rules();
                printf("\n\n");

                printf("now you have $%d as a balance",new_loss);
                printf("\n\n");

                int bet3;
                printf("%s, Enter the money to bet :$",name);
                scanf("%d",&bet3);
                printf("\n\n");

                if (bet3>new_loss)
                {
                    printf("money Exceed,\n");
                    printf("enter again:$");
                    scanf("%d",&bet3);
                }
                int guess2;
                printf("enter a number from 1 to 10: ");
                scanf("%d",&guess2);
                printf("\n\n");

                int computer2;
                computer2;
                computer2=9;

                if(guess2>10)
                {
                    printf("number exceeds\n");
                    printf("enter again:$");
                    scanf("%d",&guess2);
                    printf("\n\n");
                }
                if(guess2==computer2)
                {
                    printf("you have won &%d",bet3);
                    printf("\n\n");

                    int b;
                    b=bet3*10;

                    int b1;
                    if(bet3==new_loss)
                    {
                        b1 = b + 0;
                    }
                    else
                    {
                        b1=b+new_loss;
                    }
                    printf("you have won $%d as a total",b1);

                }
                else if(guess2!=computer2)
                {
                    printf("you have loss $%d",bet3);
                    printf("\n\n");

                    int b2;
                    b2=new_loss-bet3;
                    printf("tou have $%d as a total",b2);
                    printf("\n\n");
                    if(b2==0)
                    {
                        printf("sir you have $0 as a balance\n");
                        printf("you have no money to play \n");
                        printf("have a nice day ");

                    }
                }
            }
            else if(decision==2)
            {
                printf("have a nice day sir");

            }
        }
    }
}
int rules()
{
    printf("........................\n");
    printf("Rules\n");
    printf("........................\n");
    printf("1.choose any number between 1 to 10 \n");
    printf("2. If you win you will get 10 times of money you bet \n");
    printf("3.If you bet on wrong number you will loss your betting amount\n");
    printf(".....................................");
}
