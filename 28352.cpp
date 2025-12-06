#include <iostream>

using namespace std;
int main(){
    long long int A=1;
    int n;
    cin >> n;
    while(n>0) A*=n--;
    cout << A/604800;
    return 0;
}