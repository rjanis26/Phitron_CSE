/* #include<bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<int> PosNegative(int arr[], int n) {
    vector<int>v, ans;
    map<int, int> mp;

    for(int i=0; i<n; i++) {
        if(arr[i] < 0) 
            v.push_back(arr[i]);
        else 
            mp[arr[i]]++;
    }

    sort(v.begin(), v.end());

    for(int i=v.size()-1; i>=0; i--) {
        int data = abs(v[i]);
        if(mp[data] > 0) {
            ans.push_back(v[i]);
            ans.push_back(data);
            mp[data]--;
        }
    }

    return ans;
}


int main()
{   
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

 

    return 0;
} */
 
 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    map<int,int> mp;
    for(int i=0; i<arr1.size(); i++) 
        mp[arr1[i]]++;
    
    vector<int> ans;
    for(int i=0; i<arr2.size(); i++) {
        if(mp.find(arr2[i]) != mp.end()) 
            ans.push_back(arr2[i]);
    }

    sort(arr1.begin(), arr1.end());
    map<int,int> m;
    for(int i=0; i<arr2.size(); i++) 
        m[arr2[i]]++;
    
    for(int i=0; i<arr1.size(); i++) {
        if(m.find(arr1[i]) != m.end())
            ans.push_back(arr1[i]);
    }

    return ans;
}

int main()
{   
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
 

    return 0;
}
 