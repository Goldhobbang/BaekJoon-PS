#include <iostream>
#include <string.h>
using namespace std;

bool is_palindrome(string str) {
    bool flag = true; 
    for (int i = 0; i < str.size(); i++) { // 처음부터 끝까지 검사
        if (str[i] != str[str.size()-1-i]) { // 문자열이 다를 경우
            flag = false; // 팰린드롬이 
            break;
        }
    }
 
    return flag;
}

bool is_allsame(string arr, int size){
    for(int i = 1 ; i < size; i++){
        if(arr[i] != arr[0]){
            return false;
        }
    }
    return true;
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    char arr[500301];
    cin >> arr;

    int size=strlen(arr);
    if(size == 1){
        cout << -1;
        return 0;
    }
    if(is_palindrome(arr)){
        if(is_allsame(arr, size)){
            cout << -1;
            return 0;
        }
        cout << size-1;
    }
    else cout << size;
    return 0;
}