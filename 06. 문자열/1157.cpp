#include <iostream>
using namespace std;
int main() {
    string word, answer;
    int i, j, max=-1;
    int count[26] = {0};
    cin >> word;
    for(i=0; i<word.size(); i++) {
        word[i] = tolower(word[i]);
        count[(int)(word[i]-97)]++;
    }
    for(i=0; i<26; i++) {
        if(max < count[i]) {
            max = count[i];
            answer = 'A'+i;
        } else if(max == count[i]) {
            answer = "?";
        }
    }
    cout << answer << "\n";
    return 0;
}