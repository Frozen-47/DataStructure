#include<iostream>
using namespace std;
int main(){
    int arr1[] = {1,2,3,4,5,6,7,8,9};
    int arr2[sizeof(arr1) / sizeof(arr1[0])];
    for(int i = 0 ;i < sizeof(arr1) / sizeof(arr1[0]);i++ ){
        arr2[i] = arr1[i];
    } 
    for(int i = 0 ;i < sizeof(arr1) / sizeof(arr1[0]);i++ ){
        cout << arr2[i] << " \n";
    } 
    return 0;
}