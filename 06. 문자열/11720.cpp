#include <iostream>
using namespace std;
int main() {
    int c, i, sum=0;
    string n;
    cin >> c >> n;
    for(i=0; i<c; i++) {
        sum += n[i]-'0';
    }
    cout << sum << "\n";
    return 0;
}