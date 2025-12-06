#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char arr[20];
    int chaE;
    cin >> arr;
    int size = strlen(arr);
    chaE = arr[0]-arr[1]; 
    for(int i =1;i<size;i++){
        if(arr[i-1]-arr[i] != chaE){
            cout << "흥칫뿡!! <(￣ ﹌ ￣)>";
            return 0;
        }
    }
    cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!";

    return 0;
}