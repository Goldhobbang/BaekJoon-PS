#include <iostream>
#include <string.h>
using namespace std;

char arr1[55];
char arr2[55];

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> arr1 >> arr2;
    int size = max(strlen(arr1),strlen(arr2));
    int size2 = min(strlen(arr1),strlen(arr2));
    if(arr1[strlen(arr1)-1]!=arr2[strlen(arr2)-1]){
        cout << 0;
        return 0;
    }
    for(int i = 0 ; i<size*10; i++){
        if(arr1[i%size2] != arr2[i%size] && arr2[i%size2] != arr1[i%size]){
            cout << 0;
            return 0;
        }
    }
    cout << 1;
    return 0;
}