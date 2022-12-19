 
 #include<bits/stdc++.h>
 using namespace std;

class BankAccount {
   protected:
      int balance;
   private:
      string password;
   public:
      string account_holder;
      string address;
      int age;
      int account_number;
      BankAccount(string account_holder, string address, int age, string password); // constractor
      int show_balance(string password);
      void add_money(string password, int amount);
};

int BankAccount :: show_balance(string password) {
   if(this->password == password) 
      return this->balance;
   else 
      return -1;
}

BankAccount :: BankAccount(string account_holder, string address, int age, string password) {
   this->account_holder = account_holder;
   this->address = address;
   this->age = age;
   this->password = password;
   this->account_number = rand() %10000000007;
   this->balance = 0;
   cout<< "Your account number is: " << this->account_number << endl;
}

BankAccount *create_account() {
   string account_holder, password, address;
   int age;

   cout<< "Create Account" << endl;
   cin>> account_holder >> address >> password;
   BankAccount *myAccount = new BankAccount(account_holder, address, age, password);
   return myAccount;
}

void BankAccount :: add_money(string password, int amount) {
   if(this->password == password) {
      this->balance += amount;
      cout << "Add money successfull" << endl;
   }
   else 
      cout<< "Your password didn't match!" << endl;
}

void addMoney(BankAccount *myAccount) {
   string password;
   int amount;
   cout<<"Add Money" << endl;
   cin>> password >> amount;
   myAccount->add_money(password, amount);
   cout<< "Your current balance is: " << myAccount->show_balance("abc") << endl;

}

 int main()
 {
   
   BankAccount *myAccount = create_account();
   addMoney(myAccount);
 

    return 0;
 }
 
 