#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    int N[1000];
    int p,sum=0,cnt=0;
    cin >> p;
    for(int i=0;i<p;i++) scanf("%d",&N[i]);
    sort(N,N+p);
    for(int i=0;i<p;i++){
        sum+=N[i];
        cnt+=sum;
    }
    cout << cnt;
    return 0;
}