#include <iostream>
#include <cmath>
using namespace std;

int number = 1000007; // 구하고자 하는 소수의 범위
int pelprime[1000007];

void primeNumberSieve()
{
    // primeNum 배열 초기화
    for (int i = 2; i <= number; i++)
    {
        pelprime[i] = i;
    }

    for (int i = 2; i <= sqrt(number); i++)
    {
        // pelprime[i] 가 0이면 이미 소가 아니므로 continue
        if (pelprime[i] == 0)
            continue;
        // i*k (k<i) 까지의 수는 이미 검사했으므로 j는 i*i 부터 검사해준다.
        for (int j = i * i; j <= number; j += i)
            pelprime[j] = 0;
    }
    // 소수 출력
    for (int i = 2; i <= number; i++)
    {
        if (pelprime[i] != 0)
            printf("%d\n", pelprime[i]);
    }
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;

    cin >> N;
    primeNumberSieve();
    return 0;
}
