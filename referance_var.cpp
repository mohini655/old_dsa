#include<iostream>
using namespace std;

void update(int &j){
    j++;
}

// returning a referane variable
int& fun(int n){
    int mum = n;
    int &num = mum;
    return num;
} 

// returning a pointer 
int* func(int n){
    int *ptr = &n;
    cout<<ptr<<endl;
    cout<<ptr<<endl;
    return ptr;
}
int main(){
    cout<<"hello world"<<endl;

    // Referance variable -- same memory location but different names
    int i = 5;
    int & j = i;
    cout<<j<<endl;
    j++;
    cout<<i<<endl;

    // pass by referance 
    int n = 9;
    cout<<"before "<<n<<endl;
    update(n);
    cout<<"after "<<n<<endl;

    // we can't return a referance var and pointer in function
    

    // dynamic memory allocation
    int k;
    cout<<"enter length of array"<<endl;
    cin>>k;
    int *arr = new int[k]; // creation of array in heap memory
   // int arr[k]; -- in stack
    int o =0;
    while(o < k){
        arr[o] = o;
        o++;
    }
    int m =0;
    while(m < k){
        cout<<m[arr]<<" ";
        m++;
    }cout<<endl;
    delete []arr;
    // so we have to clear the dynamic or heap memmory bcoz they don't clear automatic as in stack
   /* while(true){
        int *ptr = new int;
        *ptr = p;
        p++;
        cout<<*ptr<<" ";
    }*/
    int *a = new int;
    *a = 6;
    cout<<*a<<endl;
    delete a;
   //  cout<<*a<<endl; -- after deleting it gives garbage value
    // delete an array
    cout<<"before"<<endl;
    int *ar = new int[7];
    for(int i = 0;i<7;i++){
        ar[i] = i;
    }
    delete []ar;
    


    cout<<"completed"<<endl;


    return 0;
}