#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     int n,a,b,c,d;
    cin >> n;
    vector<int> v;
    for(int i = 0 ; i < n ; i++){
        cin >> a;
        v.push_back(a);
    }
    cin >> b;
    v.erase(v.begin() + (b - 1));
    cin >> c >> d;
    v.erase(v.begin() + (c - 1), v.begin() + (d - 1));
    int n_new = v.size();
    cout << n_new << endl;
    for(int i = 0 ; i < n_new ; i++){
        cout << v[i] << " ";
    }
    return 0;
}
