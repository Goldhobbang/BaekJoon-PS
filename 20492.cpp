#include <iostream>

using namespace std;
int main(){
    long int n;
    cin >> n;
    double a = (float)n * 0.78, b = n*0.956;
    cout << (int)a << " " <<  (int)b;
    return 0;
}