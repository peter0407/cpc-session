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
    Fast;
    int arr[26] = {0};
    string s;
    cin >> s;
    for (size_t i = 0; i < s.size(); i++)
    {
        arr[s[i]-'a']++;
    }
    sort(arr, arr + 26);
    reverse(arr, arr + 26);

    cout << arr[0];
}
