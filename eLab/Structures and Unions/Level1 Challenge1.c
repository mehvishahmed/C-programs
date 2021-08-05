#include <stdio.h>
#include<string.h>
struct groceryshop
{
    char name[10];
    int qty;
    float price,gst;
};
int main()
{ 
    struct groceryshop tax;
    scanf("%s",tax.name);
    scanf("%f %d",&tax.price,&tax.qty); tax.gst=0.14;float total=tax.price*tax.qty;
    printf("%s\n%.2f\n%.2f\n%.2f",tax.name,total,total*tax.gst,total+(total*tax.gst));
    return 0;
}
