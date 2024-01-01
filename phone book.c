#include<stdio.h>
int main()
{
    char n[50];
    int a,p,d;
    char add[50];

    char na[50];
    int ag,ph,da;
    char addr[50];

    printf("Welcome to phone book\n\n");
    printf("menu\n");
    printf("press 1 to add the contact\n\n");
    int x;
    printf("enter \n");
    scanf("%d",&x);
    if (x==1)
    {
        int y;
        printf("enter the number of contact to be added:");
        scanf("%d",&y);
        if (y==1)
        {
            printf(".............\n");
            printf("name: ");
            scanf("%s",&n);
            printf("age: ");
            scanf("%d",&a);
            printf("phone number: ");
            scanf("%d",&p);
            printf("date of birth: ");
            scanf("%d",&d);
            printf("address: ");
            scanf("%s",&add);
            printf(".............\n");

        }
        else if (y==2)
        {
            printf(".............\n");
            printf("name: ");
            scanf("%s",&n);
            printf("age: ");
            scanf("%d",&a);
            printf("phone number: ");
            scanf("%d",&p);
            printf("date of birth: ");
            scanf("%d",&d);
            printf("address: ");
            scanf("%s",&add);
            printf(".............\n");

            printf(".............\n");
            printf("name: ");
            scanf("%s",&na);
            printf("age: ");
            scanf("%d",&ag);
            printf("phone number: ");
            scanf("%d",&ph);
            printf("date of birth: ");
            scanf("%d",&da);
            printf("address: ");
            scanf("%s",&addr);
            printf(".............\n");

        }
        printf("press 2 to see the entered contact\n");
        printf("press 3 to exit the phone book\n");
        int z;
        printf("enter \n");
        scanf("%d",&z);
        if (z==2)
        {
            int num;
            printf("enter the number of contact to be viewed:");
            scanf("%d",&num);
            if(num==1)
            {
                printf(".............\n");
                printf("name: ");
                printf("%s",n);
                printf("age: ");
                printf("%d",a);
                printf("phone number: ");
                printf("%d",p);
                printf("date of birth: ");
                printf("%d",d);
                printf("address: ");
                printf("%s",add);
                printf(".............\n");

            }
            else if(num==2)
            {
                printf(".............\n");
                printf("name: ");
                printf("%s",n);
                printf("age: ");
                printf("%d",a);
                printf("phone number: ");
                printf("%d",p);
                printf("date of birth: ");
                printf("%d",d);
                printf("address: ");
                printf("%s",add);
                printf(".............\n");

                printf(".............\n");
                printf("name: ");
                printf("%s",na);
                printf("age: ");
                printf("%d",ag);
                printf("phone number: ");
                printf("%d",ph);
                printf("date of birth: ");
                printf("%d",da);
                printf("address: ");
                printf("%s",addr);
                printf(".............\n");

            }
        }
        else if (z==3)
        {
            printf("are you sure you want to close the phone book\n\n");
            printf("press 1 for yessss\n");
            printf("press 2 for noooo \n");
            int ans ;
            printf("enter \n");
            scanf("%d",&ans);
            if (ans==1)
            {
                printf("the phone book has closed");
                printf(" have a good day\n");

            }
            else if (ans ==2)
            {
                printf("the phone book has not closed\n");
                printf(" you can continue\n\n");
            }
        }
    }
    else
    {
        printf("in-valid");
    }

    return 0;


}
