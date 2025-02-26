#include<iostream>
using namespace std;
// int main(){
//     char name[10];
//     cout<<"enter your name"<<endl;
//     cin>>name;
//     name[2]='\0';
//     cout<<name;
//     return 0;
// }
int getlength(char a[]){
    int count=0;
    while(a[count]!='\0'){
        count++;
    }
    return count;
}

void reverse_char_array(char a[]){
    int start=0,end=getlength(a)-1;
       while(start<end){
        swap(a[start++],a[end--]);
       } 
}

int main(){
    char name[10];
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<name<<endl;
    cout<<"length of name is "<<getlength(name)<<endl;
    reverse_char_array(name);
    cout<<"new string is "<<name<<endl;
    return 0;
}