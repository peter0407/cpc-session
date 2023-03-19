#include <iostream>
#include <iomanip>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <deque>
#include <queue>
#include <map>
#include <set>

typedef long long ll;

#define Fast			ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define T				int t; cin >> t; while (t--)
#define PB				push_back
#define MP				make_pair
#define F               first 
#define S               second     
#define V               vector
#define P               pair<ll,ll>
#define VP				V<P>
#define cnp(a)          for(auto &(i):(a)) cin>>(i.F)>>i.S;
#define all(v)          v.begin(), v.end() 
#define sz(v)           ((int)(v.size()))
#define init(v,d,s)     memset(v,d,s)
#define clr(v, d)       memset(v,d,sizeof(v))
#define rep(i,v)        for(int i=0; i<sz(v); ++i)
#define lp(i, n)        for(int i=0; i<n    ; ++i)
#define lpj(i,j,n)      for(int i=j; i<n    ; ++i)
#define lpd(i,j,n)      for(int i=j; i>=n   ; --i)

using namespace std;

int main() {
    int permut[] = { 5, 4, 2, 1, 3};
    sort(permut, permut + 5);
    for (int x : permut) cout << x << " ";
    cout << endl;
    while (next_permutation(permut, permut+5)) {
        for (int x : permut) cout << x << " ";
        cout << endl;
    }

    int arr[] = { 1, 2, 2, 3, 3, 3, 4, 4, 4, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int* p;
    p = find(arr, arr + n, 2);

    cout << *p << endl;
  
    // using std::unique to remove consecutive duplicates
    int* end = unique(arr, arr + n);
    


    // printing the unique elements of the array
    for (int* i = arr; i != end; i++) {
        cout << *i << " ";
    }
    cout << endl;
    for (int x : arr) cout << x << " ";
    cout << endl;
    
    int unique_count = distance(arr, end);

    int* unique_arr = new int[unique_count];
    
    copy(arr, end, unique_arr);

    for (int i = 0; i != unique_count; ++i) cout << unique_arr[i] << " ";
    cout << endl;

    cin.get();
    
}



________________________________________________________
  partial sum
  
  2 -> 7 += 1
 4 -> 9 += 3
 2 -> 5 += 2
 5 -> 10 += 4
        1 2 3 4 5 6 7  8  9   10
a   =   0 3 0 3 4 -2 0 -1  0  -3  -4


pre =   0 3 3 6 6 4 4 3 3 0   O(N)


int a[11] = {0};
int m; cin >> m;
while(m--){
    int l, r, k;
    cin >> l >> r >> k;
    a[l]   += k;
    a[r+1] -= k;
}

for(int x : arr) cout << x;


for (int i = 1; i < n; i++)
    a[i] += a[i-1];


____________________________________________
  2d prefix_sum
  
  
  int arr[5][6] ={{1, 2, 3, 4, 5},
                {1, 2, 3, 4, 5},
                {1, 2, 3, 4, 5},
                {1, 2, 3, 4, 5},
                {1, 2, 3, 4, 5},
                {1, 2, 3, 4, 5}};
int prefix[5][6] = {0};

// prefixing each row;
for(int j = 0; j < 6; j++){
    prefix[j][0] = arr[j][0];
    
    for(int i = 1; i < 5; i++){
        prefix[j][i] = prefix[j][i-1] + arr[j][i];
    }
}

//prefixing each col
for(int i = 0; i < 5; i++){    
    for(int j = 1; j < 6; j++){
        prefix[j][i] = prefix[j-1][i] + prefix[j][i];
    }
}
int q; cin >> q;
while(q--){

int x1, y1, x2, y2;
cin >> x1 >> ....;


    cout << prefix[x2][y2] - prefix[x1 -1][y2] - prefix[x2][y1-1] + prefix[x1-1][y1-1];

    }
