#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
 
class Shope {
    private:
        int total_income;
    public:
        int n, num;
        string product_name[10];
        int product_price[10];
        int product_quantity[10];
 
        void input();
        void output();
        void show_details();

        void update();

        void set_income(int num) {
            num = total_income;
        }

        int get_income() {
            return this->total_income;
            total_income++;
        }


};

void Shope :: input() {
     cout<< "Enter Number Of Product: ";
     cin>> n;

     for(int i=0; i<n; i++) {
        cout<<"Product " << i+1 << " Name: ";
        cin>> product_name[i];
        cout<<"Product " << i+1 << " Price: ";
        cin>> product_price[i];  
        cout<<"Product " << i+1 << " Quentity: ";
        cin>> product_quantity[i];

     } 
}


void Shope :: show_details() {
    puts("");
    cout<<"             BUY PRODUCT                     " << endl;
    cout<<"           -----------------                  " << endl;
    
    cout<< "Product Index\t\t";
    for(int i=1; i<=n; i++) {
        cout<<i <<"\t";
    }
    cout<< endl;
    cout<<"Produt Name\t\t";
    for(int i=0; i<n; i++) {
        cout<< product_name[i] << "\t";
    }

     cout<<endl;
    cout<<"Product Price\t\t";
    for(int i=0; i<n; i++) 
        cout<<product_price[i] <<"\t";
    
    cout<< endl;
    cout << "Product Quantity\t";
    for(int i=0; i<n; i++) 
        cout<<product_quantity[i] <<"\t";
    cout<< endl;
     
} 


void Shope :: update() {

    puts("");
  
     cout<< endl<< "Which product do you want? 1 to " << n << ": ";
     

    puts("");
  
}
 
int main()
{
   
        Shope shope;
        shope.input();
        shope.show_details();
          

    return 0;
}


 