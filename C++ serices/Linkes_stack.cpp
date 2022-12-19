/* #include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void input_arr(int arr[], int n) {
    for(int i=0; i<n; i++) 
        cin>> arr[i];
}

void print_arr(int arr[], int n) {
    for(int i=0; i<n; i++) 
        cout << arr[i] << " ";
    cout << endl;
}

void count_freq(int arr[], int n) {
    int m = 0;
    for(int i=0; i<n; i++) 
        m = max(m, arr[i]);
    
    int freq[m+1] = {0};
    for(int i=0; i<n; i++) 
        freq[arr[i]]++;
    
    for(int i=0; i<m+1; i++) {
        if(freq[i] != 0) 
            cout << i<< " has " << freq[i]  << " times" << endl;
    }
 
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>> n;
    int arr[n];

    input_arr(arr, n);
    print_arr(arr,n);
    count_freq(arr, n);
 
    return 0;
} */

//Question_2:
/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
 

void solve(int arr[], int brr[], int n, int m) {
    int i,j,k;

      for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            if(arr[i] == brr[j]) 
                break;
        }

        if(j==m) {
            cout <<arr[i] <<" ";
        }
    }
}


int main() 
{   
    int i, j, k;
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) 
        cin >> arr[i];
    
    int m; cin>> m;
    int brr[m];
    for(int j=0; j<m; j++) {
        cin >> brr[j];
    }
     
    cout<<"Difference: " << endl;
    solve(arr, brr, n, m);
     
    return 0;
}
 */
/* 
 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int

void solve() {
    int n; cin>> n;
    int arr[n], brr[n];

    for(int i=0; i<n; i++) 
        cin >> arr[i];

    for(int i=0; i<n; i++) {
        cin >> brr[i];
    }


    int pre_arr[n+1];
    pre_arr[0] = arr[0];
    for(int i=1; i<n; i++) 
        pre_arr[i] = pre_arr[i-1]+ arr[i];

    int pre_brr[n+1];
    pre_brr[0] = brr[0];
    for(int i=1; i<n; i++) 
        pre_brr[i] = pre_brr[i-1] + brr[i];


    int ans;
    int q; cin>> q;
    while(q--) {
        int l; cin>> l;
        ans = pre_arr[l] - pre_brr[l];
          //cout << ans << endl;
       
        (ans >= 0) ? cout<< 1 <<" " : cout << 0 << " ";
    } 
    cout << endl;
    
 }
 

int main() 
{   

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t; cin>> t;
    while(t--) {
        solve();
    }
 
    return 0;
}
  */
 

// Question_4:
/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define size 100

// input the matrix...
void input_arr(int arr[][size], int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >>arr[i][j];
        }
    }
}

// print matrix...
void print_matrix(int arr[][size], int n, int m) {
      for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }
}

void solution(int arr[][size], int n, int m) {
    int freq[size] = {0};
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
             //freq[arr[i][j]]++;

            if(freq[arr[i][j]]++ > 0) 
                arr[i][j] = -1;
            else 
                freq[arr[i][j]]++;
        }
 
    }
}

int main()
{
    int arr[size][size], n, m;
    cin >> n >> m;

    input_arr(arr, n,m);
    solution(arr,n, m);
    print_matrix(arr,n, m);
  
    return 0;
} */


// Question_ 6:
 
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

class Node {
    public:
        int value;
        Node *next;
        Node(int data) {
            this->value = data;
            this->next = NULL;
        }
};

class LinkedList {
    Node *head;
    public:
        LinkedList() {
            this->head = NULL;
        }
    
        void insert_at_end(int data);
        void print_list();
        int getLength();
        void replace_element();

};

int LinkedList :: getLength() {
    Node *curr = head;
    int len=0;
    while(curr != nullptr) {
        len++;
        curr = curr->next;
    }

    return len;
} 

// insert at tail...
void LinkedList :: insert_at_end(int data) {
    Node *newNode = new Node(data);
    if(head == nullptr) 
        head = newNode;
    
    else {
        newNode->next = head;
        head = newNode;
    }
}


void LinkedList :: replace_element() {

    Node *curr = head;
    int n = getLength();
    int arr[n];

    int i=0;
    while(curr != nullptr) {
        arr[i++] = curr->value;
         curr = curr->next;
         
    }

    for(int i=0; i<n; i++)   {
        if(arr[i] % 2 == 0) {
            arr[i] = -1;
        }
    }

    for(int i=0; i<n; i++) 
        cout << arr[i] << "->";
    cout << "NULL"<< endl;
     
  
}

// print the list...
void LinkedList :: print_list() {
    Node *curr = head;
    while(curr != nullptr) {
        cout << curr->value << "->";
        curr = curr->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    LinkedList ll = LinkedList();
    int n; cin >> n;
    for(int i=0; i<n; i++) {
        int x; cin>> x;
        ll.insert_at_end(x);
    }
 
    ll.replace_element();
    ll.print_list();
 
    return 0;
}   
   
/* 
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

class Node {
    public:
        int value;
        Node *next;
        Node(int data) {
            this->value = data;
            this->next = NULL;
        }
};

class LinkedList {
    Node *head;
    public:
        LinkedList() {
            this->head = NULL;
        }
    
        void insert_at_end(int data);
        void print_list();
        void replace_element();

};

// insert at tail...
void LinkedList :: insert_at_end(int data) {
    Node *newNode = new Node(data);
    if(head == nullptr) 
        head = newNode;
    
    else {
        newNode->next = head;
        head = newNode;
    }
}

void LinkedList :: replace_element() {
    Node *curr = head;
    while(curr != nullptr) {
        if(!((curr->value) &1)) 
            curr->value = -1;
       
        curr = curr->next;
    }
}

// print the list...
void LinkedList :: print_list() {
    Node *curr = head;
    while(curr != nullptr) {
        cout << curr->value << "->";
        curr = curr->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    LinkedList ll = LinkedList();
    int n; cin >> n;
    for(int i=0; i<n; i++) {
        int x; cin>> x;
        ll.insert_at_end(x);
    }


    ll.replace_element();
    ll.print_list();

 
    return 0;
}  
 */

// Question_7:

 /* 
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

class Node {
    public:
        int value;
        Node *next;
        Node(int data) {
            this->value = data;
            this->next = NULL;
        }
};

class LinkedList {
    public:
         
        void insert_at_end(Node* &head, int data);
        void print_list(Node* &head);
        Node *reverse_kth_node(Node* &head, int k);

};

Node *LinkedList :: reverse_kth_node(Node* &head, int k) {
        Node *prev = NULL, *curr = head, *nextptr;
        int count = 0;

        while(curr!= NULL && count < k) {
            nextptr = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextptr;
            count++;
        }

        if(nextptr != NULL) {
              head->next = reverse_kth_node(nextptr, k);
      
        }
      
      return prev;
}

// insert at tail...
void LinkedList :: insert_at_end( Node* &head, int data) {
      Node *newNode = new Node(data);
    if(head == nullptr) 
        head = newNode;
    
    else {
        Node *curr = head;
        while(curr->next != NULL) 
            curr = curr->next;
        curr->next = newNode;
    }
    
}
  

// print the list...
void LinkedList :: print_list(Node* &head) {
    Node *curr = head;
    while(curr != nullptr) {
        cout << curr->value << "->";
        curr = curr->next;
    }
    cout << "NULL" << endl;
}

int main()
{   
    Node *head = NULL;
    LinkedList ll = LinkedList();
    int n; cin >> n;
    for(int i=0; i<n; i++) {
        int x; cin>> x;
        ll.insert_at_end(head, x);
    }

    //ll.print_list(head);
    
    int k; cin >> k;
    Node *ans = ll.reverse_kth_node(head, k);
    ll.print_list(ans);
   
 
    return 0;
}  

  */


// Question_8:
 /* 
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

class Node {
    public:
        int value;
        Node *next;
        Node(int data) {
            this->value = data;
            this->next = NULL;
        }
};

class LinkedList {
    public:
         
        void insert_at_end(Node* &head, int data);
        void print_list(Node* &head);
        void solution(Node* &head, int m, int n);

};
 

void LinkedList :: solution(Node* &head, int m, int n) {
    Node *curr = head, *prev = head;
    int cm = m, cn = n;
    while(curr != nullptr) {
        if(cm == 0) {
            prev->next = curr->next;
            cn--;
        }
        else {
            prev = curr;
            cm--;
        }

        if(cm == 0 and cn == 0) {
            cn = n;
            cm = m;
        }
        curr = curr->next;
    }
}

// void LinkedList :: solution(Node* &head, int m, int n) {
//     Node *curr = head, *temp = NULL;
//     int i=1;
//     while(curr) {
//         while(i < m) {
//             curr = curr->next;
//             i++;
//         }

//         for(int j=1; j<=n; j++) {
//             temp = curr->next;
//             curr->next = temp->next;
//             free(temp);
//         }
//         i=0;
//         if(curr->next == NULL)
//             return;
//     }
// }

// void LinkedList :: solution(Node* &head, int m, int n) {
//     Node *curr = head, *res;
    
//     while(curr) {
//         for(int i=1; i<m && curr != nullptr; i++) 
//             curr = curr->next;
//         if(curr == nullptr) 
//             return;
//         res = curr->next;
//         for(int i=1; i<=n && res != nullptr; i++) {
//             Node *temp = res;
//             res =res->next;
//             delete(temp);
//         }
//         curr->next = res;
//         curr = res;
//     }
// }

// insert at tail...
void LinkedList :: insert_at_end( Node* &head, int data) {
      Node *newNode = new Node(data);
    if(head == nullptr) 
        head = newNode;
    
    else {
        Node *curr = head;
        while(curr->next != NULL) 
            curr = curr->next;
        curr->next = newNode;
    }
    
}
  

// print the list...
void LinkedList :: print_list(Node* &head) {
    Node *curr = head;
    while(curr != nullptr) {
        cout << curr->value << "->";
        curr = curr->next;
    }
    cout << "NULL" << endl;
}

int main()
{   
    Node *head = NULL;
    LinkedList ll = LinkedList();
    int len, m, n; cin >> len >> m >> n;;
    for(int i=0; i<len; i++) {
        int x; cin>> x;
        ll.insert_at_end(head, x);
    }

    ll.solution(head,m,n);
    ll.print_list(head);
   
 
    return 0;
}   





 */







  
 /* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int

void solve() {
    int n; cin>> n;
    int arr[n], brr[n];

    for(int i=0; i<n; i++) 
        cin >> arr[i];

    for(int i=0; i<n; i++) {
        cin >> brr[i];
    }


    // calculate prefix sum of earns...
    int pre_arr[n+1];
    pre_arr[0] = arr[0];
    for(int i=1; i<n; i++) 
        pre_arr[i] = pre_arr[i-1]+ arr[i];

    // calulate prefix sum of expense..
    int pre_brr[n+1];
    pre_brr[0] = brr[0];
    for(int i=1; i<n; i++) 
        pre_brr[i] = pre_brr[i-1] + brr[i];


    int ans;
    int q; cin>> q;
    while(q--) {
        int l; cin>> l;
        ans = pre_arr[l] - pre_brr[l];
          //cout << ans << endl;
       
        (ans >= 0) ? cout<< 1 <<" " : cout << 0 << " ";
    } 
    cout << endl;
    
 }
 

int main() 
{   

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t; cin>> t;
    while(t--) {
        solve();
    }

 
    return 0;
}
 */

 

 /* 
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
    }
   
    int t=0; // sum
   
    
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    cout<<a[0][j]<<" ";
    
    }
    cout<<endl ;
    }
    // //cout<<t;

    
   // cout<<sum<<endl;
   for(int j=0;j<(n/2);j++){
    cout<<a[0][j]<<" ";
    t+=a[0][j];
    }
    //cout<<sum;
     for(int j=0;j<n;j++){
    if (j==n/2) continue;
    t+=a[n/2][j];
    }
     for(int j=(n/2)+1;j<n;j++){
    t+=a[n-1][j];
    }
    for(int i=0;i<n;i++){
    t+=a[i][n/2];
    }
    for(int i=0;i<n/2;i++){
    t+=a[i][n-1];
    }
    for(int i=(n/2)+1;i<n;i++){
    t+=a[i][0];
    }

    cout<<t;


    return 0;
}
   */

 
 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


int n,l[101],r[101],lft[101],ls;

void solve() {

   cin >> n;
	for(int i=1;i<=n;++i){
		cin>> l[i] >> r[i];
		if(!l[i]) lft[++ls]=i;
	}

	for(int i=1,j;i<ls;++i){
		for(j=lft[i];r[j]!=0;j=r[j]);
		r[j]=lft[i+1];
		l[lft[i+1]]=j;
	}

	for(int i=1;i<=n;++i)
		cout << l[i]<< " " << r[i] << endl;
}


int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
	 
	return 0;
}  


/* 
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

class Node {
    public:
        int value;
        Node *next;
        Node(int data) {
            this->value = data;
            this->next = NULL;
        }
};

class LinkedList {
    public:
         
        void insert_at_end(Node* &head, int data);
        void print_list(Node* &head);
        void solution(Node* &head, int m, int n);

};
 


void LinkedList :: solution(Node* &head, int m, int n) {
       Node *curr = head, *prev = head;
    int cm = m, cn = n;
    while(curr != nullptr) {
        if(cm == 0) {
            prev->next = curr->next;
            cn--;
        }
        else {
            prev = curr;
            cm--;
        }

        if(cm == 0 and cn == 0) {
            cn = n;
            cm = m;
        }
        curr = curr->next;
    }


}
    
// insert at tail...
void LinkedList :: insert_at_end( Node* &head, int data) {
      Node *newNode = new Node(data);
    if(head == nullptr) 
        head = newNode;
    
    else {
        Node *curr = head;
        while(curr->next != NULL) 
            curr = curr->next;
        curr->next = newNode;
    }
    
}
  

// print the list...
void LinkedList :: print_list(Node* &head) {
    Node *curr = head;
    while(curr != nullptr) {
        cout << curr->value << "->";
        curr = curr->next;
    }
    cout << "NULL" << endl;
}

int main()
{   
    Node *head = NULL;
    LinkedList ll = LinkedList();
    int len, m, n; cin >> len >> m >> n;;
    for(int i=0; i<len; i++) {
        int x; cin>> x;
        ll.insert_at_end(head, x);
    }

    ll.solution(head,m,n);
    ll.print_list(head);
   
     return 0;
}    
 */



/* 
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

class Node {
    public:
        int value;
        Node *next;
        Node(int data) {
            this->value = data;
            this->next = NULL;
        }
};

class LinkedList {
    Node *head;
    public:
        LinkedList() {
            this->head = NULL;
        }
    
        void insert_at_end(int data);
        void print_list();
        int getLength();
        void replace_element();

};

int LinkedList :: getLength() {
    Node *curr = head;
    int len=0;
    while(curr != nullptr) {
        len++;
        curr = curr->next;
    }

    return len;
} 

// insert at tail...
void LinkedList :: insert_at_end(int data) {
    Node *newNode = new Node(data);
    if(head == nullptr) 
        head = newNode;
    
    else {
        newNode->next = head;
        head = newNode;
    }
}


void LinkedList :: replace_element() {

    Node *curr = head;
    int n = getLength();
    int arr[n];

    int i=0;
    while(curr != nullptr) {
        arr[i++] = curr->value;
         curr = curr->next;
         
    }

    for(int i=0; i<n; i++)   {
        if(arr[i] % 2 == 0) {
            arr[i] = -1;
        }
    }

    for(int i=0; i<n; i++) 
        cout << arr[i] << "->";
    cout << "NULL"<< endl;
     
}

// print the list...
void LinkedList :: print_list() {
    Node *curr = head;
    while(curr != nullptr) {
        cout << curr->value << "->";
        curr = curr->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    LinkedList ll = LinkedList();
    int n; cin >> n;
    for(int i=0; i<n; i++) {
        int x; cin>> x;
        ll.insert_at_end(x);
    }
 
    ll.replace_element();
    //ll.print_list();

 
    return 0;
}   
 */