#include <iostream>
int isYun(int Y);
using namespace std;
int main(){
    int T,y[1213],m[1213],ans,day;
    cin >> T;
    for(int i =0;i<T;i++){
        cin >> y[i] >> m[i];
    }
    for(int i = 0;i<T;i++){
        switch(m[i]){
            case 1:
                cout << y[i]-1 << " 12 31" << endl;
                break;
            case 2:
                cout << y[i] << " 1 31" << endl;
                break;
            case 3:
                if(isYun(y[i])) cout << y[i] << " 2 29" << endl;
                else cout << y[i] << " 2 28" << endl;
                break;
            case 4:
                cout << y[i] << " 3 31" << endl;
                break;
            case 6:
                cout << y[i] << " 5 31" << endl;
                break;
            case 9:
                cout << y[i] << " 8 31" << endl;
                break;
            case 8:
                cout << y[i] << " 7 31" << endl;
                break;
            case 11:
                cout << y[i] << " 10 31" << endl;
                break;
            default:
                cout << y[i] << " " << m[i]-1 << " 30" << endl;
        }

    }
    return 0;
}

int isYun(int Y){
    if(Y%100 != 0 && Y%4==0) return 1;
    else if(Y%400==0) return 1;
    else return 0;
}