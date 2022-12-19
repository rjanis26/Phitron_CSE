/* #include<bits/stdc++.h> 
using namespace std;
#define endl "\n"

void Bubble_sort(int arr[], int n) {
    for(int i=0;i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j]>arr[j+1]) {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void print_array(int arr[], int n) {
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    Bubble_sort(arr,n);
    print_array(arr,n);



    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define rep(i,n) for(int i=0;i<(n);i++) 

int Bubble_sort(int arr[], int n) {
    int count=0;
    bool swpped=true;

    while(swpped!=false) {
        swpped=false;
        count++;
        rep(i,n-1) {
            if(arr[i] >arr[i+1]) {
                swap(arr[i],arr[i+1]);
                swpped=true;
            }
        }
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    int arr[n];
    rep(i,n) {
        cin>>arr[i];
    }

    cout << Bubble_sort(arr,n)<< endl;
    return 0;
} */