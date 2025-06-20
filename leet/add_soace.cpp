#include<iostream>
#include<vector>
using namespace std;
string addSpaces(string s, vector<int>& spaces) {
    int space=0;
    string output="";
    for(int i=0;i<s.length();i++){
        if(spaces[space]==i){
            output=output+" "+s[i];
            space++;
        }
        else{
            output+=s[i];
        }
    }
    
    return output;
    }
    int main(){
        string s="LeetcodeHelpsMeLearn";
        vector<int>spaces={8,13,15};
        string ans=addSpaces(s,spaces);
        cout<<ans<<endl;
        return 0;

    }