#include <iostream>
using namespace std;
int f(int n) {
    int hun, ten, one = 0;
    int count = 0;
    for(int i=1; i<=n; i++) {
        hun = i/100%10;
        ten = i/10%10;
        one = i%10;
        if(i < 100) {
            count++;
        } else if(i == 1000) {
            continue;
        } else if((hun-ten) == (ten-one)) {
            count++;
        }
    }
    return count;
}
int main() {
    int n;
    cin >> n;
    cout << f(n) << "\n";
    return 0;
}