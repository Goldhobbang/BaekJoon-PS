#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main(){
    int N, T;
    int x =0,y=0;
    int d=0;
    int time=0,time2=0;
    int sec;
    string rotate;
    cin >> N >> T;
    for(int i = 0; i<N;i++){
        cin >> sec >> rotate;
        time2 = sec-time;
        time = sec;
        if(d%2==0){
            if(d==0) x+=time2;
            else x-=time2;
        }
        else{
            if(d==1) y-=time2;
            else y+=time2;
        }
        if(rotate == "right"){
            d++;
            d %= 4;
        }
        else{
            if(d==0) d=3;
            else d--;
        } 
    }
    time2 = T-time;
    if(d%2==0){
        if(d==0) x+=time2;
        else x-=time2;
    }
    else{
        if(d==1) y-=time2;
        else y+=time2;
    }

    if(N==0){
        cout << T << " 0";
        return 0;
    }

    cout << x << " " << y;

    return 0;
}


