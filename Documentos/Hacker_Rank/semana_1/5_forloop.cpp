#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    string words[] = {"one", "two", "three", "four", "five", "six", "seven", "eight","nine"};
    cin >> a >> b;
    if (a >= b){
        cout << "a tem que ser menor que b";
        return 0 ;
    }
    else {
        for(int i = a; i <= b; i++){
            if (i >= 1 && i <= 9) {
                
                cout << words[i - 1] << endl;
        } else {
            if (i % 2 == 0) {
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        }
        }
    }
    return 0;
}