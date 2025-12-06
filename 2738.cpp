#include <iostream>

using namespace std;
int main(){
    int n,m;
    int arr1[101][101];
    int arr2[101][101];
    int ans[101][101];
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr2[i][j];
            ans[i][j] = arr2[i][j] + arr1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}