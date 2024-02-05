#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

int findFirstRepeated(const vector<int>& giftIds){
     unordered_set<int> seen;
     for(int id: giftIds){
        if(seen.find(id)!=seen.end()){ 
            return id;
        }
        seen.insert(id);
     }
     return -1;
}

int main(){
    
    vector<int> giftIds1 = {2,1,3,5,3,2};
    int firstRepeatedId1 = findFirstRepeated(giftIds1);
    cout << firstRepeatedId1 << endl; 

    vector<int> giftIds2 = {1,2,3,4};
    int firstRepeatedId2 = findFirstRepeated(giftIds2);
    cout << firstRepeatedId2 << endl; 

    vector<int> giftIds3 = {5,1,5,1};
    int firstRepeatedId3 = findFirstRepeated(giftIds3);
    cout << firstRepeatedId3 << endl; 
    return 0;
}
