/* #include<bits/stdc++.h>
using namespace std;
#define endl '\n'

string removeDuplicate(string str) {
    string ans;
    for(const char ch : str) {
        if(!ans.empty() && ans.back() == ch) 
            ans.pop_back();
        else 
            ans.push_back(ch);
    }

    return ans;
}

// string removeDuplicate(string str) {
//     int n = str.length(), i=0;
//     stack<char> st;

//     while(i<n) {
//         if(st.empty() || st.top() != str[i])
//             st.push(str[i]);
//         else 
//             st.pop();
//         i++;
//     }

//     string ans;
//     while(!st.empty()) {
//         ans += st.top();
//         st.pop();
//     }

//     reverse(ans.begin(), ans.end());
//     return ans;
// }

int main()
{   
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string str; cin>> str;
    string ans = removeDuplicate(str);
    cout<< ans << endl;
 
    return 0;
} */




// ==============
// vector(stl)
// ==============


// #include<bits/stdc++.h>
// using namespace std;

// void print_arr(vector<int> &arr) {
//     cout <<"size of arr:" << arr.size() << endl;
//     for(int i=0; i<arr.size(); ++i) 
//         cout << arr[i] <<" ";
//     cout << endl;
// }
     

// int main()
// {    
//     // pair<int, char> pr(100, 'A');
//     // // pr.first = 100;
//     // // pr.second = 'G';
    
//     // cout << pr.first <<" " << pr.second << endl;

//     // pair<char, int> pr = {'Q', 10};
//     // cout<< pr.first << ' ' << pr.second << endl;


//     // vector<pair<int, string>> arr;  
//     // arr.push_back({1, "Hello"});
//     // arr.push_back({2, "world"});
//     // arr.push_back({3, "more and more"});

//     // for(int i=0; i<arr.size(); i++) 
//     //     cout << arr[i].first <<" " << arr[i].second << endl;

//     vector<int> arr;
//     int n; cin>> n;
//     for(int i=0; i<n; i++)  {
//         int d; cin>> d;
//         print_arr(arr);
//         arr.push_back(d);
//     }

//     print_arr(arr);

//     return 0;
 


// #include<bits/stdc++.h>
// using namespace std;
// #define endl '\n'

// // void print(vector<pair<int, int>> &arr) {
// //     for(int i=0; i<arr.size(); i++) 
// //         cout <<  arr[i].first <<" " << arr[i].second<< endl;
// //     cout << endl;
// // }

// void print_arr(vector<pair<int, int>> &arr) {
//     for(auto const &it : arr) 
//         cout << it.first << " " << it.second << endl;
//     cout << endl;
// }

// int main()
// {

//     // vector<pair<int, int>> arr = {{1, 2}, {2,5}, {3,9}, {4, 10}};

//     // print_arr(arr);

//     // vector<pair<int, int>> arr;
//     // int n; cin>>n;
//     // for (int i=0; i<n; i++) {
//     //     int x, y; cin>> x >> y;
//     //     arr.push_back({x, y});
//     // }

//     // cout << endl;
//     // print_arr(arr);

//     vector<vector<int>> arr;
    

//     return 0;
// }
 /* 

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void print_arr(vector<pair<int, int>> &arr) {
    for(auto const &it : arr) {
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
}

bool comp(const pair<int,int> &a, const pair<int,int> &b) {
    return a.second > b.second;
}

bool comp2(const pair<int, int> &a, const pair<int,int> &b) {
    return a.first > b.first;
}

int main()
{

    vector<pair<int, int>> arr;
    int n; cin >> n;
    for(int i=0; i<n; i++) {
        int x, y; cin>> x >> y;
        arr.push_back({x, y});
    }

//     print_arr(arr);
    
//     sort(arr.begin(), arr.end());
//     print_arr(arr);

    
//    sort(arr.begin(), arr.end(), greater<int, int>());
//     //sort(arr.rbegin(), arr.rend());
//     print_arr(arr);

    sort(arr.begin(), arr.end(), comp);
    print_arr(arr);

    sort(arr.begin(), arr.end(), comp2);
    print_arr(arr);

    return 0;
}

*/

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


string removeDuplicate(string str) {
    stack<char> st;
    for(int i=0; i<str.length(); i++) {
        if(st.empty()) st.push(str[i]);
        else if(str[i] == st.top())
            st.pop();
        else st.push(str[i]);

    }

    string ans;
    while(!st.empty()) {
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{

    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
     
    return 0;
}
 

 */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

string removeAdjacent(string str, int k) {
    stack<pair<char, int>> st;

    for(auto ch: str) {
        if(!st.empty() && st.top().first == ch)
            st.top().second++;
        else 
            st.push({ch, 1});
        
        if(st.top().second == k) 
            st.pop();
    }

    string ans;
    // while(!st.empty()) {
    //     ans += string(st.top().second, st.top().first), st.pop();
    // }
    while(!st.empty()) {
        auto cur = st.top();
        st.pop();
        while(cur.second--) 
            ans.push_back(cur.first);
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
 

    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


string removeDuplicate(string str, int k) {
    vector<pair<char, int >> st;
    for(char ch : str) {
        if (st.empty() || st.back().first != ch) st.emplace_back(ch, 1);
            else if (++st.back().second == k) st.pop_back()
    }

    string ans= "";
    for(auto &x : st) 
        ans += string(x.second, x.first);
    return ans;
}


int main()
{   
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

         
    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

bool isValid(string str) {
    stack<char> st;
    for(auto &ch : str) {
        if(st.empty()) st.push(ch);
        else if((st.top() == '(' && ch == ')') or (st.top() == '{' && ch =='}') or (st.top() == '[' && ch ==']'))
            st.pop();
        else st.push(ch);
    }

    return (st.empty()) ? true : false;
}

int main()
{   
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

 
    return 0;
} */


// online stock span...
/* 
#include<bits/stdc++.h>
using namespace  std;
#define endl '\n'

int next(int price) {
    stack<pair<int, int>> st;
    int span = 1;
    while(!st.empty() && st.top().first <= price) {
       span += st.top().second;
        st.pop();
    }
    
    st.push({price, span});
    return span;
} 

int main()
{   
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
     
 
    return 0;
}

*/


#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    string str; cin >> str;
    int test; cin >> test;
    while(test--) {
        int x, y; cin>> x >> y;
        arr.push_back({x, y});
    }
 

    return 0;
}





 