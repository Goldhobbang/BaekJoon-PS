#include <iostream>

int gumsa(double h, double b);

using namespace std;
int main(){
    double hei,wei;
    int T,ans[201];
    cin >> T;
    for(int i =0;i<T;i++){
        cin >> hei >> wei;
        double H = hei / 100;
        double bmi = wei/(H*H);
        ans[i] = gumsa(hei,bmi); 
    }

    for(int i =0;i<T;i++){
        cout << ans[i] << endl;
    }

    return 0;
}
int gumsa(double h, double b){
    if(h < 140.1) return 6;
    else if(h < 146) return 5;
    else if(h < 159) return 4;
    else if(h < 161){
        if(b<16 || b>=35) return 4;
        else return 3;
    }
    else if(h < 204){
        if(b<16 || b>=35) return 4;
        else if(b < 18.5 || b >= 30) return 3;
        else if(b < 20 || b>=25) return 2;
        else return 1;
    }
    else return 4;
}