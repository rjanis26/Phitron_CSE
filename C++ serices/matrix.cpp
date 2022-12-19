// print the idetity matrix
/* #include<bits/stdc++.h>
using namespace std;

void identity(int n) {
    
    for(int i = 0; i<n; i++) {
        for(int j=0; j<n; j++) {
            (i==j) ? cout<< 1 <<" " : cout << 0 <<" ";
        }
        cout<< endl;
    }   
 
}

int main()
{   
    int n; cin>>n;

    identity(n);



    return 0; 
}*/

/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int;
#define endl "\n"
#define  size 100

void row_sum(int arr[size][size], int n, int m) {
    int rowSum;
    for(int i=0; i<n; i++) {
        rowSum=0;
        for(int j=0; j<m; j++) 
            rowSum += arr[i][j];
        cout<< "Sum of row " << i+1 <<" is: "<< rowSum << endl;
    }

     
}

void col_sum(int arr[size][size], int n, int m) {
    
    int colSum;
    for(int i=0; i<n; i++) {
        colSum =0;
        for(int j=0; j<m; j++) 
            colSum += arr[j][i];
        
        cout << "Addition col " << i+1 <<" is: " << colSum<< endl;
    }

     
}


void print_matrix(int arr[size][size], int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) 
            cout<<arr[i][j] <<" ";
        cout<< endl;
    }
}

int main()
{

    int arr[size][size], n,m;
    cout<< "Enter the row & col: " << endl;
    cin>> n >> m;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>> arr[i][j];
        }
    }


    puts("");
    print_matrix(arr,n,m);
    cout<< endl;
    // cout<<"Row sum:"  << row_sum(arr,n,m)<< endl;
    // cout<<"Col sum:" << col_sum(arr,n,m) << endl;
    cout<< "Sum of each row:" << endl;
    row_sum(arr,n,m);
    cout<< "Sum of each col:" << endl;
    col_sum(arr,n,m);



    return 0;
} */


// print principal and secondary diagonal
/* 
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define size 100

void major_diagonal(int arr[size][size], int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(i==j)
                cout<< arr[i][j] << " ->";
        }
    }
    cout << endl;
    
}

void minor_diagonal(int arr[size][size], int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
             if((i+j== n-1)) 
                cout << arr[i][j] <<" ->";
        }   
    }
    cout<< endl;
}

void print_matrix(int arr[size][size], int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) 
            cout<< arr[i][j] <<" ";
        cout<< endl;
    }
}

int main()
{

    int arr[size][size], n, m;
    cout<< "Enter the row and col:"<< endl;
    cin>>n >> m;

    for(int i=0; i<n; i++)  
        for(int j=0; j<m; j++) 
            cin>> arr[i][j];

    puts("");
    print_matrix(arr,n,m);
    
    cout<<"Major Diagoanl: " << endl;
    major_diagonal(arr,n,m);
    
    cout<< "Minor Diagonal: " << endl;;
    minor_diagonal(arr,n,m);

 

    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define size 100

void major_diagonal(int arr[size][size], int n ) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i==j)
                cout<< arr[i][j] << " ";
        }
    }
    cout << endl;
    
}

void minor_diagonal(int arr[size][size], int n ) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
             if((i+j== n-1)) 
                cout << arr[i][j] <<" ";
        }   
    }
    cout<< endl;
}

void print_matrix(int arr[size][size], int n ) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) 
            cout<< arr[i][j] <<" ";
        cout<< endl;
    }
}

int main()
{

    int arr[size][size], n;
    cout<< "Enter the row and col:"<< endl;
    cin>>n;

    for(int i=0; i<n; i++)  
        for(int j=0; j<n; j++) 
            cin>> arr[i][j];

    puts("");
    print_matrix(arr,n);
    
    cout<<"Major Diagoanl: " << endl;
    major_diagonal(arr,n);
    
    cout<< "Minor Diagonal: " << endl;;
    minor_diagonal(arr,n);

 

    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define size 100

int major_diagonal(int arr[size][size], int n ) {
    int sum1 =0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i==j)
                //cout<< arr[i][j] << " ";
                sum1 += arr[i][j];
        }
    }
    return sum1;
}

int minor_diagonal(int arr[][size], int n ) {
    int sum2 =0;
    for(int i=0; i<n; i++) {
          
        for(int j=0; j<n; j++) {
             if((i+j== n-1)) 
                //cout << arr[i][j] <<" ";
                sum2 += arr[i][j];
        }   
    }
   return sum2;
}

void print_matrix(int arr[][size], int n ) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) 
            cout<< arr[i][j] <<" ";
        cout<< endl;
    }
}

int main()
{

    int arr[size][size], n;
    cout<< "Enter the row and col:"<< endl;
    cin>>n;

    for(int i=0; i<n; i++)  
        for(int j=0; j<n; j++) 
            cin>> arr[i][j];

    puts("");
    print_matrix(arr,n);
    
    cout<<"Major Diagoanl: "  ;
    cout<<major_diagonal(arr,n) << endl;
    
    cout<< "Minor Diagonal: "  ;
    cout <<minor_diagonal(arr,n) << endl;

 

    return 0;
} */

/* 
// swap major and minor diagonal ...
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define size 100

void swapDiagonal(int arr[][size], int n) {
    for(int i=0; i<n; i++) 
        swap(arr[i][i], arr[i][n-i-1]);
}


void print_matrix(int arr[][size], int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<< arr[i][j] <<" ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[size][size], n;
    cout<<"Enter the matrix size:" << endl;
    cin>>n;

    // input matrix..
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin>> arr[i][j];
        }
    }

    
    swapDiagonal(arr,n);
    puts("");
    print_matrix(arr,n);

    return 0;
} */

/* 
// deference between to diagonal ...
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define size 100

int defference(int arr[][size], int n) {
    int sum1=0, sum2=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            
            if(i==j) 
                sum1 += arr[i][j];
            if(i+j== n-1) 
                sum2 += arr[i][j];
        }
    }

    return abs(sum1-sum2);
}

void print_matrix(int arr[][size], int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<< arr[i][j]<< " ";
        }
        cout<< endl;
    }
}

int main()
{

    int arr[size][size], n;
    cin>>n;
    
    // input matrix...
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin>> arr[i][j];
        }
    }

    puts("");
    print_matrix(arr,n);
    cout<< "Defference: " << defference(arr,n) << endl;

 
    return 0;
} */


// reverse row matrix...
/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define size 100

void reverse_arr(int arr[][size], int n, int m) {
    for(int i=0; i<n; i++) {
        int l=0, r = m-1;

        while(l < r) 
            swap(arr[i][l++], arr[i][r--]);
    }
}

void print_arr(int arr[][size], int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) 
            cout<< arr[i][j] <<" ";
        cout<< endl;
    }
}

int main()
{
    int arr[size][size], n,m;
    cin>> n >> m;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>> arr[i][j];
        }
    }

    puts("");
    reverse_arr(arr,n,m);
    print_arr(arr,n,m);


    return 0;
}
 
 
  */


 // reverse col matrix...
/*  #include<bits/stdc++.h>
 using namespace std;
#define endl "\n"
#define size 100

void reverse_col(int arr[][size], int n, int m) {
    for(int i=0; i<n; i++) {
        int l=0, r=m-1; 
        while(l < r) {
            swap(arr[l][i], arr[r][i]);
                l++;
                r--;
            }
    }
    
}

void print_arr(int arr[][size], int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++)  {
            cout<< arr[i][j] << " ";
        }
        cout<< endl;
    }
}

int main()
{

    int arr[size][size], n, m;
    cout << "Enter the row and col: " << endl;
    cin>> n >> m;

    // take input matrix...
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>> arr[i][j];
        }
    }

    puts("");
    print_arr(arr,n,m);
    reverse_col(arr,n,m);

 
    return 0;
} */

/* 
// C++ implementation of the
// above approach
#include <bits/stdc++.h>
using namespace std;

const int M = 3;
const int N = 3;

// A utility function
// for swapping two elements.
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Print the arr[][]
void printMatrix(int arr[M][N])
{

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
}

// Function to reverse
// the given 2D arr[][]
void reverseColumnArray(int arr[M][N])
{

	// Print the arr[][] before
	// reversing every column
	printMatrix(arr);
	cout << endl;

	// Traverse each column of arr[][]
	for (int i = 0; i < N; i++) {
		// Initialise start and end index
		int start = 0;
		int end = M - 1;

		// Till start < end, swap the
		// element at start and end index
		while (start < end) {
			// Swap the element
			swap(&arr[start][i], &arr[end][i]);

			// Increment start and decrement
			// end for next pair of swapping
			start++;
			end--;
		}
	}

	// Print the arr[][] after
	// reversing every column
	printMatrix(arr);
}

// Driver Code
int main()
{
	int arr[][3]
		= { { 3, 2, 1 }, { 4, 5, 6 }, { 9, 8, 7 } };

	// Function call
	reverseColumnArray(arr);
	return 0;
}
 */

/* 
 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define size 100

void reverse_arr(int arr[][size], int n, int m) {
    for(int i=0; i<n; i++) {
        int l=0, r = m-1;

        while(l < r) 
            swap(arr[l++][i], arr[r--][i]);
    }
}

void print_arr(int arr[][size], int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) 
            cout<< arr[i][j] <<" ";
        cout<< endl;
    }
}

int main()
{
    int arr[size][size], n,m;
    cin>> n >> m;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>> arr[i][j];
        }
    }

    puts("");
    reverse_arr(arr,n,m);
    print_arr(arr,n,m);


    return 0;
}
  */

         /* check matrix Identical or not */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define size 100

bool are_same(int arr[][size], int brr[][size], int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(arr[i][j] != brr[i][j]) 
                return false;
        }
    }
    return true;
}

void print_matrix(int arr[][size], int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << arr[i][j]<< "";
        }
    }
    cout<< endl;
}

int main()
{

    int a[size][size], b[size][size], n;
    cout<< "Enter the first mat row: " << endl;
    cin>> n;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin>> a[i][j];
        }
    }
    
    cout<< "Enter the second mat row: " << endl;
    cin>>n;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin>> b[i][j];
        }
    }

    bool ans = are_same(a,b, n);
    if(ans == true) 
        cout<<"Are same" <<endl;
    else 
        cout << "Not same" << endl;
 
    return 0;
} */
/* 

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define size 3

void input(int arr[][size], int n) {
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin>> arr[i][j];
        }
    }
}

void print_matrix(int arr[][size], int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<< arr[i][j]<<" ";
        }
        cout<< endl;
    }
}

bool are_same(int arr[][size], int brr[][size], int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(arr[i][j] != brr[i][j]) 
                return false;
        }
    }
    return true;
}

int main()
{
     int a[size][size], b[size][size];
    //cout<< "Enter the first matrix row:" << endl;
  

    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<n; j++) {
    //         cin>> a[i][j];
    //     }
    // }

    // cout<<"Enter the second matrix row:" << endl;
    // cin>> n;

    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<n; j++) {
    //         cin>> b[i][j];
    //     }
    // }

    input(a, size);
    input(b,size);

    // puts("");
    // print_matrix(a, n);
    // puts("");
    // print_matrix(b,n);

    cout<<"Result: ";
    bool ans = are_same(a, b, size);
    if(ans == true) 
        cout<<"Same"<< endl;
    else 
        cout<< "Not same" << endl;
 

    return 0;
}
 */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define size 100

void solve(int arr[][size], int n, int m)  {
   
     int count[size] = {0};

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            count[arr[i][j]]++;
        }
    }


    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(count[arr[i][j]] > 1) {
                arr[i][j] = -1;
            }
            else {
                count[arr[i][j]]++;
            }
        }
    }
}


void print_arr(int arr[][size], int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout<< arr[i][j] << " ";
        }
        cout<< endl;
    }
}

int main()
{
    int arr[size][size], n, m;
    cout<< "Enter your row & col: " << endl;
    cin>> n >>m;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>> arr[i][j];
        }
    }

    solve(arr,n,m);
    print_arr(arr,n,m);



    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define size 100


void print_arr(int arr[][size], int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }
}


void smallest_in_row(int arr[][size], int n, int m) {
    
    cout<< "{ ";    
    for(int i=0; i<n; i++) {
        int min = arr[i][0];
        for(int j=1; j<m; j++) {
            if(arr[i][j]  < min) 
                min = arr[i][j];
        }
        cout << min <<", ";
    }
    cout<< "}";
}


void smallest_in_col(int arr[][size], int n, int m ) {
    cout << "{ ";

    for(int i=0; i<n; i++) {
        int min = arr[0][i];
        for(int j=1; j<m; j++) {
            if(arr[j][i] < min) 
                min = arr[j][i];
        }
        cout<< min << ", ";
    }
    cout<<"}";
}


int main()
{

    int arr[size][size], n, m;
    cout<< "Enter the row &col: " << endl;
    cin>> n >> m;

    // take input...
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>> arr[i][j];
        }
    }

    puts("");
    cout << "Min value each row: ";
    smallest_in_row(arr,n,m);
    cout << endl<< "Min value each col:";
    smallest_in_col(arr,n, m);
 

    return 0;
} */


// Transpose matrix...
/* #include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define size 100

void transpose(int arr[][size], int n, int m) {
    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<n; j++) {
    //         swap(arr[i][j], arr[j][i]);
    //     }

     for (int i = 0; i < n; i++)
        for (int j = i+1; j < m; j++)
            swap(arr[i][j], arr[j][i]);
     
}

void print_arr(int arr[][size], int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout<< arr[i][j]<<" ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[size][size], n, m;
    cout<<"Enter the row: " << endl;
    cin>> n >> m;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>> arr[i][j];
        }
    }

    transpose(arr,n,m);
    print_arr(arr,n,m);
 
    return 0;
}
 */
 
/* 
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int 
#define size 100

void input(int arr[][size], int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>> arr[i][j];
        }
    }
}

void print_arr(int arr[][size], int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout<< arr[i][j] << " ";
        }
        cout<< endl;
    }
}


void largest_in_row(int arr[][size],int n, int m) {
    cout<<"{";
    for(int i=0; i<n; i++) {
        int max = arr[i][0];
        for(int j=1; j<m; j++) {
            if(arr[i][j] > max) 
                max= arr[i][j];
        }
        cout<< max << ", ";
    }
    cout<<"}";
}


void largest_in_col(int arr[][size], int n, int m) {
    cout <<"{";
    for(int i=0; i<n; i++) {
        int max = arr[0][i];
        for(int j=1; j<m; j++) {
            if(arr[i][j] > max) 
                max= arr[j][i];
        }
        cout<<max << ", ";
    }
    cout<< "}";
}

int main()
{

    // ios_base::sync_with_stdio(false); 
    // cin.tie(0); cout.tie(0);
    int arr[size][size], n, m;
    cout<<"Enter the row & col:" << endl;
    cin>> n >>m;

    // take input...
    input(arr,n, m);
    
    cout<<"Max value each row: ";
    largest_in_row(arr,n,m);
    cout<<endl << "Max value each col: ";
    largest_in_col(arr,n,m);
 

    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;
#define n 3 
#define endl "\n";

void input(int arr[][n]) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin>> arr[i][j];
        }
    }
}

void mul(int arr[][n], int brr[][n], int res[][n]) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            res[i][j] = 0;
            for(int k=0; k<n; k++) 
                res[i][j] += arr[i][k] * brr[k][j];
        }
    }
}

void print_arr(int arr[][n]) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
}

int main()
{   
    int a[n][n], b[n][n], c[n][n];

    input(a);
    input(b);
    puts("");
    mul(a,b,c);
    print_arr(c);

 
    return 0;
}
 */


/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define size 100

void input(int arr[][size], int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>> arr[i][j];
        }
    }
}

void print_arr(int arr[][size], int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout << arr[i][j] <<" ";
        }
        cout<< endl;
    }
}

void find_max(int arr[][size], int n, int m) {
    int max = INT_MIN;
    int max_index=0, min_index =0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++)  {
            if(arr[i][j] > max) {
                max = arr[i][j];
                max_index = i, j;
            }
                
        }
    }
    cout<<"max vlaue :"<< max << endl;
    cout<< "Location:"<< max_index << endl;
}

int main()
{
    int arr[size][size], n,m;
    cout<< "Enter the row &col: ";
    cin>>n >> m;

    input(arr, n,m);
    find_max(arr,n,m);
    // int ans = find_max(arr,n,m);
    // cout<<"Max value: "<< ans << endl;
 
    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define size 100

void input(int arr[][size], int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> arr[i][j];
        }
    }
}

void findMin_max(int arr[][size], int n, int m) {
    int mini = INT_MAX, maxi = INT_MIN;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            maxi = max(arr[i][j], maxi);
            mini = min(arr[i][j], mini);
        }
    } 

    cout<< "max value: "<< maxi << endl;
    cout<< "Min value:" << mini << endl;

}

int main()
{
    int arr[size][size], n,m;
    cout<<"Enter the row & col:" << endl;
    cin>> n>> m;

    input(arr,n,m);
    findMin_max(arr,n,m);
 
    return 0;
} */
 