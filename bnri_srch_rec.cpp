#include<iostream>
using namespace std;
bool is_sorted(int arr[], int n){
    if(n == 0 || n == 1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    return is_sorted(arr + 1, n - 1);
}
int sum(int arr[], int n){
    if(n == 1){
        return arr[0];
    }
    return arr[0] + sum(arr + 1, n-1);
}
// linear search in recursion
bool search(int arr[] , int key, int n ){
    if(n == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    search(arr + 1,key , n-1);
}
// binary search in recursion
bool binary_search(int arr[],int s,int e,int key){
    int mid = s+(e-s)/2;
    if(s>e){
        return false;
    }
    if(arr[mid] == key){
        return true;
    }
    else if(arr[mid] < key){
        return binary_search(arr,mid + 1,e,key);
    }
    else{
        return binary_search(arr,s,mid-1,key);
    }
}
int main()
{
    int arr[] = {2,4,8,8,10};
    // is it sorted or not
    bool yes = is_sorted(arr , 5);
    if(yes){
        cout<<"sorted"<<endl;
    }
    else{
        cout<<"not sorted"<<endl;
    }
    cout<<sum(arr, 5)<<endl;
    bool asn = search(arr, 6, 5);
    if(asn){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    int array[] = {2,4,5,6,8,12,34};
    int key = 6;
    bool ans = binary_search(array,0,6,key);
    if(ans){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is not present"<<endl;
    }

} 