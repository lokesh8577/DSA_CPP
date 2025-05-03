#include<iostream>
using namespace std;

int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
    int ans=0;
    int index;
    string array[3]={"type","color","name"};
    for(int i=0;i<3;i++){
        if(array[i]==ruleKey){
            index=i;
            break;
        }
    }
    for(int i=0;i<items.size();i++){
        if(items[i][index]==ruleValue){
            ans++;
        }
    }
    return ans;
}
int main(){
    vector<vector<string>> items = {
        {"phone", "blue", "pixel"},
        {"computer", "silver", "lenovo"},
        {"phone", "gold", "iphone"}
    };

 
    string ruleKey = "color";
    string ruleValue = "silver";

    cout<<countMatches(items,ruleKey,ruleValue)<<endl;
    return 0;
}