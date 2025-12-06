#include <iostream>

using namespace std;
int main(){
    int n,x,cnt=0;
    cin >> n >> x;
    int arr[10001];
    int ans[10001];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i] < x){
            ans[cnt] = arr[i];
            cnt++;
        }
    }
    for(int i=0;i<cnt;i++){
        cout << ans[i] << " ";
    }
    return 0;
}