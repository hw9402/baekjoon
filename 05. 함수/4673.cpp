#include <iostream>
using namespace std;
#define MAX_VALUE 10000
int f(int n) {
    int result = 0;
    while(n > 0) {
        result += n % 10;
        n /= 10;
    }
    return result;
}
int main() {
    int i;
    bool tf[10001] = {false};
    for(i=1; i<=MAX_VALUE; i++) {
        if(i+f(i) <= 10000) {
            tf[i+f(i)] = true;
        }
    }
    for(i=1; i<=MAX_VALUE; i++) {
        if(tf[i] == false) {
            cout << i << "\n";
        } else {
            continue;
        }
    }
    return 0;
}