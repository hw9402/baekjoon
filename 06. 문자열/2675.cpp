#include <iostream>
using namespace std;
int main() {
    int t, n, i, j, k;
    string string;
    cin >> t;
    for(i=0; i<t; i++) {
        cin >> n >> string;
        for(j=0; j<string.length(); j++) {
            for(k=0; k<n; k++) {
                cout << string[j];
            }
        }
        cout << "\n";
    }
    return 0;
}