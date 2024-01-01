#include<stdio.h>
int main()
{
    char name [50];
    int phone_number ;
    int customer_id;

    int body_soap;
    int hair_cream;
    int hair_spray;
    int body_spray;

    int suger;
    int tea;
    int coffee;
    int rice;
    int wheat;

    int pepsi;
    int sprite;
    int coke;
    int mojitos;
    int thumbs_up;

    int total;
    int cosmetics_total;
    int grocery_total;
    int beverage_total;

    printf(".............\n");
    printf("BILLING SYSTEM\n");
    printf(".............\n");
    printf("Customer Details: \n\n");

    printf("Customer Name: ");
    scanf("%s",&name);
    printf("Customer number: ");
    scanf("%d",&phone_number);
    printf("Customer id: ");
    scanf("%d",&customer_id);

    printf(".............\n");
    printf("COSMETICS\n\n");

    printf("Body soap(RS 10): ");
    scanf("%d",&body_soap);
    printf("Hair Cream(RS 25): ");
    scanf("%d",&hair_cream);
    printf("Hair Spray(RS 50): ");
    scanf("%d",&hair_spray);
    printf("Body Spray(RS 50): ");
    scanf("%d",&body_spray);

    printf(".............\n");
    printf("GROCERIES\n\n");

    printf("suger(RS 100): ");
    scanf("%d",&suger);
    printf("tea(RS 15): ");
    scanf("%d",&tea);
    printf("coffee(RS 50): ");
    scanf("%d",&coffee);
    printf("rice(RS 150): ");
    scanf("%d",&rice);
    printf("wheat(RS 160): ");
    scanf("%d",&wheat);

    printf(".............\n");
    printf("BEVERAGES\n\n");

    printf("pepsi(RS 30): ");
    scanf("%d",&pepsi);
    printf("sprite(RS 35): ");
    scanf("%d",&sprite);
    printf("coke(RS 30): ");
    scanf("%d",&coke);
    printf("mojitos(RS 25): ");
    scanf("%d",&mojitos);
    printf("thumbs_up(RS 35): ");
    scanf("%d",&thumbs_up);

    printf(".............\n");
    int boso;
    int hc;
    int hs;
    int bosp;

    boso=10*body_soap;
    hc=25* hair_cream;
    hs=50*hair_spray;
    bosp=50*body_spray;
    cosmetics_total=boso+hc+hs+bosp;

    printf("body soap :");
    printf("%d RS\n",boso);
    printf("Hair cream  :");
    printf("%d RS\n",hc);
    printf("Hair spray :");
    printf("%d RS\n",hs);
    printf("Body Spray :");
    printf("%d RS\n",bosp);
    printf("Total Cosmetic Price:");
    printf("%d RS\n",cosmetics_total);
    printf(".............\n");

    int s;
    int t;
    int c;
    int r;
    int w;

    s=100*suger;
    t=15*tea;
    c=50*coffee;
    r=150*rice;
    w=160*wheat;
    grocery_total=s+t+c+r+w;

    printf(" suger:");
    printf("%d RS\n",s);
    printf("tea  :");
    printf("%d RS\n",t);
    printf("coffee :");
    printf("%d RS\n",c);
    printf("rice :");
    printf("%d RS\n",r);
    printf("wheat:");
    printf("%d RS\n",w);
    printf("total grocery price:");
    printf("%d RS\n",grocery_total);
    printf(".............\n");

    int pep;
    int spr;
    int cok;
    int moj;
    int thu;

    pep=30*pepsi;
    spr=35*sprite;
    cok=30*coke;
    moj=25*mojitos;
    thu=35*thumbs_up;
    beverage_total=pep+spr+cok+moj+thu;

    printf(" pepsi:");
    printf("%d RS\n",pep);
    printf("sprite  :");
    printf("%d RS\n",spr);
    printf("coke :");
    printf("%d RS\n",cok);
    printf("mojitos :");
    printf("%d RS\n",moj);
    printf("thumbs_up:");
    printf("%d RS\n",thu);
    printf("total beverage price:");
    printf("%d RS\n",beverage_total);
    printf(".............\n");

    total=cosmetics_total+grocery_total+beverage_total;
    printf("total amount :");
    printf("%d RS\n",total);
    printf(".............\n");
    printf("........................................\n");

    printf("ANTEIKU SUPER MARKET\n\n");
    printf("Customer Name:");
    printf("%s\n",name);
    printf("Customer number:");
    printf("%d\n",phone_number);
    printf("Customer id: ");
    printf("%d\n",customer_id);


    printf("product name            Quantity                   price\n\n  ");
    printf("Body soap                 %d                       %d\n",body_soap,boso);
    printf("Hair Cream                %d                       %d\n",hair_cream,hc);
    printf("Hair Spray                %d                       %d\n",hair_spray,hs);
    printf("body Spray                %d                       %d\n",body_spray,bosp);
    printf("suger                     %d                       %d\n",suger,s);
    printf("tea                       %d                       %d\n",tea,t);
    printf("coffee                    %d                       %d\n",coffee,c);
    printf("rice                      %d                       %d\n",rice,r);
    printf("wheat                     %d                       %d\n",wheat,w);
    printf("pepsi                     %d                       %d\n",pepsi,pep);
    printf("sprite                    %d                       %d\n",sprite,spr);
    printf("coke                      %d                       %d\n", coke,cok);
    printf("mojitos                   %d                       %d\n",mojitos,moj);
    printf("thumbs_up                 %d                       %d\n",thumbs_up,thu);

    printf("grocery total price:%d\n\n",grocery_total);
    printf("Cosmetic total  Price:%d\n\n",cosmetics_total);
    printf("beverage total price:%d\n\n",beverage_total);
    printf("total price:%d\n\n",total);
    printf("........................................\n");
    return 0;
}
