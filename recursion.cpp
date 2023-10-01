#include<iostream>
using namespace std;
int factorial(int n){
    if(n == 0){
        return 1;
    }
    int small  = factorial(n-1);
    int big = n * small;
    return big;
}
int pow(int n){
    if(n == 0){
        return 1;
    }
    int ans = 2 * pow(n-1);
    return ans;
}
void count(int n){
    if(n == 0){
        return;
    }
    count(n-1);
    cout<<n<<endl;
}
void series(int n,int k){
    int a = n;
    cout<<n<<" ";
    if(n <= 0){
        return;
    }
    series(n-k, k);
    cout<<n<<" ";
}
int fact(int n){
    if(n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    int ans = fact(n-1) + fact(n-2);
    return ans;
}
void say_digit(int n, string arr[]){
    if(n == 0){
        return;
    }
    int rem = n %10;
    n = n/10;
    // cout<<arr[rem]<<" ";
    say_digit(n, arr);
    cout<<arr[rem]<<" ";
}
int main(){
    // Recursion
    cout<<factorial(5)<<endl;
    cout<<pow(10)<<endl;
    
    count(10);
    series(5,2);
    cout<<endl;
    int term ;
    cout<<"enter term"<<endl;
    cin>>term;
    cout<<fact(term)<<endl;

    string arr[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int num;
    cout<<"enter number"<<endl;
    cin>>num;
    say_digit(num, arr);
    cout<<endl;

}