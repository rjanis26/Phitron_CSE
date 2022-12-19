#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node  {
    public:
        int data;
        Node *left, *right;
        Node(int data) {
            this->data = data;
            this->left = this->right = nullptr;
        }
};

  vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        
        int count = 0;
        if(root == NULL)
            return ans;
        
        while(1){
            int size = q.size();
            if(size == 0)
                return ans;
            count++;
            vector<int>data;
            
            while(size>0){
                TreeNode* temp = q.front();
                q.pop();

                data.push_back(temp->val);
                if(temp->left != NULL)
                    q.push(temp->left);
                if(temp->right != NULL)
                    q.push(temp->right);
                size--;
            }
            if(count%2==0)
                reverse(data.begin(), data.end());
            ans.push_back(data);
            
            
        }
        return ans;
    

vector<int> zigzagTraversal(Node *root) {
    vector<int> ans;
    queue<Node*> q;
    q.push(root);
    int count = 0;

    if(!root) 
        return ans;
    
    while(1) {
        int size = q.size();
        if(size == 0) 
            return ans;
        count++;
        
        vector<int> data;
        while(size > 0) {
            Node *curr = q.front();
            q.pop();
            data.push_back(curr->data);
            if(curr->left) 
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);
            size--;
        }

         if(count%2==0)
                reverse(data.begin(), data.end());
        ans.push_back(data);
            
            
    }

    return ans;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

  
    return 0;
}









 