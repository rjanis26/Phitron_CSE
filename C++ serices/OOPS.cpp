
//https://www.sarthaks.com/2413067/which-among-the-following-doesnt-come-under-oop-concept?show=2413067#q2413067

// Inheritance..
/* 
#include<bits/stdc++.h>
using namespace std;

class Animal {
    
    public:
    void eat() {
        cout<< "I can eat" << endl; 
    }
    
    void sleep() {
        cout<< "I can sleep" <<endl;
    }
    
};

class Dog : public Animal {

    public: 
    void bark() {
        cout<< "I can bark ! woof woof" <<endl;
    }
};

 
int main()
{   
     
     Dog d;
     d.eat();
     d.sleep();
    d.bark();
 
    return 0;
} */
/* 
#include<bits/stdc++.h>
using namespace std;

class Distance {

    private:
        int feet;
        float inches;

    public:
        void set_dist(int ft, float inc) {
            feet = ft;
            inches  = inc;
        }

        void get_dist() {
            cout<<"Enter feet: "; cin>> feet;
            cout << "Enter inches: "; cin>> inches;
        }

        void show_dist() {
            cout << feet << "\'-" << inches << '\"';
        }
};

int main()
{

    Distance dist1, dist2;

    dist1.set_dist(11, 6.23); /// 
    dist2.get_dist();

    cout<< "\nDist1 = "; dist1.show_dist  ();
    cout<< "\nDist2 = "; dist2.show_dist();

 

    return 0;
}
 */

 /*  
#include<bits/stdc++.h>
using namespace std;
 
 
class Employee {
    protected:  
        string name;
    private:
        string company;
        int age;

    public:

    void set_name(string nam) {
        name = nam;
    }

    string get_name() {
        return name;
    }
        
    void Introduce_yourself() {
        cout<< "Name: " <<name << endl;
        cout<< "Campany: " << company << endl;
        cout<< "Age: " << age << endl;
    }

    // constactor... .. 
    Employee(string nam, string cmp, int ag) {
        name= nam;
        company=  cmp;
        age = ag;
    }
    
};

class Devoloper : public Employee {
    public:
        string ProgrammingLanguage;
        Devoloper(string nam, string cmp, int ag, string language) 
        :Employee(nam, cmp, ag)
        {
            ProgrammingLanguage = language;
        }

        void fixBug() {
            cout<< get_name() << " fix bug using " << ProgrammingLanguage << endl;
        }
};


class Teacher : public Employee {
    public:
    string Subject;
    void Prepare_lesson() {
        cout<< name << " is preparing " << Subject <<" lesson" <<endl;

    }

    Teacher(string nam, string cmp, int ag, string sub);

};

int main()
{

    //  Employee emp1 = Employee("Saldina", "YT_CodeBeatuy", 23);
    //  Employee emp2 = Employee("John", "Amazon", 32);
    // emp1.Introduce_yourself();
    // emp2.Introduce_yourself();

    // emp1.set_name("HeolloL");

    Devoloper d = Devoloper("Saldina Nurag", "YT_codeBeauty", 24, "Python");
    d.fixBug();
      
 
    return 0;
}   */
/* 

#include<bits/stdc++.h>
using namespace std;

class CalutateArea {
    private:
        double length, height, breath;

    public:
        void set_data(double len, double brth, double hgt) {
            length = len;  
            breath = brth;
            height = hgt;
        }

        void get_data() {
            cout<<"Enter the lenght: "; cin>> length;
            cout<< "Enter the breath: "; cin>> breath;
            cout<< "Enter the height: "; cin>> height;
        }

        double calcutlate_area() {
            return length * breath;
        }

        double calculate_volume() {
            return length * breath * height;
        }

        void show_deatails() {
             cout<< "Area of home: " << calcutlate_area() << endl;
            cout<< "Volume : " << calculate_volume() << endl;
        }
};

int main()
{

    CalutateArea area, arr, d;
    //area.set_data(42.5, 30.8, 19.2);
    area.get_data();
    area.show_deatails();
    arr.get_data();
    // cout<< "Area of home: "<<area.calcutlate_area() << endl;
    // cout<< "Volume : " << area.calculate_volume() << endl;
    
    
    arr.show_deatails();
    d.set_data(5.5, 1.2, 4.4);
    d.show_deatails();
    // d.set_data(1, 1, 1);
    // d.show_deatails();

    return 0;
} */

/// simple calculator;;
/* /* 
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

class Calculator {

    public:
        int choose, num1, num2,  res;

        void menu_list() {
            cout<<"****Please Choose an Option****";
            cout << endl<< "Enter 1.Addition";
            cout<< endl << "Enter 2.Subtraction.";
            cout<< endl << "Enter 3.Multiplication.";
            cout<< endl << "Enter 4.Division.";
            cout<<endl << "Enter 0.Exit.";

            cout<<endl <<endl << "Choose the options: ";
            cin>> choose;
        }

        void input() {
            cout <<"Enter two numbers: ";
            cin>> num1 >> num2;
        }

        void calculate() {
            switch(choose) {
                case 1:
                    res = num1+num2;
                    cout<< "Addition of " << num1 << " and " << num2 << " = " << res << endl;
                    break;

                case 2:
                    res = num1-num2;
                    cout<< "Subtraction of " << num1 << " and " << num2 << " = "<< res << endl;
                    break;
                
                case 3:
                    res = num1 * num2;
                     cout<< "Multiplication of " << num1 << " and " << num2 << " = " << res << endl;
                    break;
                
                case 4:
                     if(num2==0){
                        cout<< "Opps invalid input" << endl;
                     }
                     else {
                        res = num1 / num2;
                         cout<< "Division of " << num1 << " and " << num2 << " = " << res << endl;

                     }

                default:
                    break;
            }
        }
};  

int main()
{
    do {
    
     Calculator cal;
    cal.menu_list();
    cal.input();
    cal.calculate();

    } while(true);

  
    return 0;
}
 */
/* 

#include<bits/stdc++.h>
using namespace std;
 
class Solve {
    public:
        int num;

    void intput() {
        cout<< "Enter the number: ";
        cin>>num;
    }

    void is_even_odd() {
        if(num&1) 
            cout<< "odd" << endl;
        else cout<< "Even" << endl;
    }
};


int main() 
{   
    
    do {

        Solve s;
        s.intput();
        s.is_even_odd();
    
    } while(true);
 
    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;

class Solve {
    public:
        void print_info() {
            cout << "I am Anisul islam" << endl;
        }
};

int main()
{

    int n; cin>>n;
    Solve s[n];

    for(int i=0; i<n; i++) 
        s[i].print_info();



    return 0;
} */

/* 
#include <iostream>
#include <string>

using namespace std;

class Student
{
	string name;
	int marks;
	public:
		void getName()
		{
			getline( cin, name );
		}
		void getMarks()
		{
			cin >> marks;
		}
		void displayInfo()
		{
			cout << "Name : " << name << endl;
			cout << "Marks : " << marks << endl;
		}
};

int main()
{
	Student st[5];
	for( int i=0; i<5; i++ )
	{
		cout << "Student " << i + 1 << endl;
		cout << "Enter name" << endl;
		st[i].getName();
		cout << "Enter marks" << endl;
		st[i].getMarks();
	}

	for( int i=0; i<5; i++ )
	{
		cout << "Student " << i + 1 << endl;
		st[i].displayInfo();
	}
	return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;

// using in-line function..
  
class Leacture {
    public:
        int n1, n2;

     void input() {
        cout<< "Enter two numbers: ";
        cin>> n1 >> n2;
     }

     void calculate() {
        int res = n1 + n2;
        cout<< "Sum = " << res<< endl;
     }
};  


class Lecture {

    public:
        int n1, n2;

        void input();
        void calculate();
};

// out-line function
void Lecture :: input() {
    cout<< "Enter the two numbers: ";
    cin>>n1 >> n2;
}

void Lecture :: calculate() {
    int res = n1 + n2;
    cout<<"Sum is: " << res <<endl;
}

int main()
{
    Lecture lec;
    lec.input();
    lec.calculate();  
 
    return 0;
} */ 


/* 
#include<bits/stdc++.h>
using namespace std;

class Disester {

    private:
        string name = "Md Anisul islam";
        friend void display(Disester &dis);

    
};

void display(Disester &dis) {
    //dis.name;
    cout<< "my name is: "<< dis.name;
}

int main()
{   

    Disester d;
    display(d);
 
    return 0;
}  
 */
 
/* 
#include<bits/stdc++.h>
using namespace std;

class Employee {

    private:
        string name, company;
        int age;

    public:
        
        void set_name(string nam) {  // setter method..
            name = nam;
        }

        string get_name() {        // getter method
            return name;
        }

        void set_company(string comp) {
            company = comp;
        }

        string get_company() {
            return company;
        }

        void set_age(int ag) {
            
            if(ag >= 18) 
                age= ag;
        }

        int get_age() {
            return age;
        }

        void Introduce_yourself() {
            cout<< "Name: " << name << endl;
            cout<< "Companay: " << company <<endl;
            cout<< "Age: " << age <<endl;
        }

        // constructor
       Employee (string nam, string comp, int ag) {
            name = nam;
            company = comp;
            age = ag;
       }

};


int main()
{       
    Employee employee1 = Employee("Saldina Nurag", "Amazon", 25);
    employee1.Introduce_yourself();
    Employee employee2 = Employee("Anisul Islam", "Google", 20);
    employee2.Introduce_yourself();
    
    employee1.set_age(15);
    cout<< employee1.get_name() <<" is " << employee1.get_age() << " years old" << endl;



    return 0;
} 
 */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int

class Student {

    public:
        string name, clss, group;
        int roll, age, marks;

        void Introduce_yourself() {
            
            cout<<"Name: " << name << endl;
            cout<<"Class: " << clss << endl;
            cout << "Group: "  << group << endl;
            cout<< "Roll: " << roll << endl;
            cout<< "Age: " << age << endl;
            cout<< "Marks: " << marks <<endl;

        }

        // create constructor

        Student (string nam, string cls, string grup, int rll, int ag, int mrks) {
            name = nam; clss = cls; group = grup;
            roll = rll; age = ag; marks = mrks;
             
        }
};

int main()
{
    Student st1 = Student("anis", "Teen", "Science", 50, 15, 90);
    st1.Introduce_yourself();
    std:: cout<< endl;

    Student st2 = Student("Jisa", "Eleven", "Arts", 34, 18, 88);
    st2.Introduce_yourself();
 

    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;
 
class Calculate {

        public:
        int n1, n2;

        // constructor
        Calculate(int x, int y) {
            n1 = x;
            n2 = y;
        }

        void sum() {
            cout<< n1+ n2 << endl;
        }
};


int main()
{   

    Calculate  cal = Calculate(14, 5);
    cal.sum();
 

    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;

class Tutorial {

    public:
        int width, len;
        Tutorial(int x, int y) {
            width = x,
            len = y;
        }

        int show_result() {
            return width * len;
        }
};

int main()
{

    Tutorial ara1(10, 30), arr(30, 50);
    cout <<ara1.show_result() <<endl;

    cout<< arr.show_result() << endl;
 
    return 0;
} */
 
/* 
#include<bits/stdc++.h>
using namespace std;

class Person {
    public:
        string name;
        int age, height, weight;

        void show_info() {
            cout<<"Name: " << name << endl;
            cout<<"Age: " << age <<endl;
            cout<< "Height: " << height << " feet"<< endl;
            cout<< "Weight: " << weight<< " kg" << endl;

        }

        // constructor
        Person(string nam, int ag, int hgt, int wgt) {
            name = nam;
            age = ag; height = hgt; weight = wgt;
        }

};

class Student:public Person {
    public:
        string subject;
        int roll, marks;

        Student(string nam, int ag, int hgt, int wgt, string subj, int rll, int mrks)
         : Person(nam, ag, hgt, wgt) {
            subject = subj; roll= rll; marks = mrks;
        }

        void more_show() {
            cout<< name << " is like to read "<< subject << " a lot" << endl;

        }
};

class Teacher : public Person {
    public:
        string Department;
        Teacher(string nam, int ag, int hgt, int wgt, string dept) 
        : Person(nam, ag, hgt, wgt) {
            Department = dept;
        }

        void TeacherInfo() {
            cout<< name <<" is a " << Department << " department head" << endl;
        }
};

int main()
{
    Person p = Person("Anisul islam", 20, 6, 60);
      p.show_info();
      cout<< endl;
    Student st = Student("Akram", 23, 5, 70, "English", 1001, 70);
    st.show_info();
    st.more_show();
    cout<< endl;

    // Teacher
    Teacher t = Teacher("Jillur Rahman", 35, 5,72, "Higher Math");
    t.show_info();
    t.TeacherInfo();

    return 0;
}  
 */

/* 
#include<bits/stdc++.h>
using namespace std;
 
 
class Employee {
    protected:  
        string name;
    private:
        string company;
        int age;

    public:

    void set_name(string nam) {
        name = nam;
    }

    string get_name() {
        return name;
    }
        
    void Introduce_yourself() {
        cout<< "Name: " <<name << endl;
        cout<< "Campany: " << company << endl;
        cout<< "Age: " << age << endl;
    }

    // constactor... .. 
    Employee(string nam, string cmp, int ag) {
        name= nam;
        company=  cmp;
        age = ag;
    }
    
};

class Devoloper : public Employee {
    public:
        string ProgrammingLanguage;
        Devoloper(string nam, string cmp, int ag, string language) 
        :Employee(nam, cmp, ag)
        {
            ProgrammingLanguage = language;
        }

        void fixBug() {
            cout<< get_name() << " fix bug using " << ProgrammingLanguage << endl;
        }
};


class Teacher : public Employee {
    public:
    string Subject;
    void Prepare_lesson() {
        cout<< name << " is preparing " << Subject <<" lesson" <<endl;

    }

    Teacher(string nam, string cmp, int ag, string sub);

};

int main()
{

    //  Employee emp1 = Employee("Saldina", "YT_CodeBeatuy", 23);
    //  Employee emp2 = Employee("John", "Amazon", 32);
    // emp1.Introduce_yourself();
    // emp2.Introduce_yourself();

    // emp1.set_name("HeolloL");

    Devoloper d = Devoloper("Saldina Nurag", "YT_codeBeauty", 24, "Python");
    d.fixBug();
       
    return 0;
}  */

/* 
#include<bits/stdc++.h>
using namespace std;

class Car {
    public:
        string brand, model;
        int year;
        Car(string x, string y, int z); // construtor init9ilize

        void print_info();
    
};

// outline constructor
Car :: Car(string x, string y, int z) {
    brand = x;
    model = y;
    year = z;
}

// outline function 

 void Car:: print_info() {
    cout<< "Brand: " << brand << endl;
    cout<< "Model: " << model << endl;
    cout<< "Year: " << year << endl;
}

int main()
{   
    Car car1 = Car("BMW", "x5", 1999);
    Car car2 =  Car("Frod", "Mustrang", 1969);

    car1.print_info();
    car2.print_info();


    return 0;
} */
 
/* 
#include<bits/stdc++.h>
using namespace std;

class Math {
    private:
        int num1, num2;

    public:
        void input();
        void calculate();
        int solve(int x, int y);
};

void Math :: input() {
    cout<< "Enter the two number: " ;
    cin>> num1 >> num2;
}

void Math :: calculate() {
    int result = num1+num2;
    cout << result << endl;
}

int Math :: solve(int x, int y) {
    return x+y;
}


int main()
{
    Math m;
    m.input();
    m.calculate();

    cout<< m.solve(4, 10);
 
    return 0;
}
  */
    /* 
#include<bits/stdc++.h>
using namespace std;

class Phone {
    private:
        string brand, model;
        int price, year;
    public:
        void input();
        void print_info();
};


void Phone :: input() {
     
    cout<< "Enter the brand: " <<endl;
    cin>> brand;
    cout<< "Enter the model: " << endl;
    cin>> model;

    cout<< "Enter the  price: "<< endl;
    cin>> price;
    cout<< "Enter the year: " << endl;
    cin>> year;

}

void Phone :: print_info() {
    cout<< "Brand: " << brand << endl;
    cout<< "MOdel: " << model << endl;
    cout<< "Price : " << price << " $" << endl;
    cout<< "Year: " << year << endl;
}

int main()
{   
    int n;
    cout<< "How man you want: ";
    cin>> n;

    Phone phone[n];
    for(int i=0; i<n; i++) {
        phone->input();
        phone->print_info();
    }

    return 0;
} */

 /* 
#include<bits/stdc++.h>
using namespace std;

class Mydrive {
    int a, b;
    public:
    friend int sum(Mydrive x);
    void set_ab(int i, int j);
        
};

void Mydrive :: set_ab(int i, int j) {
    a = i;
    b = j;
}

int sum(Mydrive x) {
    return x.a  + x.b;
}

int main()
{
    Mydrive n, m;
    n.set_ab(3, 4);
    m.set_ab(10, 5);
    cout<< sum(n) << endl;
    cout<< sum(m);

    return 0;
} */
/* 
#include <iostream>
using namespace std;
#define SIZE 100
// This creates the class stack.
class stack {
int stck[SIZE];
int tos;
public:
void init();
void push(int i);
int pop();
};
void stack::init()
{
tos = 0;
}
void stack::push(int i)
{
if(tos==SIZE) {
cout << "Stack is full.\n";
return;
}
stck[tos] = i;
tos++;
}
int stack::pop()
{
if(tos==0) {
cout << "Stack underflow.\n";
return 0;
}
tos--;
 
return stck[tos];
}
int main()
{
stack stack1, stack2; // create two stack objects
stack1.init();
stack2.init();
stack1.push(1);
stack2.push(2);
stack1.push(3);
stack2.push(4);
cout << stack1.pop() << " ";
cout << stack1.pop() << " ";
cout << stack2.pop() << " ";
cout << stack2.pop() << "\n";
return 0;
}
  */
/* 
 #include<bits/stdc++.h>
 using namespace std;

class Building {
    int rooms, floors, area;
    public:
        void set_rooms(int num);
        int get_rooms();
        void set_floors(int num);
        int get_floors();
        void set_area(int num);
        int get_area();

};

class House : public Building {
    int bedrooms, baths;
    public: 
        void set_bedrooms(int num);
        int get_bedrooms();
        void set_baths(int num);
        int get_baths();

};

class School : public Building {
    int classrooms, offices;
    public:
        void set_classrooms(int num);
        int get_classrooms();
        void set_office(int num);
        int get_office();
};

void Building :: set_rooms(int num) {
    rooms = num;
}

void Building :: set_floors(int num) {
    floors = num;
}

void Building :: set_area(int num) {
    area = num;
}

int Building ::get_rooms() {
    return rooms;
}

int Building :: get_floors() {
    return floors;
}

int Building :: get_area() {
    return area;
}

 int main()
 {
    House house;
    house.set_rooms(15);
    house.set_floors(50);
    house.set_area(1600);

    cout<< "****House Information****" << endl;
    cout << house.get_rooms() << endl;
    cout << house.get_floors() << endl;
    cout << house.get_area() << endl;
 
    return 0;
 } */
/* 
#include<bits/stdc++.h>
using namespace std;

class Employee {
    char name[80];
    public:
        void set_name(char *n);
        void get_name(char *n);
    private:
        double wage;
    public:
        void set_wage(double w);
        double get_wage();

};

void Employee :: set_name(char *n) {
    strcpy(name, n);
}

void Employee :: get_name(char *n) {
    strcpy(name, n);
}

void Employee :: set_wage(double w) {
    wage = w;
}

double Employee :: get_wage() {
    return wage;
}


int main()
{
    Employee em;
    char name[80];
    em.set_name("Ted Joned");
    em.set_wage(560974);
    em.get_name(name);
     
    cout<< em.get_wage() << " per year" << endl;
 

    return 0;
}

/*  

*/
/* 
#include<bits/stdc++.h>
using namespace std;

inline int max(int a, int b) {
    return a > b ? a : b;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0); cout.tie(0);

    cout<< max(10, 30)  << endl;
 
    return 0;


int solution :: calculate() {
    return 
}}   */


/* 
#include<bits/stdc++.h>
using namespace std;

class solution {
    int a, b;
    public:
        void init(int i, int j);
        void show();
        int calculate();
};

 
void solution :: init(int i, int j) {
    a = i;
    b = j;
}


int solution :: calculate() {
    return a + b;
}

void solution :: show() {
    cout<<  a<< " " << b << "\n";
}

int main()
{
    solution s;
    s.init(10, 30);
    s.show();

    cout<< s.calculate() << endl;

    return 0;
} */
 
/* 
#include<bits/stdc++.h>
using namespace std;
 
void print_freeq(const string &str) {
    unordered_map<string , int> m;
    stringstream s(str);
    string word;

    while(s >> word) 
        m[word]++;

    for(auto it = m.begin(); it != m.end(); it++) 
        cout<< "(" << it->first <<", " << it->second<< ")" << endl;
     
}

int main()
{    
  
    string str = "geeks for geeks geeks quiz "
                 "practice qa for";


    print_freeq(str);

 
    return 0;
} */ 


 /* #include<bits/stdc++.h> 
using namespace std;

void print_word(const string &str) {
    unordered_map<string, int> um;
    stringstream s(str);
    string w;
    while(s >> w) 
        um[w]++;
    
    for(auto ans : um) 
        cout << "(" << ans.first << ", " << ans.second <<")" << endl;
}

int main()
{     
    string str; getline(cin, str);
    print_word(str);
   
    return 0;
} 
 
  */
 

 #include<bits/stdc++.h>    
 using namespace std;

class rest {
    private:
        int total_tax;
    public:
        int item_code[12];
        string item_name[12];
        int item_price[12];

        rest(int item_code[],string item_name[], int item_price[]);

};


rest :: rest(int item_code[],string item_name[], int item_price[]) {
   
   this->item_code[] = item_code[];
   this->item_name[] = item_name[;
   this->item_price[] = item_price[];
}

int main()
{   
    





    return 0;
}