#include <iostream>

using namespace std;
int main(){

    int n,cnt=0;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=i;j!=0;j/=10){
            if(j%10==3 ||j%10==6 || j%10==9 ) cnt++;
        }
    }
    cout << cnt;
    return 0;
}