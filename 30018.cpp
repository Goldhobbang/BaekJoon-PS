#include <iostream>

using namespace std;
int main(){
    int a[101];
    int b[101];
    int cnt=0;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i=0;i<n;i++){
        cin >> b[i];
        if(b[i] > a[i]){
            cnt+=b[i]-a[i];
            b[i]-=cnt;
        }
        else if(b[i] < a[i]){
            cnt+=a[i]-b[i];
            b[i]+=cnt;
        }
    }
    return 0;
}