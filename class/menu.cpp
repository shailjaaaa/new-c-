#include<iostream>
using namespace std;
class Menu
{
    protected:
    char menu[300];
    int qty;
    public:
    class data()
    {
         cout<<"---------------MENU---------------"<<endl;
        cout<<endl;
        cout<<"---------------PIZZA---------------"<<endl;
        cout<<endl;
        cout<<"1.Margertia--------------------₹250"<<endl;
        cout<<"2.volcano--------------------₹280"<<endl;
        cout<<"3.Paneer Tandori--------------------₹300"<<endl;
        cout<<"4.Green vege--------------------₹310"<<endl;
        cout<<"5.Double cheese--------------------₹320"<<endl;
        
    }
    

};

int main()
{
    int n;
    do
    { 
        cout<<"---------------WELCOME---------------"<<endl;
        cout<<endl;
        cout<<"1.SEE MENU"<<endl;
        cout<<"2.SHOW ORDERS"<<endl;
        cout<<"3.GENERATE BILL"<<endl;
        cout<<"4.EXIT"<<endl;
        cout<<"SELECT NUMBER OF YOUR CHOICE:";
        cin>>n;

        switch(n)
        {
         case 1:
      
         break;

    case 2:
      
      break;

    case 3:
      
      break;

    case 4:
      
      break;
    }
    }
    while();




    
        // cout<<"---------------PASTA---------------"<<endl;
        // cout<<endl;
        // cout<<"5.White Sauce--------------------₹250"<<endl;
        // cout<<"6.Pink sauce--------------------₹280"<<endl;
        // cout<<"7.Red sauce--------------------₹300"<<endl;

        // cout<<"---------------DRINKS---------------"<<endl;
        // cout<<endl;
        // cout<<"8.Mint mojito--------------------₹250"<<endl;
        // cout<<"9.Red bull iced tea--------------------₹280"<<endl;
        // cout<<"10.Mocha latte--------------------₹300"<<endl;
      
    

    int number;
    do
    {
       

        switch(number)
        {

        }
    } 
    while(number!=200);
    
    
    return 0;
}



#include <iostream>
using namespace std;
int main(){
    int order,no_deals;
    cout<<"|*---------------------------MENU-----------------------------*|"<<endl;
    cout<<endl;
    cout<<"(1)  Chicken Biryani                    $2 only."<<endl;
    cout<<"(2)  Chicken Palao                      $1.5 only."<<endl;
    cout<<"(3)  Chinese Rice                       $2.5 only."<<endl;
    cout<<"(4)  Chicken Burgar                     $1 only."<<endl;
    cout<<"(5)  Nawabi Pizza                       $4.5 only."<<endl;
    cout<<"(6)  2.5 Litre Coke                     $1.75 only."<<endl;
    cout<<endl;
    cout<<"Please select the order number: ";
    cin>>order;
    cout<<"Please enter the number of deals: ";
    cin>>no_deals;
    cout<<endl;
    switch(order) {
    
            case 1:
        cout<<"Order : Chicken Biryani."<<endl;
        cout<<"Number of deals : "<<no_deals<<endl;
        cout<<"Price of each deal: $2 only."<<endl;
        cout<<"Total price : "<<"$"<<2*no_deals<<" "<<"only."<<endl;
        cout<<endl;
        cout<<"~---------THANK YOU FOR COMING-----------~"<<endl;
        break;
            case 2:
        cout<<"Order Chicken Palao."<<endl;
        cout<<"Number of deals : "<<no_deals<<endl;
        cout<<"Price of each deal: $1.5 only."<<endl;
        cout<<"Total price : "<<"$"<<1.5*no_deals<<" "<<"only."<<endl;
        cout<<endl;
        cout<<"~---------THANK YOU FOR COMING-----------~"<<endl;
        break;
                case 3:
        cout<<"Order : Chinese Rice."<<endl;
        cout<<"Number of deals : "<<no_deals<<endl;
        cout<<"Price of each deal: $2.5 only."<<endl;
        cout<<"Total price : "<<"$"<<2.5*no_deals<<" "<<"only."<<endl;
        cout<<endl;
        cout<<"~---------THANK YOU FOR COMING-----------~"<<endl;
        break;
                case 4:
        cout<<"Order : Chicken Burgar."<<endl;
        cout<<"Number of deals : "<<no_deals<<endl;
        cout<<"Price of each deal: $1 only."<<endl;
        cout<<"Total price : "<<"$"<<1*no_deals<<" "<<"only."<<endl;
        cout<<endl;
        cout<<"~---------THANK YOU FOR COMING-----------~"<<endl;
        break;
                case 5:
        cout<<"Order : Nawabi Pizza ."<<endl;
        cout<<"Number of deals : "<<no_deals<<endl;
        cout<<"Price of each deal: $4.5 only."<<endl;
        cout<<"Total price : "<<"$"<<4.5*no_deals<<" "<<"only."<<endl;
        cout<<endl;
        cout<<"~---------THANK YOU FOR COMING-----------~"<<endl;
        break;
                case 6:
        cout<<"Order : 2.5 Litre Coke."<<endl;
        cout<<"Number of deals : "<<no_deals<<endl;
        cout<<"Price of each deal: $1.75 only."<<endl;
        cout<<"Total price : "<<"$"<<1.75*no_deals<<" "<<"only."<<endl;
        cout<<endl;
        cout<<"~---------THANK YOU FOR COMING-----------~"<<endl;
        break;
    
} return 0;
}