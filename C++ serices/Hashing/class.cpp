/* #include<bits/stdc++.h>
using namespace std;
#define ednl '\n'


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    unordered_set<int> set;
    set.insert(10);
    set.insert(50);
    set.insert(12);
    set.insert(130);
    set.insert(10);

    for(auto &it : set) 
        cout << it << " ";
    cout << endl;
 
    cout << "Size of: " << set.size() << endl;

    int val = 130;
    (set.find(val) != set.end()) ? cout << "Find" : cout << "Not find";


    int dell = 15;
    set.erase(dell);
 
    cout << "Size of: " << set.size() << endl;
 

    return 0;
} */


/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


int main()
{

    unordered_map<string, int> umap;
    umap.insert({"price", 10});
    umap.insert({"mahin", 500});
    umap.insert({"shhin", 100});


    // for(auto &it : umap) 
    //     cout << it.first <<" " << it.second << endl;
    // cout << endl;

    string key = "mahin";

    if(umap.find(key) != umap.end()) 
        cout <<"Key is found" << endl;
    else 
        cout << "Key is not found"<< endl;
    
    if(umap.find(key) != umap.end()) {
        auto temp = umap.find(key);

        cout <<"Key is:" << temp->first << endl;
        cout << "value is:" << temp->second << endl;
    }
 

    return 0;
}
 */


/// first non _ reapting element from array...
/* #include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int findReaptingElement(int arr[], int n) {
    map<int,int> mp;
    for(int i=0; i<n; i++) 
        mp[arr[i]]++;
    
    for(auto i : mp) {
        if(i.second == 1) 
            return i.first;
    }
}

int findNonReapting(int arr[], int n) {
    unordered_map<int, int> umap;
    for(int i=0; i<n; i++)
        umap[arr[i]]++;
    
    for(int i=0; i<n; i++) {
        if(umap[arr[i]] ==1) {
            return arr[i]; break;
        }
    }
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    int n; cin>>n;
    int arr[n];

    for(int i=0; i<n; i++) 
        cin >> arr[i];
 
 
    return 0;
} */


/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int numberOfIntersection(int arr[], int brr[], int n, int m) {
    unordered_set<int> set;
    int ans= 0;

    for(int i=0; i<n; i++) 
        set.insert(arr[i]);


    for(int i=0; i<m; i++) {
        if(set.find(brr[i]) != set.end()) {
            ans++;
            set.erase(brr[i]);
        } 
            
    }

    return ans;
}

int main()
{
    ios_base ::sync_with_stdio (false);
    cin.tie(0); cout.tie(0);

    int n, m; cin >> n >> m;
    int arr[n], brr[m];


    for(int i=0; i<n; i++) 
        cin >> arr[i];
    
    for(int i=0; i<m; i++) {
        cin >> brr[i];
    }

     

    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

bool subArrayExits(int arr[], int n) {
    unordered_set<int> set;
    int preSum = 0;
    for(int i=0; i<n; i++) {
        preSum += arr[i];

        // if(preSum == 0)     
        //     return 0;
        if(set.find(preSum) != set.end() || preSum == 0) 
            return true;
        else 
            set.insert(preSum);
    }

    return false;

}

int main()
{   
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

      

    return 0;
} */

/* 
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        
           vector<string>ans;
        string s;
        map<string,int> mp;
        
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        int maxi=INT_MIN;
        for(auto i:mp)
        {
            if(maxi<i.second)
            {
                maxi=i.second;
                s=i.first;            
            }
        }
        ans.push_back(s);
        ans.push_back(to_string(maxi));
        return ans;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends
 */


 




















