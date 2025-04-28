#include<iostream>
#include <vector>
using namespace std;

    int count_word(string str){
        int n = str.length();
        int count=1;
        for(int i=0;i<n;i++){
            if(str[i]==' '){
                count++;
            }
        }
        return count;
    }
    int mostWordsFound(vector<string>& sentences) {
        int count=-1;
       for(int i=0;i<sentences.size();i++){
        int number = count_word(sentences[i]);
        if(number>count){
            count= number;
        }
       } 
       return count;
}
int main(){
    vector<string> sentences = {"Hello world", "This is a test", "Maximum words found in this sentence"};
    cout << mostWordsFound(sentences) << endl;
    return 0;
} 