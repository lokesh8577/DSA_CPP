#include <iostream>
using namespace std; 
string replaceSpaces(string str){
	string s1;
	for(int i=0;i<str.length();i++){
		if(str[i]==' '){
			s1.push_back('@');
			s1.push_back('4');
			s1.push_back('0');
		}
		else{
			s1.push_back(str[i]);
		}
	}
	str=s1;
	return str;
}
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    str=replaceSpaces(str);
    cout<<"String after replacing spaces with @40: "<<str;
    return 0;
}