  /* #include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solution() {
    stack<char> st;
    string s; cin >> s;

    for(auto str : s) {
        if(str=='(' or str=='{' or str=='[') 
            st.push(str);
 
        if(!st.empty()) {
            if(str==')' and st.top()=='(') 
                st.pop();
            
            if(str=='}' and st.top() =='{') 
                st.pop();
            if(str==']' and st.top()=='[')
                st.pop();
        }

        else 
            st.push(str);
    }

    (st.empty()) ? cout<<"Yes\n" : cout<< "No\n";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solution();
 
    return 0;
}  
 */

 /* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solution() {
    stack<char> st;
    string s; cin>> s;

    for(auto str : s) {
        if(str =='(' or str=='{' or str=='[')  
            st.push(str);
        
        if(!st.empty()) {
            if(str==')' and st.top()=='(') 
                st.pop();
            
            if(str=='}' and st.top() =='{')
                st.pop();
            
            if(str==']' and st.top()=='[') 
                st.pop();
        }

        else 
            st.push(str);
        
    }

    (st.empty()) ? cout<< "Balanced\n" : cout<< "Not balanced\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solution();
 

    return 0;
}   */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void insert(queue<int> &q, int k) {
    q.push(k);
}

int find_freq(queue<int> &q, int k) {
    int n=q.size(), freq = 0;
    for(int i=0; i<n; i++) {
        if(q.front() == k)
            freq++;
        q.pop();
        q.push(q.front());
    }

    return freq>0 ? freq : -1;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    queue<int> q;
    int n, k; cin>> n;

    for(int i=0; i<n; i++) {
        cin >> k;
        insert(q,k);
    }

    int m; cin>> m;
    for(int i=0; i<m; i++) {
        cin >> k;
        int ans = find_freq(q, k);

        (ans != 0) ? cout<< ans<< endl : cout << -1 << endl;
    }

 
    return 0;
} */
 

 /* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void insert(queue<int> &q, int k) {
    q.push(k);
}

int find_freq(queue<int> &q, int k) {
    queue<int> p=q;
    int count = 0;
    while(!p.empty()) {
        if(p.front()== k)   
            count++;
        p.pop();
         
    }

    return count;
     
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    queue<int> q;
    int n, k; cin>> n;

    for(int i=0; i<n; i++) {
        cin >> k;
        insert(q,k);
    }

    int m; cin>> m;
    for(int i=0; i<m; i++) {
        cin >> k;
        int ans = find_freq(q, k);

        (ans != 0) ? cout<< ans<< endl : cout << -1 << endl;
    }

 
    return 0;
}  
 */

/* 
 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

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
 

    stack<int> ans = sort(st);
    while(!ans.empty()) {
        cout<< ans.top() << " ";
        ans.pop();
    }

 
    return 0;
}
  */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void sort(stack<int> &st) {
    set<int> set;
    while(!st.empty()) {
        set.insert(st.top());
        st.pop();
    }

    for(auto i : set)
        st.push(i);

}


void print_stack(stack<int> &st) {
    while(!st.empty()) {
        cout<< st.top() <<" ";
        st.pop();
    }

    cout << endl;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    stack<int> st;
    int n; cin>>n;
    for(int i=0; i<n; i++) {
        int d; cin>> d;
        st.push(d);
    }


    sort(st);
    print_stack(st);
 
    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void print_queue(queue<int> &q) {
    while(!q.empty()) {
        cout << q.front() <<" ";
        q.pop();
    }

    cout << endl;
}

void reverseQueue(queue<int> &q) {
    stack<int> st;
    while(!q.empty()) {
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()) {
        q.push(st.top());
        st.pop();
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int test; cin>> test;
    while(test--)  {
            
        queue<int> q;
        int n; cin>>n;
        for(int i=0; i<n; i++) {
            int d; cin>>d;
            q.push(d);
        }

        reverseQueue(q);
        print_queue(q);
        
    }

 
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
    int n, k; cin>> n;

    for(int i=0; i<n; i++) {
        cin >> k;
        q.push(k);
    }

    int m; cin>> m;
    for(int i=0; i<m; i++) {
        cin >> k;
        int ans = find_freq(q, k);

        (ans != 0) ? cout<< ans<< endl : cout << -1 << endl;
    }

 
    return 0;
}  
 
 */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

string to_binary(int n) {
    string ans;
    while(n > 0)  {
        int temp = n %2;
        ans += to_string(temp);
        n/=2;
    }

    reverse(ans.begin(), ans.end());
    return ans;
}


vector<string> solution(int n) {
    vector<string> ans;
    for(int i=1; i<=n; i++) {
        ans.push_back(to_binary(i));
    }

    return ans;
}

void print_arr(vector<string> &arr) {
    for(auto x : arr) 
        cout<< x <<" ";
    cout << endl;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int test; cin >> test;
    
    while(test--) {
          
        int n; cin>> n;
        vector<string> ans = solution(n);
    print_arr(ans);

 
    }

    return 0;
}  
 */


/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

string reverse_string(string s) {
    string ans;
    stack<char> st;
    for(auto str : s) {
        if(str =='.') {
            while(!st.empty()) {
                ans += st.top();
                st.pop();
            }
            ans += '.';
            continue;
        }
        st.push(str);
    }

    while(!st.empty()) {
        ans += st.top();
        st.pop();
    }

    return ans;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    int test; cin>> test;

    while(test--) {
        string str; cin>> str;
        string ans = reverse_string(str);
        cout << "Reverse: " << ans << endl;
    }
   
 

    return 0;
} */


// another way...
/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


string reverse_str(string s) {
    string res;
    stack<char> st;

    for(auto str : s) {
        if(str =='.') {
            while(!st.empty()) {
                res += st.top();
                st.pop();
            }

            res += '.';
        }

        else 
            st.push(str);
    }

    while(!st.empty()) {
        res += st.top();
        st.pop();
    }

    return res;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    int test; cin>> test;
    while(test--) {
        string str, ans; cin >> str;
        ans = reverse_str(str);
        cout << "Final string: " << ans << endl;
    }
  

    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

stack<int> push_element(int arr[], int n) {
    stack<int> st;
    int mini = arr[0];
    st.push(mini);

    for(int i=1; i<n; i++) {
        mini = min(mini, arr[i]);
        st.push(mini);
    }

    return st;
}

void find_min(stack<int> &st) {
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

   
    int test; cin >> test;
    while(test--) {
        int n; cin >> n; 
        int arr[n+2];
        for(int i=0; i<n; i++) 
            cin >> arr[i];

         stack<int> st = push_element(arr,n);
         find_min(st);

    }
    
    
    return 0;
} */



/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int frist_unique(string s) {
    unordered_map<char, int> mp;
    for(char ch : s) {
        mp[ch]++;
    }

    for(int i=0; i<s.length(); i++) {
        if(mp[s[i]] == 1) 
            return i;
    }

    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string str; cin>> str;
    cout << frist_unique(str) << endl;



    return 0;
} 

*/
/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

int find_unique(string str) {
    vector<int> count(26,0);
    for(char ch : str) 
        count[ch-'a']++;
    
    for(int i=0; i<str.length(); i++) {
        if(count[str[i]-'a'] == 1) 
            return i;
    }

    return -1;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string str; cin >> str;
    int ans = find_unique(str);
    cout << ans <<endl;
 
    return 0;
}
  */ 
  
// reverse the k element...


// ==============================================
//         second practice day... 
// ==============================================
  /* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void seive_of_eratosthenes(int n) {
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for(int i=2;  i*i<=n; i++) {
        if(prime[i] == true) {
            for(int j= 2*i; j<=n; j+=i) 
                prime[j] = false;
        }
    }


    for(int i=2; i<=n; i++) 
        if(prime[i] == true)
            cout<< i<<" ";
        cout <<endl;
}

int main() 
{

     
    while(true) {
        int n ; cin>>n;
        seive_of_eratosthenes(n);
        if(n==0) 
            break;
    }

  
    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

bool checker(string s) {
    stack<char> st;
    for(auto str : s) {
        if(str ==')') {
            char top = st.top(); st.pop();
            if(top =='(') 
                return true;
            else {
                while(top != '(') {
                    top = st.top();
                    st.pop();
                }
            }
        }

        else 
            st.push(str);
    }

    return false;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string str; cin>> str;
    
    (checker(str)) ? cout <<"Yes\n" : cout<< "No\n";

 

    return 0;
}   


  */



 // check string palindrome or not....

/* 
 #include<bits/stdc++.h>
 using namespace std;
 #define ll long long int
 #define endl '\n'

bool is_palinedrome(string s) {
        return equal(s.begin(), s.begin()+s.length()/2, s.rbegin());
}

 int main()
 {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int test; cin>> test;
    while(test--) {
        string str; cin>> str;
        (is_palinedrome(str) == true) ? cout << "Yes\n" : cout<<"No\n";


    }
 

    return 0;
 
 } */


 /* 
 #include<bits/stdc++.h>
 using namespace std;
 #define ll long long int
 #define endl '\n'
 
 string rev_string(string &s) {
    stack<char> st;
    for(char str: s) 
        st.push(str);
    
    for(int i=0; i<s.length(); i++) {
        s[i] = st.top();
        st.pop();
    }

    return s;
 }

 int main()
 {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int test; cin>> test;
    while(test--) {
        string str; cin>> str;
        cout << rev_string(str) << endl;
    }
 

    return 0;
 
 } */

 /* 
 #include<bits/stdc++.h>
 using namespace std;
 #define ll long long int
 #define endl '\n'
 
 string rev_string(string &s) {
    stack<char> st;
    for(char str : s) 
        st.push(str);

    int i=0;
    while(!st.empty()) {
        s[i++] = st.top();
        st.pop();
    }

    return s;
 }

 int main()
 {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int test; cin>> test;
    while(test--) {
        string str; cin>> str;
        cout << rev_string(str) << endl;
    }
 

    return 0;
 
 } */


 #include<bits/stdc++.h>
 using namespace std;
 #define endl '\n'

bool is_palindrome(string str) {
    stack<char> st;
    string ans;

    for(char s : str) 
        st.push(s);
    
    while(!st.empty()) {
        ans += st.top();
        st.pop();
    }
 

   return equal(ans.begin(), ans.begin()+ans.length()/2, str.begin());
    //  if(ans == str)
    //     return true;
    // else 
    //     return false;
}

 int main()
 {

    int test; cin>> test;
    while(test--) {
        string str; cin>> str;
        (is_palindrome(str)) ? cout<<"Yes\n" : cout<<"No\n";
    }


    return 0;

 }






int findSecondMinimumValue(TreeNode* root) {
    int first = root->val, second = INT_MAX;
    helper(root, first, second);
    return (second == first || second == INT_MAX) ? -1 : second;
}
void helper(TreeNode* node, int& first, int& second) {
    if (!node) return;
    if (node->val != first && node->val < second) {
        second = node->val;
    }
    helper(node->left, first, second);
    helper(node->right, first, second);
}

