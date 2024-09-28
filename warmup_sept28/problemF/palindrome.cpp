#include <string>
#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    // freopen("1.in", "r", stdin);
    // freopen("1.out", "w", stdout);

    string s; cin >> s;

    unordered_map<char, int> cnt;

    for(char c : s){
        if(cnt.count(c) == 0) { cnt[c] = 1; }
        else { cnt[c] += 1;}
    }

    int maxLength = 0;
    bool oddFnd = false;
    for(pair<char, int> amt : cnt){
        if(amt.second % 2 == 0) maxLength += amt.second;
        else {
            maxLength += amt.second - 1;
            oddFnd = true;
        }
    }

    if(oddFnd) maxLength++;

    cout << maxLength;

    return 0;
}