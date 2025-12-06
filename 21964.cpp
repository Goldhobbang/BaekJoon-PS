    #include <iostream>
    #include <string.h>
    #include <queue>
    using namespace std;

    int main()
    {
        int n;
        char str[100001];
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> str[i];
        }
        for(int i=n-5;i<n;i++){
            cout << str[i];
        }
        return 0;
    }