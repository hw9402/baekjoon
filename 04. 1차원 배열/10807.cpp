#include <iostream>
using namespace std;
int main() {
    int arr[101] = {0,};
    int n, i, k, count=0;
    cin >> n;
    for(i=0; i<n; i++) cin >> arr[i];
    cin >> k;
    for(i=0; i<n; i++)
        if(arr[i] == k) 
            count++;
    cout << count << "\n";
    return 0;
}