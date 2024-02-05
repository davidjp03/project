#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int encontrarUnico(const std::vector<int>& arr){
    int resultado=0;
    for (int n : arr){
        resultado  ^= n;
    }
    return resultado;
    

}
int main(){
    vector<int> v={1,2,3,4,5,6,7,8,9,10,9,8,7,6,5,4,3,2,1};
    int unico=encontrarUnico(v);
    cout<< unico;
    return 0;
}
