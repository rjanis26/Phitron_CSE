 /*  #include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int prefix_evaluation(string str) {
    stack<int> st;
    for(int i= str.length()-1; i>=0; i--) {
        if(str[i] >= '0' and str[i] <= '9') {
            st.push(str[i]-'0');
        }
        else {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            
            switch (str[i])
            {
            case '+':
                st.push(a+b);
                break;
            case '-':
                st.push(a-b);
                break;
            case '*':
                st.push(a*b);
                break;
            case '/':
                st.push(a/b);
                break;
            case '^':
                st.push(pow(a,b));
                break;
            
            default:
                break;
            }

        }
    }

    return st.top();
}

int main() 
{
   string str; cin>> str;
   int ans = prefix_evaluation(str);
   cout << ans << endl;
  
    return 0;
}  */

/* 

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

bool isOperant(char c) {
    return isdigit(c);
}

int prefixEvaluation(string str) {
    stack<int> st;
    for(int i = str.length()-1; i>=0; i--) {
        if(isOperant(str[i])) 
            st.push(str[i]-'0');
        
        else {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();

            switch (str[i])
            {
            case '+':
                st.push(a + b);
                break;
            case '-':
                st.push(a - b);
                break;
            case '*':
                st.push(a*b);
                break;
            case '/':
                st.push(a/b);
                break;
          
            default:
                break;
            }
        }
    }

    return st.top();
}

int main()
{
    string str; cin>> str;
    int ans = prefixEvaluation(str);
    cout<< ans << endl;

    return 0;

} */
 /* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int prefixEvaluation(string  str) {
    stack<int> st;
    for(int i=str.length()-1; i>=0; i--) {
        if(str[i] >= '0' && str[i] <= '9') 
            st.push(str[i]-'0');
        
        else {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();

            switch (str[i])
            {
            case '+':
                st.push(a+b);break;
            case '-':
                st.push(a-b); break;
            case '*':
                st.push(a*b); break;
            case '/':
                st.push(a/b); break;
            case '^':
                st.push(pow(a,b)); break;
            
            default:
                break;
            }
        }
    }

    return st.top();
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string str; cin >> str;
    int ans = prefixEvaluation(str);
    cout << "Answer is: " << ans << endl;
 
    return 0;
}
   */
 
 
// infix to prefix conversion...
  
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int precision_calc(char c) {
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;

}

string infix_to_prefix(string str) {

    reverse(str.begin(), str.end());
    stack<char> st;
    string result;

    for(int i=0; i<str.length(); i++) {
         if(str[i] >='0' && str[i] <= '9' || str[i] >= 'a' && str[i]<='z' || str[i]>='A' && str[i]<='Z') 
             result += str[i];
        
        //if(isalpha(str[i]) || isdigit(str[i]))
           
        else if(str[i] == ')') {
            st.push(str[i]);
        }

        else if(str[i] == '(') {
            while(!st.empty() && st.top() != ')') {
                result += st.top();
                st.pop();
            }
            
            if(!st.empty()) {
                st.pop();
            }
        }

        else {
            while(!st.empty() && precision_calc(st.top()) >= str[i]) {
                result += st.top();
                st.pop();
            }
            st.push(str[i]);
        }
    }

    while(!st.empty()) {
        result += st.top();
        st.pop();
    }

    reverse(result.begin(), result.end());
    return result;

}


int prefixEvaluation(string  str) {
    stack<int> st;
    for(int i=str.length()-1; i>=0; i--) {
        //if(str[i] >= '0' && str[i] <= '9' || str[i] >= 'a' && str[i] <='z' || str[i] >= 'A' && str[i]<='Z')
        if(isdigit(str[i])) 
            st.push(str[i]-'0');
        
        else {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();

            switch (str[i])
            {
            case '+':
                st.push(a+b);break;
            case '-':
                st.push(a-b); break;
            case '*':
                st.push(a*b); break;
            case '/':
                st.push(a/b); break;
            case '^':
                st.push(pow(a,b)); break;
            
            default:
                break;
            }
        }
    }

    return st.top();
}
 

int main() 
{   
//     string str = "(7+(4*5))-(2+0)";
// //    string str; cin >> str;

//     string ans = infix_to_prefix(str);
//     cout << ans << endl;
    // int res = prefixEvaluation(ans);
    // // cout << res << endl;
    //  //string ss = "A*B^C-D+E/F/(G+H)";
    //  string ss = "A*B-C/D+E";
    //  string s = infix_to_prefix(ss);
    //  cout << s << endl;
    //  string str = "a+b*d";
    //  cout << infix_to_prefix(str) << endl;

    string str; cin >> str;
    cout << infix_to_prefix(str) << endl;

    return 0;
}  
 
 



/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int precission(char ch) {
    if(ch=='^')     
        return 3;
    else if(ch=='*' || ch=='/')
        return 2;
    else if(ch=='+' || ch=='-')
        return 1;
    else
        return -1;

}

string infix_to_postfix(string s) {
    stack<char> st;
    string ans;

    for(auto str: s) {
        if(isalpha(str)) 
            ans += str;
        
        else if(str == '(') 
            st.push(str);
        
        else if(str == ')') {
            while(!st.empty() && st.top() != '(') {
                ans += st.top();
                st.pop();
            }
            if(!st.empty()) {
                st.pop();
            }
        }

        else {
            while(!st.empty() && precission(st.top()) >= str) {
                ans += st.top();
                st.pop();
            }

            st.push(str);
        }
    }

    while(!st.empty()) {
        ans += st.top();
        st.pop();
    }

    return ans;

} */

 

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int pre(char s){
       if(s == '^'){
           return 3;
       }
       else if(s == '*' || s == '/'){
           return 2;
       }
       else if(s == '+' || s == '-'){
           return 1;
       }
       else {
           return -1;
       }
   }
   
   string infixToPostfix(string str) {
       stack<char> st;
       string ans="";
        for(auto s : str){
           
           if(isalpha(s)){
               ans+=s;
           }
           else if(s =='('){
               st.push(s );
           }
           else if(s ==')'){
              
              while(!st.empty() && st.top()!='('){
                  ans+=st.top();
                  st.pop();
              } 
              if(!st.empty()){
                  st.pop();
              }
           }
           else{
               while(!st.empty() && pre(st.top())>=pre(s )){
                   ans+=st.top();
                   st.pop();
               }
               st.push(s );
           }
       }
   while(!st.empty()){
       ans+=st.top();
       st.pop();
   }
   return ans;
   }

int main()
{

    string str = "a+b*(c^d-e)^(f+g*h)-i";
    string ans = infixToPostfix(str);
    cout << ans << endl;

    string s =  "A*(B+C)/D";
    string res = infixToPostfix(s);
    cout << res << endl;
    
   
    return 0;
} 


 */