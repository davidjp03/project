#include <iostream>
#include <vector>
#include <string>
using namespace std;

string buildTree(const string& adornos, int altura){
    string tree;
    int adornosLen=adornos.length();
    for(int i=1;i<=altura; ++i){
        string line;
        for(int j=0;j<i;++  j){
            char adorno=adornos[j%adornosLen];
            line+=adorno;
            if (j < i - 1) {
                line += ' ';
            }
        }
        int numSpaces=altura-i;
        line=string(numSpaces,' ')+line;
        tree+=line + '\n';
    }
    int trunkSpaces=altura-1;
    string trunk=string(trunkSpaces,' ');
    tree+=trunk;
    return tree;
}
int main() {
    string adornos = "*@o";
    cout << buildTree(adornos, 3);

    

    return 0;
}