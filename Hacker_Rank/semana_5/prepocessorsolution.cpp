#define toStr(x) #x
#define foreach(v,i) for(int i = 0 ; i < (int)v.size(); i++)
#define FUNCTION(name,op) template<typename T> void name(T & a , T b){ if (b op a) a = b; }
#define io(v) cin >> v
#define INF (int)1e9

#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	cout << toStr(Result =) <<' '<< ans;
	return 0;

}