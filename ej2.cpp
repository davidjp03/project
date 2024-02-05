#include <iostream>
#include <vector>
using namespace std;
void primos(int n){
    vector<bool> esPrimo(n+1,true);
    esPrimo[0]=esPrimo[1]=false;
    for (int i = 2; i*i <=n; i++)
    {
        if (esPrimo[i])
        {
            for(int j=i*i;j<=n;j+=i){
                esPrimo[j]=false;
            }
        }
        
    }
    for(int i=2;i<=n;i++){
        if(esPrimo[i]){
            cout<<i<<" ";
        }
    }

}
int main()
{
    primos(100);
    return 0;
}
