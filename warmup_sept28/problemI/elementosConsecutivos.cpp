#include <iostream>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    // freopen("num.in", "r", stdin);
    // freopen("num.out", "w", stdout);

    int N; cin >> N;
    set<int> numSet;

    for(int i = 0; i < N; i++) {
        int num; cin >> num;
        numSet.insert(num);
    }

    N = numSet.size();
    vector<int> nums(numSet.size());
    
    int index = 0;
    for(int num : numSet) {
        nums[index] = num;
        index++;
    }


    int begin = 0;
    int end = 1;
    int maxSize = 1;

    while(end < N){
        if(nums[end] == nums[end - 1] + 1) { maxSize = max(maxSize, end - begin + 1); }
        else {begin = end;}
        end++;
    }

    cout << maxSize;

    return 0;
}