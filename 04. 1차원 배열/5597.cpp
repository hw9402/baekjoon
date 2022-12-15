#include <iostream>
using namespace std;
int main() {
    int i, sn;
    bool check[31] = {false};
    for(i=1; i<=28; i++) {
        cin >> sn;
        check[sn] = true;
    }
    for(i=1; i<=30; i++)
        if(check[i] == false)
            cout << i << "\n";
    return 0;
}