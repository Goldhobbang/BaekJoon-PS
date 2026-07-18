#include <iostream>
#include <algorithm>
using namespace std;
int num[10];

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;
    cin >> N;
    
    int inmax = -1;
    int ansdex = 0;
    for(int i = 0 ; i < N ; i ++){
        int a,b;
        cin >> a >> b;
        for(int j = 0 ; j <= 6 ; j++){
            if(j != a && j != b){
                num[j] = 0;
            }
        }
        num[a]++;
        num[b]++;
        if(a==b) num[a]--;

        // for(int j = 5 ; j >=1 ; j--) cout << num[j] << ' ';
        // cout << '\n';
        // cout << inmax << ' ' << ansdex << '\n';
        for(int j = 5 ; j >=1 ; j--){
            if(inmax < num[j]){
                inmax = num[j];
                ansdex = j;
            }
        }
    }
    cout << inmax << ' ' << ansdex;
    return 0;
}