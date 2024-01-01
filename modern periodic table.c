#include<stdio.h>
int main()
{
    int n,m,a,exit,exi;
    printf("welcome to modern periodic table\n\n ");
    printf("->enter 1 to know about an element\n\n");
    printf("->enter 2 to close the  periodic table \n\n");
    printf("enter\n");
    scanf("%d",&n);

    if(n==1)
    {
        printf(">>press 3 to search the element by atomic number \n\n");
        printf("enter\n");
        scanf("%d",&m);

        if(m==3)
        {
            printf("enter the atomic number of the element to be searched:");
            scanf("%d",&a);

            if (a==1)
            {
                printf("Name:hydrogen\n");
                printf("symbol:H\n");
                //printf("Atomic number :1\n");
                //printf("electronic configuration:1s^1\n");
                //printf("dicovered By :henry cavendish\n");
                //printf("charge:+1\n");
            }
            else if (a==2)
            {
              printf("Name:helium\n");
              printf("symbol:He\n");
            }
            else if (a==3)
            {
                printf("Name:lithium\n");
                printf("symbol:Li\n");
            }
            else if (a==4)
            {
                printf("Name:Beryllium\n");
                printf("symbol:Be\n");
            }
            else if (a==5)
            {
                printf("Name:Boron\n");
                printf("symbol:B\n");
            }
            else if (a==6)
            {
                printf("Name:Carbon\n");
                printf("symbol:C\n");
            }
            else if (a==7)
            {
                printf("Name:Nitrogen\n");
                printf("symbol:N\n");
            }
            else if (a==8)
            {
                printf("Name:Oxygen\n");
                printf("symbol:O\n");
            }
            else if (a==9)
            {
                printf("Name:Fluorin\n");
                printf("symbol:F\n");
            }else if (a==10)
            {
                printf("Name:neon\n");
                printf("symbol:Ne\n");
            }
            else if (a==11)
            {
                printf("Name:sodium\n");
                printf("symbol:Na\n");
            }
            else if (a==12)
            {
                printf("Name:Magnesium\n");
                printf("symbol:Mg\n");
            }
            else if (a==13)
            {
                printf("Name:Aluminium\n");
                printf("symbol:Al\n");
            }
            else if (a==14)
            {
                printf("Name:silicon\n");
                printf("symbol:Si\n");
            }
            else if (a==15)
            {
                printf("Name:phosphorus\n");
                printf("symbol:p\n");
            }
            else if (a==16)
            {
                printf("Name:sulphur\n");
                printf("symbol:S\n");
            }
            else if (a==17)
            {
                printf("Name:Chlorine\n");
                printf("symbol:cl\n");
            }
            else if (a==18)
            {
                printf("Name:Argon\n");
                printf("symbol:Ar\n");
            }
            else if (a==19)
            {
                printf("Name:Potassium\n");
                printf("symbol:K\n");
            }
            else if (a==20)
            {
                printf("Name:Calcium\n");
                printf("symbol:Ca\n");
            }
        }
    }
    else if (n==2)
    {
        printf("Do you want to exit?(yes/no)\n");
        printf("press 6 for yes\n");
        printf("press 7 for no\n");
        printf("enter \n");
        scanf("%d",&exit);
        if(exit==6)
        {
            printf("are you sure ,you want to close the periodic table?(yes/no)\n");
            printf("press 4 for yes\n");
            printf("press 5 for no\n");
            printf("enter \n");
            scanf("%d",&exi);
            if(exi==4)
            {
                printf("the periodic table has closed\n");

            }
            else if(exi==5)
            {
                printf("periodic table has not closed and you can continue to learn more about elements\n\n");
                printf("enter the atomic number of the element to be searched:\n\n");
                scanf("%d",&a);
                if(a==1)
            {
                printf("Name:hydrogen\n");
                printf("symbol:H\n");
                //printf("Atomic number :1\n");
                //printf("electronic configuration:1s^1\n");
                //printf("dicovered By :henry cavendish\n");
                //printf("charge:+1\n");
            }
            else if (a==2)
            {
              printf("Name:helium\n");
              printf("symbol:He\n");
            }
            else if (a==3)
            {
                printf("Name:lithium\n");
                printf("symbol:Li\n");
            }
            else if (a==4)
            {
                printf("Name:Beryllium\n");
                printf("symbol:Be\n");
            }
            else if (a==5)
            {
                printf("Name:Boron\n");
                printf("symbol:B\n");
            }
            else if (a==6)
            {
                printf("Name:Carbon\n");
                printf("symbol:C\n");
            }
            else if (a==7)
            {
                printf("Name:Nitrogen\n");
                printf("symbol:N\n");
            }
            else if (a==8)
            {
                printf("Name:Oxygen\n");
                printf("symbol:O\n");
            }
            else if (a==9)
            {
                printf("Name:Fluorin\n");
                printf("symbol:F\n");
            }else if (a==10)
            {
                printf("Name:neon\n");
                printf("symbol:Ne\n");
            }
            else if (a==11)
            {
                printf("Name:sodium\n");
                printf("symbol:Na\n");
            }
            else if (a==12)
            {
                printf("Name:Magnesium\n");
                printf("symbol:Mg\n");
            }
            else if (a==13)
            {
                printf("Name:Aluminium\n");
                printf("symbol:Al\n");
            }
            else if (a==14)
            {
                printf("Name:silicon\n");
                printf("symbol:Si\n");
            }
            else if (a==15)
            {
                printf("Name:phosphorus\n");
                printf("symbol:p\n");
            }
            else if (a==16)
            {
                printf("Name:sulphur\n");
                printf("symbol:S\n");
            }
            else if (a==17)
            {
                printf("Name:Chlorine\n");
                printf("symbol:cl\n");
            }
            else if (a==18)
            {
                printf("Name:Argon\n");
                printf("symbol:Ar\n");
            }
            else if (a==19)
            {
                printf("Name:Potassium\n");
                printf("symbol:K\n");
            }
            else if (a==20)
            {
                printf("Name:Calcium\n");
                printf("symbol:Ca\n");
            }
            }
        }
        else if(exit==7)
        {
            printf("periodic table has not closed and you can continue to learn more elements\n\n ");
            printf("enter the atomic number of the element to be searched:\n\n");
            scanf("%d",&a);
            if (a==1)
            {
                printf("Name:hydrogen\n");
                printf("symbol:H\n");
                //printf("Atomic number :1\n");
                //printf("electronic configuration:1s^1\n");
                //printf("dicovered By :henry cavendish\n");
                //printf("charge:+1\n");
            }
            else if (a==2)
            {
              printf("Name:helium\n");
              printf("symbol:He\n");
            }
            else if (a==3)
            {
                printf("Name:lithium\n");
                printf("symbol:Li\n");
            }
            else if (a==4)
            {
                printf("Name:Beryllium\n");
                printf("symbol:Be\n");
            }
            else if (a==5)
            {
                printf("Name:Boron\n");
                printf("symbol:B\n");
            }
            else if (a==6)
            {
                printf("Name:Carbon\n");
                printf("symbol:C\n");
            }
            else if (a==7)
            {
                printf("Name:Nitrogen\n");
                printf("symbol:N\n");
            }
            else if (a==8)
            {
                printf("Name:Oxygen\n");
                printf("symbol:O\n");
            }
            else if (a==9)
            {
                printf("Name:Fluorin\n");
                printf("symbol:F\n");
            }else if (a==10)
            {
                printf("Name:neon\n");
                printf("symbol:Ne\n");
            }
            else if (a==11)
            {
                printf("Name:sodium\n");
                printf("symbol:Na\n");
            }
            else if (a==12)
            {
                printf("Name:Magnesium\n");
                printf("symbol:Mg\n");
            }
            else if (a==13)
            {
                printf("Name:Aluminium\n");
                printf("symbol:Al\n");
            }
            else if (a==14)
            {
                printf("Name:silicon\n");
                printf("symbol:Si\n");
            }
            else if (a==15)
            {
                printf("Name:phosphorus\n");
                printf("symbol:p\n");
            }
            else if (a==16)
            {
                printf("Name:sulphur\n");
                printf("symbol:S\n");
            }
            else if (a==17)
            {
                printf("Name:Chlorine\n");
                printf("symbol:cl\n");
            }
            else if (a==18)
            {
                printf("Name:Argon\n");
                printf("symbol:Ar\n");
            }
            else if (a==19)
            {
                printf("Name:Potassium\n");
                printf("symbol:K\n");
            }
            else if (a==20)
            {
                printf("Name:Calcium\n");
                printf("symbol:Ca\n");
            }

        }
    }


}
