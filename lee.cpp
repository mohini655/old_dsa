#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define min(a,b) ((a<b) ? a:b)
inline bool sign(int n){
    return (n>=0)? true:false;
}
#define signi(n) ((n>=0)? true:false)
int main(){
    #define pi 3.14
    vector<string> v = {"mohini","lodhi"};
    cout<<v[0][5]<<endl;
    if(v[0][5] == 'm'){
        cout<<"no"<<endl;
    }
    else{
        cout<<"yes"<<endl;
    }
    int radius = 5;
    float area = pi * radius * radius;
    cout<<"area is "<<area<<endl;
    printf("area is %f \n",area);
    int a = 4,b = 5;
    cout<<min(a,b)<<endl;
    int c = 3,d = 8;
    int max = 0;
    max = (c>d)? c:d;
    cout<<max<<endl;
    bool positive = true;
    int n = 7;
    positive = (n>=0)? true:false;
    if(positive){
        cout<<"this number is positive"<<endl;
    }
    else{
        cout<<"this is negative"<<endl;
    }
    cout<<signi(0)<<endl;
    int X = 4;
    int temp[32] ={0};
    int i =0;
        while(X != 0){
            temp[i] = X%2;
            X = X/2;
            i++;
        }
    
        int s = 0;
        int e = 31;
        while(s<=e){
            swap(temp[s],temp[e]);
            s++;
            e--;
        }
        int ans = 1;
        int sum = 0;
    for(int i = 0;i<32;i++){
        cout<<temp[i]<<" ";
        if(temp[i] ==1){
            int n = i;
            while(n >0){
                ans = ans * 2;
                n--;
            }
        }
        sum = sum +ans;
    }cout<<endl;
    cout<<sum<<endl;

    

}