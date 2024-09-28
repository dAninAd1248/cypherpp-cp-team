#include <string>
#include <iostream>

using namespace std;

int main(){

    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    string city; cin >> city;
    int N; cin >> N;

    for(int i = 0; i < N; i++){
        string name; cin >> name;
        int start = 0;
        int end = name.size() - 1;
        int cnt = 0;

        while(end >= start){
            string subString = name.substr(start, end - start + 1);
            if(city.find(subString) != -1){
                cnt++;
                start = end + 1;
                end = name.size() - 1;
            }
            else { end--; }
        }
        if(cnt == 0) cnt--;
        cout << cnt << endl;

    }

    return 0;
}