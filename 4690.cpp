#include <iostream>

using namespace std;
int main(){
    int a,b,c;
    for(int i=2;i<=100;i++){
        for(int a=2;a<100;a++)
        for(int b=a;b<100;b++)
        for(int c=b;c<100;c++)
        if(i*i*i == a*a*a+b*b*b+c*c*c){
            cout << "Cube = " << i << ", Triple = (" << a << ',' << b << ','<<c << ')' << endl;
        }
    }
    return 0;
}