//  https://practice.geeksforgeeks.org/problems/infix-to-postfix-1587115620/1

/* 
  #include<bits/stdc++.h>
using namespace std;
#define endl '\n'
 

int pre(char a){
       if(a=='^')
           return 3;
       else if(a=='*' || a=='/')
           return 2;
       else if(a=='+' || a=='-')
           return 1;
       else
           return -1;
   }
   
   
   string infixToPostfix(string s) {
       string t="";
       stack<char> st;
       for(auto c:s){
           if(isalpha(c))
               t+=c;
           else if(c=='(')
               st.push(c);
           else if(c==')'){
               while(st.top()!='('){
                   t+=st.top();
                   st.pop();
               }
               st.pop();
           }
           else{
               if(st.empty()==true)
                   st.push(c);
               else{
                   if(pre(c)>pre(st.top()))
                       st.push(c);
                   else{
                       while(st.empty()==false && pre(c)<=pre(st.top())){t+=st.top(); st.pop();}
                       st.push(c);
                   }
               }
           }
       }
       while(st.empty()==false){
           t+=st.top();
           st.pop();
       }
       return t;// Your code here
   }

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
 


    return 0;
} 
  */

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
   
   string infixToPostfix(string s) {
       // Your code here
       stack<char> st;
       string ans;
       for(int i=0;i<s.length();i++){
           
           if((s[i] >='a' && s[i]<='z') || (s[i] >='A' && s[i] <='Z')){
               ans+=s[i];
           }
           else if(s[i]=='('){
               st.push(s[i]);
           }
           else if(s[i]==')'){
              
              while(!st.empty() && st.top()!='('){
                  ans+=st.top();
                  st.pop();
              } 
              if(!st.empty()){
                  st.pop();
              }
           }
           else{
               while(!st.empty() && pre(st.top())>=pre(s[i])){
                   ans+=st.top();
                   st.pop();
               }
               st.push(s[i]);
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
    string str =  "a+b*(c^d-e)^(f+g*h)-i";
    cout << infixToPostfix(str) << endl;

    string s =  "A*(B+C)/D";
    string ans = infixToPostfix(s);
    cout<< s << endl;
 
  

    return 0;
}
  */


/* 
  
   Input: str = "a+b*(c^d-e)^(f+g*h)-i"
Output: abcd^e-fgh*+^*+i-

Input: str = "A*(B+C)/D"
Output: ABC+*D/


 */




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
           
           if(isalpha(s) || isdigit(s)){
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

    // string str = "a+b*(c^d-e)^(f+g*h)-i";
    // string ans = infixToPostfix(str);
    // cout << ans << endl;

    // string s =  "A*(B+C)/D";
    // string res = infixToPostfix(s);
    // cout << res << endl;
    
    string str;  cin>> str;
    cout << infixToPostfix(str) << endl;
 

    return 0;
}




