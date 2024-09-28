#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    // freopen("1.in", "r", stdin);
    // freopen("1.out", "w", stdout);
    int N; cin >> N;
    vector<int> weights(N);

    for(int i = 0; i < N; i++) { cin >> weights[i]; }

    sort(weights.begin(), weights.end());

    int sum = weights[0];
    int cakes = 1;
    for(int i = 1; i < N; i++) { 
        if(sum < weights[i]) {
            cakes++;
            sum += weights[i];
        }
    }

    cout << cakes;

    
    return 0;
}