/* #include<bits/stdc++.h> 
using namespace std;

bool isUglyNumber(int num) {
    if(num <=  0) return false;

    while(num % 2 == 0) num /= 2;
    while(num % 3 == 0) num /= 3;
    while(num % 5 == 0) num /= 5;

    if(num == 1) return true;
    else return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    cin >> num;

    if(isUglyNumber(num)) 
        cout << "true" << endl;
    else cout << "false" << endl;

    return 0;
} 
  */
/* 
// C++ program to check if three sides form a triangle or not
#include <bits/stdc++.h>
using namespace std;

// function to check if three sider form a triangle or not
bool checkValidity(int a, int b, int c)
{
	// check condition
	if (a + b <= c || a + c <= b || b + c <= a)
		return false;
	else
		return true;
}

// Driver function
int main()
{
	int a = 7, b = 10, c = 5;
	if (checkValidity(a, b, c))
		cout << "Valid";
	else
		cout << "Invalid";
}

// This code is contributed by Aditya Kumar (adityakumar129)


// C++ program to demonstrate inheritance

#include <iostream>
using namespace std;

// base class
class Animal {

   public:
    void eat() {
        cout << "I can eat!" << endl;
    }

    void sleep() {
        cout << "I can sleep!" << endl;
    }
};

// derived class
class Dog : public Animal {
 
   public:
    void bark() {
        cout << "I can bark! Woof woof!!" << endl;
    }
};

int main() {
    // Create object of the Dog class
    Dog dog1;

    // Calling members of the base class
    dog1.eat();
    dog1.sleep();

    // Calling member of the derived class
    dog1.bark();

    return 0;
} */
 
/* 
#include<bits/stdc++.h>
using namespace std;

void count_sort(int arr[], int n) {
    int output[n+1], max= INT_MIN;
    
    for(int i=0; i<n; i++) {
         if(arr[i] > max)
            max = arr[i];
    }
       
    
    int fr[max+1] = {0};
    for(int i=0; i<n; i++) 
        fr[arr[i]]++;
        
    for(int i=1; i<= max; i++) 
        fr[i] += fr[i-1];
    
    for(int i= n-1; i>=0; i--) {
        fr[arr[i]]--;
        output[fr[arr[i]]] = arr[i];
    }

    for(int i=0; i<n; i++)
        arr[i] = output[i];

}


void print_arr(int arr[], int n)  {
    for(int i=0; i<n; i++) 
        cout << arr[i] <<" ";
    cout<< endl;
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) 
        cin>> arr[i];

    count_sort(arr,n);
    print_arr(arr,n);
 
    return 0;

} */

 

 /* 
#include<bits/stdc++.h>
using namespace std;

void count_sort(int arr[], int n) {

    int output[n+1],  mx=INT_MIN;

    for(int i=0; i<n; i++) 
        if(arr[i]> mx) 
            mx= arr[i];
        
    //memset(count, 0, sizeof(count));
    // for(int i=0; i<=mx; i++) 
    //     count[i] = 0;


    
     int count[mx+1] = {0};
   
    for(int i=0; i<n; i++) 
        count[arr[i]]++;
    

    // accumulate sum...
    for(int i=1; i<=mx; i++) 
        count[i] += count[i-1];
    
    for(int i=n-1; i>=0; i--) {
        output[count[arr[i]]-1] = arr[i];
        count[arr[i]]--;
    }

    for(int i=0; i<n; i++) 
        arr[i] = output[i];

}

void print_arr(int arr[], int n) {
    for(int i=0; i<n; i++) 
        cout<<arr[i] <<" ";
    cout<< endl;
}

int main()
{

    // int arr[] =  {2, 5, 2, 8, 1, 4, 1};
    // int n = sizeof(arr)/sizeof(arr[0]);

    int n ; cin>>n;
    int arr[n] ;
    for(int i=0; i<n; i++) 
        cin>> arr[i];

    count_sort(arr,n);
    print_arr(arr,n);
 

    return 0;
} */



/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solution() {
    stack<char> st;
    string s; cin>> s;

    for(auto str : s) {
        if(str == '(' or str=='{' or str=='[')  
            st.push(str);
        
        if(!st.empty()) {
            if(str==')' and st.top() =='(') 
                st.pop();
            
            if(str=='}' and st.top() == '{') 
                st.pop();
            if(str==']' and st.top() == '[') 
                st.pop();
        }

        else 
            st.push(str);
    }

    (st.empty()) ? cout <<"Yes\n" : cout<< "No\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solution();
 

    return 0;
} */
/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solution() {
    stack<int> st;
    string s; cin >> s;
    
    for(auto str : s) {
        if(str =='(' or str=='{' or str=='[') 
            st.push(str);

        if(!st.empty()) {
            if(str==')' and st.top() =='(') 
                st.pop();
            if(str=='}' and st.top() =='{')
                st.pop();
            if(str==']' and st.top() == '[')
                st.pop();
        }
        else 
            st.push(str);
    }

    (st.empty()) ? cout<<"Balanced\n" : cout<< "Not balanced\n";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solution();
 

    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
 
int find_freq(queue<int> &q, int k) {
    queue<int> temp = q;
    int count = 0;
    while(!temp.empty()) {
        if(temp.front() == k)  
            count++;
        temp.pop();
    }

    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    queue<int> q;
    int n; cin >> n;
    for(int i=0; i<n; i++) {
        int d; cin >> d;
        q.push(d);
    }

    int m; cin>> m;
    for(int i=0; i<m; i++) {
        int d; cin >> d;
        int  ans = find_freq(q, d);
        (ans != 0 ) ? cout<<ans<< endl : cout<< -1 << endl;
    }
 
    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void print_stack(stack<int> &st) {
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

stack<int> sort(stack<int> &st) {
    stack<int> temp;
    while(!st.empty()) {
        int x = st.top();
        st.pop();

        while(!temp.empty() && temp.top() < x) {
            st.push(temp.top());
            temp.pop();
    }
    temp.push(x);
}

    return temp;
  
}

int main()
{
 
  ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    stack<int> st;
    int n; cin>> n;
    for(int i=0; i<n; i++) {
        int data; cin>> data;
        st.push(data);
    }


    print_stack(st);
 
    return 0;
}
 */


#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


int main() 
{






    return 0;
}