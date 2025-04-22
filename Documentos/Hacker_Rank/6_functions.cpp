#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d){
    int aux[] = {a,b,c,d};
    int valormax = aux[0];
    for (int i = 1; i < 4; i++){
        if (valormax < aux[i]){
            valormax = aux [i];
        }
    }
    
    return valormax;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
