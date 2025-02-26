#include<iostream>
using namespace std;
bool checkEqual(int a[26],int b[26]){
    for(int i=0;i<26;i++){
        if(a[i]!=b[i]){
            return 0;
        }
    }
    return 1;
}
bool permutations(string s1, string s2) {
    int count1[26]={0};
       for(int i=0;i<s1.length();i++){
        int index = s1[i]-'a';
        count1[index]++;
       }

       int i=0;
       int count2[26]={0};
       int window_size = s1.length();

       while(i < window_size && i<s2.length()){
        int index = s2[i]-'a';
        count2[index]++;
        i++;
       }
        if(checkEqual(count1,count2))return 1;

        while(i<s2.length()){
            char ch=s2[i];
            int index = ch-'a';
            count2[index]++;
            char old_ch = s2[i-window_size];
            index = old_ch-'a';
            count2[index]--;
            i++;
            if(checkEqual(count1,count2))return 1;
        }
        return false;
    
 }
 int main(){
    string s1 = "ab";
    string s2 = "eidbaoaoo";
    cout<<permutations(s1,s2)<<endl;
    return 0;
 }