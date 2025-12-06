#include <iostream>
#include <vector>
using namespace std;


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;
    cin >> N;
    bool arr[1000001];
    long long cnt=0,cnt1=0;
    int base=0,base1=0;
    for(int i = 0 ; i < N; i++){
        long long a;
        cin >> a;
        if(a % 2 == 0){
            arr[i] = 0;
            base1++;
            cnt+=base;
        }
        else{
            base++;
            cnt1+=base1;
            arr[i] = 1;
        }
    }
    cout << min(cnt,cnt1) << "\n";
    return 0;
}