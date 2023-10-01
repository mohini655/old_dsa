#include<iostream>
using namespace std;
void print(string s){
    for(int i = 0;i<s.size();i++){
        cout<<s[i];
    }cout<<endl;
}
void reverse(string &s,int st,int e){
    if(st>e){
        return;
    }
    swap(s[st],s[e]);
    print(s);
    reverse(s,st +1,e-1);
}
int main(){
    // usind recursion in string
    string s = "mohini";
    int e = s.size()-1;
    reverse(s,0,e);
    print(s);

}