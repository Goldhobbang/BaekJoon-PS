/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    for(int i = -999;i<999*2;i++){
        for(int j=-999;j<999*2;j++){
            if((a*i+b*j == c) && (d*i + e*j == f)){
                printf("%d %d",i,j);
                return 0;
            }
        }
    }
    return 0;
}