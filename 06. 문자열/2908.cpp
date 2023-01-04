#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    string temp_a = to_string(a);
    string temp_b = to_string(b);
    reverse(temp_a.begin(), temp_a.end());
    reverse(temp_b.begin(), temp_b.end());
    a = stoi(temp_a);
    b = stoi(temp_b);
    if(a<b) cout << b << "\n";
    else if(a>b) cout << a << "\n";
    return 0;
}