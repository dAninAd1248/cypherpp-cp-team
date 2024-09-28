#include <vector>
#include <iostream>

using namespace std;

int main(){
    int N; cin >> N;
    vector<int> positions(N);
    for(int i = 0; i < N; i++) {cin >> positions[i];}

    int maxDif = 0;
    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            maxDif = max(maxDif, abs(positions[i] - positions[j]));
        }
    }

    cout << maxDif;

    return 0;
}