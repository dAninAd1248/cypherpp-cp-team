#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int to_int(string s) {
    return (10000 * (s[0] - '0')) + (1000 * (s[1] - '0')) + (100 * (s[2] - '0')) + (10 * (s[3] - '0')) + (s[4] - '0');
}

string to_string(int x) {
    return {char (x / 1000 + '0'), char (x / 100 % 10 + '0'), char (x / 10 % 10 + '0'), char (x % 10 + '0')};
}

vector<int> to_diffs(string s_num) {
    sort(s_num.begin(), s_num.end());
    return {s_num[4] - s_num[3], s_num[3] - s_num[2], s_num[2] - s_num[1], s_num[1] - s_num[0]};
}

int to_int(vector<int> s) {
    return (10000 * s[0]) + (1000 * s[1]) + (100 * s[2]) + (10 * s[3]) + s[4];
}

vector<int> to_vector(int x) {
    return {x / 1000, x / 100 % 10, x / 10 % 10, x % 10};
}

vector<int> to_diffs(vector<int> v_num) {
    return;
}

vector<int> op(vector<int> v_num) {
    vector<int> asc = v_num, desc = v_num, res;
    sort(asc.begin(), asc.end());
    sort(desc.begin(), desc.end(), [](int a, int b){ return a > b; });
    res = to_vector(to_int(asc) - to_int(desc));
    return res;
}