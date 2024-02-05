#include <iostream>
#include <vector>
#include <string>
using namespace std;

char findNaughtyStep(const string& original, const string& modified){
    int oriLen=original.length();
    int modLen=modified.length();
    int minLen=min(oriLen,modLen);
    for(int i=0;i<minLen;i++){
        if(original[i]!=modified[i] && oriLen<modLen){
            return modified[i];
        }else if(original[i]!=modified[i] && oriLen>modLen){
            return original[i];
        }
    }
    if(oriLen<modLen){
        return modified[modified.length()-1];
    }else if(oriLen>modLen){
        return original[original.length()-1];
    }
    return ' ';
}

int main() {
    string original1 = "abcd";
    string modified1 = "abcde";
    cout << findNaughtyStep(original1, modified1) << endl; 

    string original2 = "stepfor";
    string modified2 = "stepor";
    cout << findNaughtyStep(original2, modified2) << endl; 

    string original3 = "abcde";
    string modified3 = "abcde";
    cout << findNaughtyStep(original3, modified3) << endl; 

    return 0;
}