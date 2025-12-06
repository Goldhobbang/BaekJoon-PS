#include <iostream>

using namespace std;
int main(){
    int arr[101];
    int n,what;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cin >> what;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i] == what){
            cnt++;
        }
    }
    
    cout << cnt;
    return 0;
}