#include<iostream>
using namespace std;

class ItemDetails
{
    public:
        int item_no;
        char item_name[50];
        float item_price;
};
class DiscountedItem : public ItemDetails
{
    public:
        int discount_percent;
        int discounted_price;
        void accept_details()
        {
                cout<<"\n Enter Item Name : ";
                cin>>item_name;
                cout<<"\n Enter Item No. : ";
                cin>>item_no;
                cout<<"\n Enter Item Price : ";
                cin>>item_price;
                cout<<"\n Enter Discount Percent : ";
                cin>>discount_percent;
                cout<<"\n ----------------------\n";
                discounted_price = item_price - item_price * discount_percent / 100;
        }
        void display_details()
        {
                cout<<"\n Item Name : "<<item_name;
                cout<<"\n Item No. : "<<item_no;
                cout<<"\n Item Price : "<<item_price;
                cout<<"\n Discount Percent : "<<discount_percent;
                cout<<"\n Discounted Price : "<<discounted_price;
                cout<<"\n ----------------------";
        }
};
int main()
{
        int i, cnt, discount = 0, price = 0;
        DiscountedItem dt[100];
        cout<<"\n How many items you want to enter? : ";
        cin>>cnt;
        for(i=1; i<=cnt; i++)
        {
                dt[i].accept_details();
        }
        for(i=1;i<=cnt;i++)
        {
                dt[i].display_details();
        }
        for(i=1;i<=cnt;i++)
        {
                price = price + dt[i].item_price;
        }
        for(i=1;i<=cnt;i++)
        {
                discount = discount + dt[i].item_price-dt[i].discounted_price;
        }
        cout<<"\n Total Price : "<<price;
        cout<<"\n Total Discount : "<<discount;
        return 0;
}