#include <iostream>
#include <string.h>

using namespace std;
int main(){
    char a[7];
    cin >> a;
    long long int ans=0;
    long long int sum=1;
    int size = strlen(a);
    for(int i=0;i<size;i++){
        if('A' <= a[i] && a[i] <= 'F'){
            sum = a[i]-55;
            for(int j=0;j<size-i-1;j++){
                sum*=16;
            }
            ans+=sum;
        }

        else{
            sum=a[i]-48;
            for(int j=0;j<size-i-1;j++){
                sum*=16;
            }
            ans+=sum;
        }
        sum=1;
    }
    cout << ans;
    return 0;
}