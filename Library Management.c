#include<stdio.h>
int main()
{
    printf(".......main menu.....\n\n");

    printf("1.add book\n");
    printf("2.display book information\n");
    printf("3.search book (book status)\n");
    printf("4.exit\n\n");

    int a1;
    printf("enter : ");
    scanf("%d",&a1);
    printf("\n\n");

    if(a1==1)
    {
        printf("you can add book information \n\n");
        printf("choose the category: \n\n");
        printf("1. computer \n");
        printf("2.Electronics\n");
        printf("3.mechanical \n\n");

        int a2;
        printf("choose a category: ");
        scanf("%d",&a2);
        printf("\n\n");

        if(a2==1)
        {
            printf("you have choosed computer category\n\n");
            printf("1. introduction to c \n");
            printf("2. introduction to pythan \n");
            printf("3. introduction to R programming\n\n");

            int a3;
            printf("choose a book:");
            scanf("%d",&a3);

            printf("\n\n");

            if(a3==1)
            {
                printf("you have choosed introduction to c book\n\n");

                char book_namea[50];
                char author_namea[50];
                int pagea;
                int pricea;

                printf("book name: ");
                scanf("%s",&book_namea);
                printf("\n\n");

                printf("author name: ");
                scanf("%s",&author_namea);
                printf("\n\n");

                printf("pages: ");
                scanf("%d",&pagea);
                printf("\n\n");

                printf("prices: ");
                scanf("%d",&pricea);
                printf("\n\n");

            }
            else if(a3==2)
            {
                printf("you have choosed introduction to python book\n\n");

                char book_nameb[50];
                char author_nameb[50];
                int pageb;
                int priceb;

                printf("book name: ");
                scanf("%s",&book_nameb);
                printf("\n\n");

                printf("author name: ");
                scanf("%s",&author_nameb);
                printf("\n\n");

                printf("pages: ");
                scanf("%d",&pageb);
                printf("\n\n");

                printf("prices: ");
                scanf("%d",&priceb);
                printf("\n\n");
            }
            else if(a3==3)
            {
                printf("you have choosed introduction to R programming book\n\n");

                char book_namec[50];
                char author_namec[50];
                int pagec;
                int pricec;

                printf("book name: ");
                scanf("%s",&book_namec);
                printf("\n\n");

                printf("author name: ");
                scanf("%s",&author_namec);
                printf("\n\n");

                printf("pages: ");
                scanf("%d",&pagec);
                printf("\n\n");

                printf("prices: ");
                scanf("%d",&pricec);
                printf("\n\n");
            }

        }
        else if(a2==2)
        {
            printf("you have choosed electronics category\n\n");
            printf("1. practical electronics for inventors \n");
            printf("2. the art of electronics \n");
            printf("3. functionals of digital circuits\n\n");

            int a4;
            printf("choose a book:");
            scanf("%d",&a4);

            printf("\n\n");

            if(a4==1)
            {
                printf("you have choosed practical electronics for inventors book\n\n");

                char book_named[50];
                char author_named[50];
                int paged;
                int priced;

                printf("book name: ");
                scanf("%s",&book_named);
                printf("\n\n");

                printf("author name: ");
                scanf("%s",&author_named);
                printf("\n\n");

                printf("pages: ");
                scanf("%d",&paged);
                printf("\n\n");

                printf("prices: ");
                scanf("%d",&priced);
                printf("\n\n");

            }
            else if(a4==2)
            {
                printf("you have choosed the art of electronics book\n\n");

                char book_namee[50];
                char author_namee[50];
                int pagee;
                int pricee;

                printf("book name: ");
                scanf("%s",&book_namee);
                printf("\n\n");

                printf("author name: ");
                scanf("%s",&author_namee);
                printf("\n\n");

                printf("pages: ");
                scanf("%d",&pagee);
                printf("\n\n");

                printf("prices: ");
                scanf("%d",&pricee);
                printf("\n\n");
            }
            else if(a4==3)
            {
                printf("you have choosed functionals of digital circuits book\n\n");

                char book_namef[50];
                char author_namef[50];
                int pagef;
                int pricef;

                printf("book name: ");
                scanf("%s",&book_namef);
                printf("\n\n");

                printf("author name: ");
                scanf("%s",&author_namef);
                printf("\n\n");

                printf("pages: ");
                scanf("%d",&pagef);
                printf("\n\n");

                printf("prices: ");
                scanf("%d",&pricef);
                printf("\n\n");
            }

         }
        else if(a2==3)
        {
            printf("you have choosed mechanical category\n\n");
            printf("1. introduction to autocad\n");
            printf("2. fundamentals of thermodynamics\n");
            printf("3. mechaical engineering :conventional and objective type\n\n");

            int a5;
            printf("choose a book:");
            scanf("%d",&a5);

            printf("\n\n");
            if(a5==1)
            {
                printf("you have choosed introduction to autocad book\n\n");

                char book_nameg[50];
                char author_nameg[50];
                int pageg;
                int priceg;

                printf("book name: ");
                scanf("%s",&book_nameg);
                printf("\n\n");

                printf("author name: ");
                scanf("%s",&author_nameg);
                printf("\n\n");

                printf("pages: ");
                scanf("%d",&pageg);
                printf("\n\n");

                printf("prices: ");
                scanf("%d",&priceg);
                printf("\n\n");

            }
            else if(a5==2)
            {
                printf("you have choosed fundamentals of thermodynamics book\n\n");

                char book_nameh[50];
                char author_nameh[50];
                int pageh;
                int priceh;

                printf("book name: ");
                scanf("%s",&book_nameh);
                printf("\n\n");

                printf("author name: ");
                scanf("%s",&author_nameh);
                printf("\n\n");

                printf("pages: ");
                scanf("%d",&pageh);
                printf("\n\n");

                printf("prices: ");
                scanf("%d",&priceh);
                printf("\n\n");
            }
            else if(a5==3)
            {
                printf("you have choosed mechaical engineering :conventional and objective type book\n\n");

                char book_namei[50];
                char author_namei[50];
                int pagei;
                int pricei;

                printf("book name: ");
                scanf("%s",&book_namei);
                printf("\n\n");

                printf("author name: ");
                scanf("%s",&author_namei);
                printf("\n\n");

                printf("pages: ");
                scanf("%d",&pagei);
                printf("\n\n");

                printf("prices: ");
                scanf("%d",&pricei);
                printf("\n\n");
            }
        }
    }
    else if(a1==3)
    {
        printf("you can search the book (book status)\n\n");
        printf("press the code:123 for introduction to c\n");
        printf("press the code:456 for introduction to python\n");
        printf("press the code:789 for introduction to r programming\n");
        printf("press the code:523 for practical electronics for inventors \n");
        printf("press the code:759 for the art of electronics\n");
        printf("press the code:157 for functionals of digital circuits\n");
        printf("press the code:359 for introduction to autocad\n");
        printf("press the code:153 for fundamentals of thermodynamics\n");
        printf("press the code:104 for mechaical engineering :conventional and objective \n");

        int a6;
        printf("enter the book to search(Use the code):");
        scanf("%d",&a6);
        printf("\n\n");

        switch (a6)
        {
            case 123:
            printf("book name:introduction to c\n\n");
            printf("book status:2 copies left");
            break;

            case 456:
            printf("book name:introduction to python\n\n");
            printf("book status:12 copies left");
            break;

            case 789:
            printf("book name:introduction to r programming\n\n");
            printf("book status:30 copies left");
            break;

            case 523:
            printf("book name:practical electronics for inventors\n\n ");
            printf("book status:2 copies left");
            break;

            case 759:
            printf("book name:the art of electronics\n\n");
            printf("book status:20 copies left");
            break;

            case 157:
            printf("book name:functionals of digital circuits\n\n");
            printf("book status:13 copies left");
            break;

            case 359:
            printf("book name:introduction to autocad\n\n");
            printf("book status:out off");
            break;

            case 153:
            printf("book name:fundamentals of thermodynamics\n\n");
            printf("book status:7 copies left");
            break;

            case 104:
            printf("book name:mechaical engineering :conventional and objective\n\n");
            printf("book status: 5 copies left");
            break;
        }

    }
    else if(a1==4)
    {
        printf("the library is closed ");
        printf("Have a nice day");

    }
}
