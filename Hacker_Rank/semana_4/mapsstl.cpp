#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
     int q,y,n,aux;
    string x;
    map<string,int>m;
    cin >> n;
    for (int i = 0; i < n ; i++){
        cin >> q;
        switch (q) {
            case 1:
                cin >> x >> y;
                m[x] += y;
                break;
            case 2:
                cin >> x;
                m.erase(x);
                break;
            case 3:
                cin >> x;
                cout << m[x] << endl;
                break;
        }
    }
    return 0;
}



