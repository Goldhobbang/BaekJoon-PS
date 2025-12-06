#include <iostream>
#include <cmath>
using namespace std;

int arr[30000];

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;
    cin >> N;
    if(N==1){
        cout << 4 << '\n' << "1 1 0 1";
        return 0;
    }
    else if(N==2){
        cout << 4 << '\n' << "2 2 0 2";
        return 0;
    }
    else if(N==3){
        cout << 5 << '\n' << "3 2 1 0 1";
        return 0;
    }
    int num = ceil((double)N*0.6180339);
    arr[0] = N;
    arr[1] = num;
    int cnt=1;
    for(int i = 2 ; i <= N ; i++){
        arr[i] = arr[i-2] - arr[i-1];
        // cout << arr[i] << endl;
        if(arr[i] < 0){
            // arr[i]=0;
            cout << cnt+1 << endl;
            for(int j = 0; j<i;j++){
                cout << arr[j] << ' ';
            }
            cout << '\n';
            return 0;
        }
        else{
            cnt++;
        }
    }
    return 0;
}