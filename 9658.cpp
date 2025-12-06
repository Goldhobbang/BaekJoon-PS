#include <iostream>
using namespace std;


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;

    cin >> N;
    if(N==1 || N==3)
        cout << "CY";
    else
        cout << "SK";
    return 0;
}