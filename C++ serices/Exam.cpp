/*  
#include<bits/stdc++.h>
using namespace std;

class Restaurant {
    private:
        int total_tax;
    public:
        int n;
        int food_item_codes[12];
        string food_item_names[12];
        int food_item_prices[12];

        int num_of_table , item, quantity[100001];
 
        // Restaurant(int food_item_codes[12], string food_item_names[12], int food_item_price[12]);
        void input();
        void make_bill();
        void input_table(int n);

        void Bill_summary();
        void find();
         
};

// second part input section...
void Restaurant :: input() {
    cin>> n; 
    for(int i=0; i<n; i++) {
        cout<<"Enter food code: ";
         cin>>food_item_codes[i];
         cout<<"Enter food name: ";
        cin.ignore();
        getline(cin, food_item_names[i]);
        cout<<"Enter food price: ";
        cin>> food_item_prices[i];
    }
}


void Restaurant :: make_bill() {

    puts("");
    cout<<"\t\t\t\t" << "MAKE BILL" << endl;
    cout<< "\t\t\t _______________________ " << endl;
    cout<< endl;

    cout <<"Item Code" << "\t\t" << "Item Name" << "\t\t\t" << "Item Price" << endl;
    for(int i=0; i<n; i++) {
        cout<< food_item_codes[i] <<"\t\t\t" << food_item_names[i] << "\t\t" << food_item_prices[i] << endl;
        
    }

}
 

// Table section...
void Restaurant:: input_table(int n) {

    puts("");
    
    cout<<"Enter the table number: ";
    cin>> num_of_table;
    cout <<"Enter number of item: ";
    cin>> item;
    
    while(true) {
        if(item > n) {
            cout<< "Please Enter valid item number!"<< endl;
            cin>> item;
        }
        else {
            break;
        }
    }
    
    int food_code[item];
    int quantity_arr[item];
    
    for(int i=0; i<item; i++) {
        cout <<"Enter item" << i+1 << " Code: ";
        cin>> food_code[i];
        cout<< "Enter item " << i+1 << " Quantity: ";
        cin>> quantity_arr[i];
    }
  
}


void Restaurant :: Bill_summary() {
    double sum=0.0;
      
    puts("");
    cout<<"\t\t\t\t" << "Bill SUMMARY" << endl;
    cout<< "\t\t\t _________________________ " << endl;

    puts("");
    cout<<"Table No:" << num_of_table <<endl;
    cout<<"Item Code"<< "\t\t" << "Item Name" << "\t\t" << "Item Quantity"<<"\t\t" << "Total Price"<< endl;
    for(int i=0; i<item; i++) {
        cout<<food_item_codes[i] <<"\t\t\t" << food_item_names[i] << "\t\t" << quantity[i] << "\t\t" << food_item_prices[i]*quantity[i] << endl;

        sum += food_item_prices[i]*quantity[i] ;
    }
    
    total_tax = sum*0.05;

    cout<<"Tax" <<"\t\t\t\t\t\t\t\t\t" <<total_tax << endl;
  
    cout <<"___________________________________________________________________________________________"<<endl;
    cout<<"Net Total\t\t\t\t\t\t\t\t" << fixed << setprecision(2) << sum+total_tax << endl;
}    
  
  
int main()
{ 
    Restaurant res;
    res.input();
     res.make_bill();
    res.input_table();
    res.Bill_summary();
  
    return 0;
} */


 
 
 // Resturant Project in C++ with OOP

#include <bits/stdc++.h>
using namespace std;

class Restaurant 
{    
    public:  
        int food_item_code[12];
        int food_item_prices[12];
        string food_item_names[12];
    protected:
        int total_tax = 0;
    public:
        void create_food_menu(int n);
        void foodDetails(int n);  
        void order_food(int n);
};

void Restaurant :: create_food_menu(int n) {
    for (int i = 0; i < n; i++) {   
        cin >> food_item_code[i];
        cin.ignore();
        getline(cin, food_item_names[i]);
        cin >> food_item_prices[i];
    }
}

void Restaurant :: foodDetails(int n) {
    cout <<"                                MAKE BILL                               "<<endl;
    cout <<"                            -----------------                       "<<endl;
    cout <<"Item Code           "<<"        Item Name        "<<"        Item Price      "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<food_item_code[i]<<"                      ";
        
        cout<<food_item_names[i]<<"                     ";

        cout<<food_item_prices[i];
        cout<<endl;
    }
}


void Restaurant :: order_food(int n) {
    cout<<endl;
    cout << "                               Make Order"<<endl;
    cout << "                            ----------------                      "<<endl;
    cout <<"Enter Table No : ";
    int table;
    cin >> table;

    cout <<"Enter Number of Items : ";
    int t;
    cin>>t;

    while (true)
    {
        if (t > n){
            cout<<"Please enter valid item number: ";
            cin>>t;
        } else {
            break;
        }
    }

    int foodCode[t];
    int quantityArray[t];
    for (int i = 0; i < t; i++) {   
        cout <<"Enter Item "<<i+1<<" Code : ";
        cin >> foodCode[i];
        cout <<"Enter Item "<<i+1<<" Quanity : ";
        cin >> quantityArray[i];
    }    
 
    
    //bill summary

    int netToal = 0;
    double tax = 0;

    cout<<endl;
    cout<<"                             BILL SUMMARY"<<endl;
    cout<<"                          -------------------"<<endl;
    cout<<"Table No : " << table<<endl; 
    cout<<"Item Code       ";
    cout<<"Item Name            ";
    cout<<"     Item Price      ";
    cout<<"Item Quantity   ";
    cout<<"   Total Price"<<endl;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
        {   
            int totalPrice = 0;
            if (foodCode[i] == food_item_code[j]){
                cout<<food_item_code[j]<<"       ";
                cout<<"      "<<food_item_names[j]<<"          ";
                cout<<"    "<<food_item_prices[j]<<"          ";
                cout<<"     "<<quantityArray[i]<<"            ";
                totalPrice += food_item_prices[j] * quantityArray[i];
                netToal += totalPrice;
                cout<<"      "<<totalPrice;
                cout<<endl;
            }
        }
    }
    // tax
    tax = (netToal / 10) / 2;
    netToal += tax;
    total_tax += tax;

    cout<<"TAX                                                                                  "<<tax<<endl;
    cout<<"-------------------------------------------------------------------------------------------"<<endl;
    cout<<"NFT TOTAL                                                                           "<< netToal<<endl;
}

int main() {
    Restaurant abc;
        int n;
        cin >> n;
        abc.create_food_menu(n);
        abc.foodDetails(n);
        abc.order_food(n);
    return 0;
}



 




#include<bits/stdc++.h>
using namespace std;

class Restaurant {
    public:
    int Quantity;
    int food_item_codes[100];
    string food_item_names[100];
    int food_item_prices[100];
    float tax;

    Restaurant() {
        float tax_percent;
        cout<<"please input current tax amount :"<<endl;
        cin>>tax_percent;
        cout<<"please input how many food you want to add :"<<endl;
        cin>>this->Quantity;
        this->tax = tax_percent/100;
    for(int i=0;i<Quantity;i++){
        cout<<"item "<<i+1<<" code : ";
            cin>>this->food_item_codes[i];
             cout<<"item "<<i+1<<" name : ";
            getline(cin>>ws,food_item_names[i]);
             cout<<"item "<<i+1<<" price : ";
            cin>>this->food_item_prices[i];
    }
    }
    friend class customer;

   void ShowMenu(){
    cout<<"                    Make Bill                    "<<endl;
    cout<<"Item Code"<<"         "<<"Item name"<<"         "<<"Item price"<<endl;
    for(int i=0;i<this->Quantity;i++){
        cout<<this->food_item_codes[i]<<"         "<<this->food_item_names[i]<<"         "<<this->food_item_prices[i]<<endl;
    }
    }
 
};


class customer{

public:
    string name;
    int tableNo;
    int order[100];
    int order_count[100];
    float payable_amount;
    float total_payable_amount;

customer(Restaurant *myRestaurant){
    cout<<"please enter your name :";
     getline(cin>>ws,this->name);
     cout<<"please enter your table number :";
     cin>>this->tableNo;
     int item_count;
     cout<<"how many item do you want to order? :";
     cin>>item_count;

     for(int i=0;i<item_count;i++){
        int itemPrice = 0;
        cout<<"please input item code of item no "<<i+1<<" : ";
        cin>>this->order[i];
        cout<<"how many of item "<<i+1<< " you want? : ";
        cin>>this->order_count[i];
        for(int j=0;j<12;j++){
            if(this->order[i]==myRestaurant->food_item_codes[j]){

                itemPrice= myRestaurant->food_item_prices[j]*order_count[i];
            }
        }

        if(itemPrice==0){
            cout<<"item doesn't exsist please retry !"<<endl;
            i--;
        }else{
        this->payable_amount = this->payable_amount + itemPrice;
        }

     }
     cout<<endl<<endl<<endl;
     cout<<"============Order Summary=================="<<endl;
    cout<<this->name<<" table no "<<this->tableNo<<" Your bill is"<<endl;
     cout<<"Item Code"<<"         "<<"Item name"<<"         "<<"Item price"<<"         "<<"Item quantity"<<endl;
    for(int k=0;k<item_count;k++){
            for(int j=0;j<12;j++)
            {
                if(this->order[k]==myRestaurant->food_item_codes[j]){
                    cout<<myRestaurant->food_item_codes[j]<<"         "<<myRestaurant->food_item_names[j]<<"         "<<myRestaurant->food_item_prices[j]<<"         "<<this->order_count[k]<<endl;
                }
            }

    }
     cout<<"-----------------------------------------------------------------------------------------------"<<endl;
     cout<<"Total amount : ---------------------- "<<this->payable_amount<<endl;
     cout<<"vat : ------------------------------- "<<myRestaurant->tax*100<<"%"<<endl;
     this->total_payable_amount = this->payable_amount + (this->payable_amount*myRestaurant->tax);
     cout<<"payable amount : -------------------- "<<this->total_payable_amount<<endl;

}
};

 Restaurant* createRestaurant(){
Restaurant *myRestaurant = new Restaurant();
return myRestaurant;
}

customer* createCustomer(Restaurant *myResturant){
    customer *anyCustomer = new customer(myResturant);
    return anyCustomer;
}


int main(){

    Restaurant *myRestaurant = createRestaurant();
    customer *anyCustomer;

    int option;

    while(option!=5){
            cout<<endl<<endl<<endl;
            cout<<"============OPTIONS=========== :"<<endl;
            cout<<"Enter 1 for menu or 2 for order and 5 for exit :"<<endl;
             cout<<"please input select your option number"<<endl;
             cin>>option;
        if(option==1){
             myRestaurant->ShowMenu();
        }
    if(option==2){
        anyCustomer = createCustomer(myRestaurant);
    }
    }

 

return 0;
}
