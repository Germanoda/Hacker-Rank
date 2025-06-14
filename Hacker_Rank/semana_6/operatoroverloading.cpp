#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Matrix {
    private:
    vector<vector<int>> a;
    public:
        friend Matrix operator +(Matrix& a1,Matrix& a2);
        friend int main();
};

Matrix operator+(Matrix& a1, Matrix& a2) {
    Matrix result;
    int linhas = a1.a.size();
    int colunas = a1.a[0].size();
    for (int i = 0; i < linhas; ++i) {
        vector<int> row;
        for (int j = 0; j < colunas; ++j) {
            row.push_back(a1.a[i][j] + a2.a[i][j]);
        }
        result.a.push_back(row);
    }
       return result;
}

int main () {
   int cases,k;
   cin >> cases;
   for(k=0;k<cases;k++) {
      Matrix x;
      Matrix y;
      Matrix result;
      int n,m,i,j;
      cin >> n >> m;
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         x.a.push_back(b);
      }
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         y.a.push_back(b);
      }
      result = x+y;
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }  
   return 0;
}
