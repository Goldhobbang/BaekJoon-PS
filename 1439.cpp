#include <iostream>
#include <vector>
#include <string.h>
#include <cmath>
using namespace std;


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int cnt=0;
    char arr[1000001];
    cin >> arr;
    for(int i = 0 ; i <= strlen(arr); i++){
        if(i > 0){
            if(arr[i-1] != arr[i]){
                cnt++;
            }
        }
    }
    cout << cnt/2 << "\n";

    return 0;
}