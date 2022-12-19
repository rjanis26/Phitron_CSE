
/* 
#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    char section;
    int roll;
protected:
    int english_marks;
private:
    string password;
public:
    void set_password(string pass)
    {
        password=pass;
    }
    void set_marks(int marks)
    {
        english_marks=marks;
    }
    int get_marks()
    {
        return english_marks;
    }
    void update_marks(string pass, int marks)
    {
        if(pass==password)
        {
            english_marks=marks;
        }
        else
        {
            cout<<"Password didn't match!"<<endl;
        }
    }

};
int main()
{
    int n;
    cin>>n;
    Student st[n];
    for(int i=0;i<n;i++)
    {
        string name,password;
        char section;
        int roll,marks;
        cin>>name>>section>>roll>>marks>>password;
        st[i].name=name;
        st[i].section=section;
        st[i].roll=roll;
        st[i].set_marks(marks);
        st[i].set_password(password);
    }
    int roll,marks;
    string password;
    cin>>roll>>marks>>password;
    bool found=false;
    for(int i=0;i<n;i++)
    {
        if(st[i].roll == roll )
        {
            found=true;
            st[i].update_marks(password,marks);
        }
    }
    if(!found)
    {
        cout<<"Student not found!"<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        cout<<st[i].name<<" "<<st[i].section<<" "<<st[i].roll<<" "<<st[i].get_marks()<<endl;
    }
    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;

class Student {
    private:
        string name;
        char section;
        int roll, english_marks;
        string password;

    public:
        void input();
        void print_info();

};

void Student :: input() {
    cout<< "Enter the name: " << endl;
    cin>> name;
    cout<< "Enter the section: "<< endl;
    cin>> section ;
    cout << "Enter roll : "<< endl;
    cin >> roll;
    cout<< "Enter English marks: " << endl;
    cin>> english_marks;
    cout<< "Enter your password: " << endl;
    cin >> password;
}

void Student :: print_info() {
    cout << "Name : " << name << endl;
    cout<< "Section: " << section << endl;
    cout<< "Roll: " << roll << endl;
    cout << "English marks: " << english_marks << endl;
    cout<< "Password: " << password << endl;
}


int main()
{   
    int n;
    cout<< "How many student info do you want?"<< endl;
    cin>> n;
    Student student[n];
    
    for(int i=0; i<n; i++) {
        student->input();
        student->print_info();
    }
  

    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        string name;
        char section;
        int roll;

        void input();
        void show_details();
};

void Student :: input() {
    cout<< "Enter your name: " << endl;
    cin>> name;
    cout<<"Enter your section: " << endl;
    cin>> section ;
    cout<< "Enter your roll: " << endl;
    cin>> roll;
}

void Student :: show_details() {
    cout<< "Name: " << name << endl;
    cout << "Section: " << section << endl;
    cout<< "Roll: " << roll << endl;
}


int main() 
{   
    Student student;
    student.input();
    student.show_details();
 
    return 0;
} */
 
 /* 
#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        string name;
        char section;
        int roll;
        Student(string nam, char sect, int rol);
        void print_information();
        
};
 
Student ::  Student(string nam, char sect, int rol) {
    name = nam;
    section = sect;
    roll = rol;

}

void Student :: print_information() {
    cout<< "Name: " << name <<endl;
    cout<<"Section: " << section<<endl;
    cout<< "Roll: " << roll << endl;
}


int main() 
{    
    Student student = Student("Anisul islam", 'A', 534);
    student.print_information();
     
    return 0;
}   */
 
/* 
#include<bits/stdc++.h>
using namespace std;

class Student {
    private:
        string name;
        char section;
        int roll;
        string password;

    protected:
        int english_marks;

    public:
        Student(string nam, char sect, int rol, int marks, string pass);
        void print_info();

};

Student :: Student(string nam, char sect, int rol, int marks, string pass) {
    name = nam;
    section = sect;
    roll = rol;
    english_marks = marks;
    password = pass;
}


// void Student :: input() {
//     cout<< "Enter the name: " << endl;
//     cin>> name;
//     cout<< "Enter the section: "<< endl;
//     cin>> section ;
//     cout << "Enter roll : "<< endl;
//     cin >> roll;
//     cout<< "Enter English marks: " << endl;
//     cin>> english_marks;
//     cout<< "Enter your password: " << endl;
//     cin >> password;
// }

void Student :: print_info() {
    cout << "Name : " << name << endl;
    cout<< "Section: " << section << endl;
    cout<< "Roll: " << roll << endl;
    cout << "English marks: " << english_marks << endl;
    cout<< "Password: " << password << endl;
}


int main()
{    
    Student student = Student("Anisul isalam", 'A', 143, 85, "CHSB180024");
    student.print_info();

    return 0;
}   */

/* 
#include<bits/stdc++.h>
using namespace std;

class Student {
    int id;
    string name;

    public:
        void get_info();
        void put_info();
};


void Student :: get_info() {
    cin>> id >> name;
}


void Student :: put_info() {
    cout<< id << "\t" << name << endl;
}

int main()
{
    Student s[60];
    int n;
    cout << "Enter num of student[1-60]: " << endl;
    cin>> n; 

    if(n<1 or n>60) 
        cout<< "Please Enter (1-60): " <<endl;
    else {
        for(int i=0; i<n; i++) {
            s[i].get_info();
        }
    }

    cout<< "Id\t Name\t" << endl;
    cout<< "-----------------" << endl;
    for(int i=0; i<n; i++) 
        s[i].put_info();

 

    return 0;
} */
/* 
#include<bits/stdc++.h>
using namespace std;

class Book {
    string book_name;
    string author;
    float price;    

    public:
        void read_book();
        void show_details();
};

void Book :: read_book() {
    cout<< "Enter the Book name: " << endl;
    cin.ignore();
    getline(cin, book_name);
    cout<< "Enter the author name: " << endl;
    getline(cin, author);
    cout<<"Enter the price: " << endl;
    cin>> price;
}

// void Book :: show_details() {
//     cout<< "Book name: " << book_name << endl;
//     cout << "Author name: " << author << endl;
//     cout<<"Price: " << price << endl;
// }

void Book :: show_details() {
    cout << book_name <<"\t" << author << "\t" << price << " Tk." << endl;
}

int main()  
{
    Book *arr; // Dnamic allocation.. 
    int n;
    cout<<"Enter the number of orders: "<< endl;
    cin>>n;
    arr = new Book[n];

    for(int i=0; i<n; i++) 
        arr[i].read_book();
    
    cout<<"Book_name " << "\t" << "Author " << "\t" << "price" << endl;
    cout<< "--------------------------------------------" << endl;

    for(int i=0; i<n; i++) 
        arr[i].show_details();
    
    delete arr;

    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;

class Books {
    string title;
    float price;

    public:
        void get_data();
        void put_data();
};


void Books :: get_data() {
    cout <<"Title: ";
    cin.ignore();
    getline(cin, title);
    cout<<"price: ";
    cin>> price;
}

void Books :: put_data() {
    cout<< "Title: " << title << endl;
    cout<< "Price: " << price  <<" Tk." << endl;
}

int main()
{   
    Books *arr;
    int n; cout<<"Enter the number: ";
    cin>>n;
    arr = new Books[n];

    for(int i=0; i<n; i++) 
        arr[i].get_data();

    puts("");
    cout<< "*****Books Details*****" << endl;
    
    for(int i=0; i<n; i++) 
        arr[i].put_data();
    delete arr;
 
    return 0;
} */

 /* 
#include<bits/stdc++.h>
using namespace std;

class Student {
    int id, sub[6], n;
    string name;

    public:
        void get_data();
        void result();
};


void Student :: get_data() {
    cout << "Enter the Id: " << endl;
    cin>>id;
    cout<< "Enter the name: "<< endl;
    cin.ignore();
    getline(cin, name);

    cout<<"Enter how student marks want: "<< endl;
    cin>> n;

    for(int i=0; i<n; i++) {
         cout<< "Enter subject marks " << i+1 <<":";
          cin>> sub[i];
    }
                
}

void Student :: result() {
    int total = 0;
    double avg;

    for(int i=0; i<n; i++)  
        total += sub[i];
     

    avg = total/n;

    puts("");
    cout<< "***********Result Details************" << endl;
    cout<< "ID: " << id << endl;
    cout<< "Name: " << name << endl;
    cout<< "Tatal: " << total << endl;
    cout<< "Average: " << avg << endl;
    cout<< "Result: ";
    
    bool ans= true;
    int count=0;
    for(int i=0; i<n; i++) {
        if(sub[i] <33) {
             ans= false;
            break;
        }  
    } 
    
    if(ans == false) 
         cout << "Fail" << endl;
       
    else 
        cout<< "Congratulatins! Great Job." << endl;
}

int main()
{
    Student student;
    student.get_data();
    student.result();
  
    return 0;
}  

 */

/* CONSTRUCTOR IN C++ */
/* 
#include<bits/stdc++.h>
using namespace std;

class Test {
    int a, b;
    public:
        Test();
        void show_data();
};

Test :: Test() {
    a= 10;
    b= 100;
}

void Test :: show_data() {
    cout << "a = " << a << ", " << "b = " << b <<endl;
}

int main()
{       
    Test t;
    t.show_data();
 
    return 0;
} */ 


 /* 
#include<bits/stdc++.h>
using namespace std;
#define Pi 3.1416

class Circle {
    double r;
    public: 

        void cal_area();     
        Circle(double r);
     
};
  
Circle :: Circle(double r) {
    (*this).r = r;
}

void Circle :: cal_area() {
    double res = Pi* r * r;
    cout<< fixed << setprecision(3) <<"Area of circle: "<< res << endl;
}

int main()
{   
    Circle cirlce = Circle(2.5);
    Circle a(5.5);
    Circle b(3.3);
    cirlce.cal_area();
    a.cal_area();
    b.cal_area();
    return 0;
}   
  */

 /* 
#include<bits/stdc++.h>
using namespace std;

class Student {
    private:
        int id;
        string name;
    public: 
        void get_data();
        void put_data();
};

void Student :: get_data() {
    cout << "Enter your id: " << endl;
    cin>> id;
    cout<< "Enter your name: " <<endl;
    cin.ignore();
    getline(cin, name);
}
    
void Student :: put_data() {
    cout<< "ID: " << id << endl;
    cout<< "Name: " << name << endl;
}

class Physical : private Student {
    double height, weight;
    public:
        void get_info();
        void print_inf();

};

void Physical :: get_info() {
    get_data();
    cout<< "Enter you height: " << endl;
    cin>> height;
    cout<< "Enter your weight: " << endl;
    cin>> weight ;
}

void Physical :: print_inf() {
    put_data();
    cout<< "Your height: " << height <<" Inch" << endl;
    cout<< "Your weight: " << weight << " KG." << endl;
}

int main()
{   
    
    Physical ph;
    
      ph.get_info();

      puts("");
      cout<< "      Studet Information      "<< endl;
      cout<<"---------------------------------------------:" << endl;
     
    ph.print_inf();

    return 0;
} 
 */
 
 // Multiple inheritance

 /* 
 #include<bits/stdc++.h>
 using namespace std;

class Student {
    int id;
    string name;
    public:
        void get_data();
        void put_data();
};

void Student :: get_data() {
    cout<< "Enter the id: ";
    cin>> id;
    cout<< "Enter your name: ";
    cin.ignore();
    getline(cin, name);
}

void Student :: put_data() {
    cout <<"ID: " << id << endl;
    cout<< "Name: " << name << endl;
}

class Marks {
    protected:
        int m1, m2, m3;
    public:
        void get_marks();
        void print_marks();
};

void Marks ::get_marks() {

    cout <<"Enter the 3 subj marks: ";
     cin>> m1 >> m2 >> m3;
     
}

void Marks :: print_marks() {
    cout<<"Frist subject marks: " << m1 << endl;
    cout<<"second subject marks: " << m2 << endl;
    cout<<"Third subject marks: " << m3 << endl;
}

class Result : public Student,  public Marks {
    int total;
    double average;
    public:
        void calculate_sum();
};

        
void Result :: calculate_sum() {
   
    total = m1 + m2 + m3;
    cout << "Total: " << total << endl;
    average = (double)total / 3;
    cout<< "Average: " << average << endl;
}

void show_details() {
     puts("");
    cout<< "        Student Information     "<< endl;
    cout<<"------------------------------" << endl;
}

 int main()
 {
        Result rs;
        rs.get_data();
        rs.get_marks();

        show_details();
        rs.put_data();
        rs.print_marks();
        rs.calculate_sum();
 
    return 0;
 } */

// Multilevel inheritance
 