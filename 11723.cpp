#include <iostream>
#include <string>
using namespace std;

int arr[21];
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    string cmd;
    int T;
    cin >> T;
    for(int i = 0 ; i < T ; i++){
        int x;
        cin >> cmd;
        if(cmd == "add"){
            cin >> x;
            arr[x-1] = x;
        }
        else if(cmd == "remove"){
            cin >> x;
            arr[x-1] = 0;
        }
        else if(cmd == "check"){
            cin >> x;
            if(arr[x-1] != x) cout << 0 << '\n';
            else cout << 1<< '\n';
        }
        else if(cmd == "toggle"){
            cin >> x;
            if(arr[x-1] != x) arr[x-1] = x;
            else arr[x-1] = 0;
        }
        else if(cmd == "all"){
            for(int j = 0 ; j <= 20;j++){
                arr[j] = j+1;
            }
        }
        else if(cmd == "empty"){
            for(int j = 0 ; j <= 20;j++){
                arr[j] = 0;
            }
        }
    }
    return 0;
}