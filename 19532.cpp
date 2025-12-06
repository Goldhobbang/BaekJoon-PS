#include <iostream>

using namespace std;
int main(){
    double a,b,c,d,e,f;
    double x,y;
    cin >> a >> b >> c >> d >> e >> f;
    if(a != 0 && b != 0 && d != 0 && e != 0){
        y = (c/a - f/d)/(b/a-e/d);
        x = (c-b*y)/a;
    }
    else if(a==0){
        y = c/d;
        x = (f-e*(y))/d;
    }
    else if(b==0){
        x = c/a;
        y = (f-d*(x))/d;
    }
    else if(d==0){
        y = f/e;
        x = (c-b*y)/a;
    }
    else if(e==0){
        x = f/d;
        y = (c-a*(x))/b;
    }
    int A = 0/5;
    cout << x << " " << y << A;
    return 0;
}