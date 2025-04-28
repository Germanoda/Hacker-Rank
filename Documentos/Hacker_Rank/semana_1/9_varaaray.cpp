#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q,k,aux;
    cin >> n >> q;
    vector<vector<int>> vararray;
    for (int i = 0 ; i < n ; i++){
        cin >> k;
        vector<int> temp;
        for(int j = 0 ; j < k ; j++){
            cin >> aux;
            temp.push_back(aux);
        }
        vararray.push_back(temp);
    }
    int a,b;
    for(int i = 0 ; i < q ; i++){
        cin >> a >> b;
        cout << vararray[a][b] << endl;
    }   
    return 0;
}