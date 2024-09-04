#include <stdio.h>
#include <string.h>
int pepsi, sprite, coca_cola, fanta, mojitos, body_soap, hair_cream, body_spray, hair_spray, shampoo, coco_oil;
float sugar, tea_powder, rice, wheat, biscuit, cadbury, salt, jaggery, oats, disc = 0, price = 0;
float s,tp,r,wt,bis,cad,sa,jg,o,gro_total,pep,spr,fan,coca,moj,bever_total,bs,bp,hc,hs,shp,coco,cosm_total,total;
FILE *file;
float convert(int a)
{
    float dollar;
    dollar = 0.012 * a;
    return dollar;
}
struct prod
{
    char name[100];
    float prize;
    char company_name[300];
};
void product_info()
{
    struct prod arr[20];
    strcpy(arr[0].name, "Sugar");
    arr[0].prize = 50.5;
    strcpy(arr[0].company_name, "Brown");
    strcpy(arr[1].name, "Tea powder");
    arr[1].prize = 40;
    strcpy(arr[1].company_name, "crown");
    strcpy(arr[2].name, "Rice");
    arr[2].prize = 40.2;
    strcpy(arr[2].company_name, "basmati");
    strcpy(arr[3].name, "Wheat");
    arr[3].prize = 35;
    strcpy(arr[3].company_name, "rich");
    strcpy(arr[4].name, "Salt");
    arr[4].prize = 20;
    strcpy(arr[4].company_name, "TATA");
    strcpy(arr[5].name, "Biscuits");
    arr[5].prize = 20;
    strcpy(arr[5].company_name, "Oreo");
    strcpy(arr[6].name, "Jaggery");
    arr[6].prize = 80;
    strcpy(arr[6].company_name, "Rich");
    strcpy(arr[7].name, "Cadbury");
    arr[7].prize = 65;
    strcpy(arr[7].company_name, "KITKAT");
    strcpy(arr[8].name, "Masala oats");
    arr[8].prize = 180;
    strcpy(arr[8].company_name, "Enrich");
    strcpy(arr[9].name, "Pepsi");
    arr[9].prize = 30;
    strcpy(arr[9].company_name, "Pepsi");
    strcpy(arr[10].name, "Sprite");
    arr[10].prize = 40;
    strcpy(arr[10].company_name, "Sprite");
    strcpy(arr[11].name, "Coca-cola");
    arr[11].prize = 35;
    strcpy(arr[11].company_name, "Coca-cola");
    strcpy(arr[12].name, "Fanta");
    arr[12].prize = 25;
    strcpy(arr[12].company_name, "Fanta");
    strcpy(arr[13].name, "Mojitos");
    arr[13].prize = 70;
    strcpy(arr[13].company_name, "Mojitos");
    strcpy(arr[14].name, "body soap");
    arr[14].prize = 60;
    strcpy(arr[14].company_name, "medimix");
    strcpy(arr[15].name, "hair cream");
    arr[15].prize = 110;
    strcpy(arr[15].company_name, "aqua");
    strcpy(arr[16].name, "body spray");
    arr[16].prize = 150;
    strcpy(arr[16].company_name, "Brown");
    strcpy(arr[17].name, "Shampoo");
    arr[17].prize = 200;
    strcpy(arr[17].company_name, "Dove");
    strcpy(arr[18].name, "Coconut oil");
    arr[18].prize = 40;
    strcpy(arr[18].company_name, "Parachute");
    strcpy(arr[19].name, "Hair spray");
    arr[19].prize = 55;
    strcpy(arr[19].company_name, "godrej");
    printf("List of products available\n\n");
    for (int i = 0; i < 20; i++)
    {
        printf("product name=%s\t", arr[i].name);
        printf("prize=%.2f\t", arr[i].prize);
        printf("company name=%s\n\n", arr[i].company_name);
    }
}
void groceries_item()
{
    printf("GROCERIES\n");
    printf("--------------------------------------------------------------------------------------------------\n");

    printf("Sugar(Rs.50.5 per kg):");
    scanf("%f", &sugar);
    printf("Tea powder(Rs. 40 per kg):");
    scanf("%f", &tea_powder);
    printf("Rice(Rs.40.2 per kg):");
    scanf("%f", &rice);
    printf("Wheat(Rs.35 per kg):");
    scanf("%f", &wheat);
    printf("Salt(Rs.20):");
    scanf("%f", &salt);
    printf("Biscuits(Rs.20):");
    scanf("%f", &biscuit);
    printf("Cadbury(Rs.80):");
    scanf("%f", &cadbury);
    printf("Jaggery(Rs.65 per kg):");
    scanf("%f", &jaggery);
    printf("Masala Oats(Rs.180 per kg):");
    scanf("%f", &oats);

    printf("-----------------------------------------------------------------------------------------------------\n");
}
void beverage_item()
{
    printf("BEVERAGE\n");
    printf("------------------------------------------------------------------------------------------------------\n");

    printf("Enter number of quantity for following products\n");
    printf("Pepsi(Rs.30):");
    scanf("%d", &pepsi);
    printf("Sprite(RS.40):");
    scanf("%d", &sprite);
    printf("Coca-Cola(Rs.35):");
    scanf("%d", &coca_cola);
    printf("Fanta(Rs.25):");
    scanf("%d", &fanta);
    printf("Mojitos(Rs.70):");
    scanf("%d", &mojitos);

    printf("-------------------------------------------------------------------------------------------------------\n");
}
void cosmetic_item()
{
    printf("Cosmetics\n");
    printf("-------------------------------------------------------------------------------------------------------\n");
    printf("Enter the number of quantity for the following products\n");
    printf("Body soap(Rs.60):");
    scanf("%d", &body_soap);
    printf("Body spray(Rs.110):");
    scanf("%d", &body_spray);
    printf("Hair cream(Rs.150):");
    scanf("%d", &hair_cream);
    printf("Hair spray(Rs.200):");
    scanf("%d", &hair_spray);
    printf("Shampoo(Rs.40):");
    scanf("%d", &shampoo);
    printf("Coconut oil(Rs.55):");
    scanf("%d", &coco_oil);
    printf("------------------------------------------------------------------------------------------------------\n");
}
void discount(float total)
{
    if (total >= 5000)
    {
        printf("you got an discount of 30/ for purchased above 5000.\n");
        disc = 0.3 * total;
        price = total - disc;
        printf("Discounted price to be paid in rupees: %f\n", price);
        printf("Discounted price to be paid in dollars: %f\n", convert(price));
    }
    else if (total < 5000 && total >= 2000)
    {
        printf("you got an discount of 10/ for purchased upto 2500.\n");
        disc = 0.1 * total;
        price = total - disc;
        printf("Discounted price to be paid in rupees: %f\n", price);
        printf("Discounted price to be paid in dollars: %f\n", convert(price));
    }
    else
    {
        price = total;
        printf("no discount applicable below rupees 2000\n");
        printf("price to be paid in rupees:%0.2f\n", price);
    }
}
void store_bill(char customer_name[100])
{
    file = fopen("customer_data.txt", "a");
    if (file == NULL)
    {
        printf("Error opening the file.\n");
    }
    fprintf(file, "%s\t total amount paid=%0.2f\n", customer_name, price);

    fclose(file);
}
int main()
{
    char customer_name[100];
    product_info();
    printf("Enter your Name:");
    gets(customer_name);

    printf("BILLING SYSTEM\n");
    printf("-------------------------------------------------------------------------------------------------\n");
    groceries_item();
    beverage_item();
    cosmetic_item();
     s = 50.5 * sugar, tp = 40 * tea_powder, r = 40.2 * rice, wt = 35 * wheat, bis = 20 * biscuit, cad = 80 * cadbury, sa = 20 * salt, jg = 65 * jaggery, o = 190 * oats;
     gro_total = s + tp + r + wt + bis + cad + sa + jg + o;
     pep = 30 * pepsi, spr = 40 * sprite, coca = 35 * coca_cola, fan = 25 * fanta, moj = 70 * mojitos;
     bever_total = pep + spr + coca + fan + moj;
     bp = 60 * body_soap, bs = 110 * body_spray, hc = 150 * hair_cream, hs = 200 * hair_spray, shp = 40 * shampoo, coco = 55 * coco_oil;
     cosm_total = bp + bs + hc + hs + shp + coco;
     total = gro_total + bever_total + cosm_total;

    printf("-------------------------------------------------------------------------------------------------------\n");
    printf("Costumer Name:");
    puts(customer_name);

    printf("--------------------------------------------------------------------------------------------------------\n");

    printf("Product Name              Quantity                           Price(Rupees)                    Price(Dollars $) \n\n");
    printf("Sugar                      %0.2f Kgs.                         %0.2f                            %0.2f\n", sugar, s, convert(s));
    printf("Tea powder                 %0.2f Kgs.                         %0.2f                            %0.2f\n", tea_powder, tp, convert(tp));
    printf("Rice                       %0.2f Kgs.                         %0.2f                            %0.2f\n", rice, r, convert(r));
    printf("Wheat                      %0.2f Kgs.                         %0.2f                            %0.2f\n", wheat, wt, convert(wt));
    printf("Salt                       %0.2f Kgs.                         %0.2f                            %0.2f\n", salt, sa, convert(sa));
    printf("Biscuits                   %0.2f Kgs.                         %0.2f                            %0.2f\n", biscuit, bis, convert(bis));
    printf("Cadbury                    %0.2f Kgs.                         %0.2f                            %0.2f\n", cadbury, cad, convert(cad));
    printf("Jaggery                    %0.2f Kgs.                         %0.2f                            %0.2f\n", jaggery, jg, convert(jg));
    printf("masala Oats                %0.2f Kgs.                         %0.2f                            %0.2f\n", oats, o, convert(o));
    printf("Pepsi                      %d                                 %0.2f                            %0.2f\n", pepsi, pep, convert(pep));
    printf("Sprite                     %d                                 %0.2f                            %0.2f\n", sprite, spr, convert(spr));
    printf("Coca-Cola                  %d                                 %0.2f                            %0.2f\n", coca_cola, coca, convert(coca));
    printf("Fanta                      %d                                 %0.2f                            %0.2f\n", fanta, fan, convert(fan));
    printf("Mojitos                    %d                                 %0.2f                            %0.2f\n", mojitos, moj, convert(moj));
    printf("Body Soap                  %d                                 %0.2f                            %0.2f\n", body_soap, bp, convert(bp));
    printf("Body Spray                 %d                                 %0.2f                            %0.2f\n", body_spray, bs, convert(bs));
    printf("Hair Cream                 %d                                 %0.2f                            %0.2f\n", hair_cream, hc, convert(hc));
    printf("Hair Spray                 %d                                 %0.2f                            %0.2f\n", hair_spray, hs, convert(hs));
    printf("Shampoo                    %d                                 %0.2f                            %0.2f\n", shampoo, shp, convert(shp));
    printf("Coconut Oil                %d                                 %0.2f                            %0.2f\n", coco_oil, coca, convert(coca));

    printf("----------------------------------------------------------------------------------------------------------\n");
    printf("Total Price of Groceries in Rs:%0.2f\n Total Price of Beverages in Rs.:%0.2f\n Total Price of Cosmetics in Rs.:%0.2f\n\n Total Price in Rs.:%0.2f\n\n Total price in $:%0.2f\n\n", gro_total, bever_total, cosm_total, total, convert(total));

    discount(total);
    printf("THANK YOU!!\n");
    char b[40];
    printf("enter your feedback\n");
    scanf("%s", b);
    printf("Thank you for your valuable response\n\n");

    store_bill(customer_name);

    printf("Data has been added and stored in the file.\n");
    printf("\a");
    return 0;
}
