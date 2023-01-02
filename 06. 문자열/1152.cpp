#include <iostream>
using namespace std;
int main() {
    int i, count=1;
    string sentence;
    getline(cin, sentence);
    for(i=0; i<sentence.length(); i++) {
        if(sentence[i] == ' ') {
            count++;
        }
    }
    if(sentence[0] == ' ') count--;
    if(sentence[sentence.length()-1] == ' ') count--;
    cout << count << "\n";
    return 0;
}