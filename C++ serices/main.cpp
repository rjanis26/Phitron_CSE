/*   #include<bits/stdc++.h>
#include"ANIS_STACK.h"
using namespace std;


int main()
{
    Stack<char> st;
    (st.is_empty()) ? cout<<"Yes\n" : cout <<"No\n";
    st.push(1);
    st.push(5);
    st.push(6);
    st.push(10);
    st.push(11);
   st.push(2);

    while(!st.is_empty()) {
        cout << st.top_element() << " ";
        st.pop();
    }

    // st.push('a');
    // st.push('b');
    // st.push('c');

    // st.print_stack();
    // cout << st.size() << endl;
    // cout<< st.top_element() << endl;
    // cout<< "Mid is: ";
    // st.mid();
 
    return 0;
} 
  */




/* 
 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define size 3
int arr[size], front = 0, rear = -1, total_item =0;


bool isFull() {
  if(total_item == size)
      return true;
   else 
      return false;
}


bool isEmpty() {
    if(total_item == 0) 
        return true;
    else 
        return false;
}

void Enqueue(int value) {
    if(isFull()) {
        cout<< "Queue is empty!" << endl;
        return;
    }

    rear = (rear + 1) % size;
    arr[rear] = value;
    total_item++;
}

int Dequeue() {
    if(isEmpty()) {
         cout<<"Queue is empty!" << endl;
         return -1;
    }
       
    
    int front_item = arr[front];
    arr[front_item] = -1;
    front = (front + 1) % size;
    total_item--;

    return front_item;
}

void print_queue() {
    cout<< "Queue elements: ";
    for(int it : arr)   
        cout<< it <<" ";
    cout << endl;
}

int main()
{
    Enqueue(21); //// z=x+y = 9 + 12 = 21
    Enqueue(33); //p=y+z = 12 + 21 = 33
    print_queue();
    Dequeue();

    print_queue();

    Enqueue(12);  //// z=x+y = 9 + 12 = 21
    Enqueue(21);   // z=x+y = 9 + 12 = 21

    print_queue();
 
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

    





    return 0;
}