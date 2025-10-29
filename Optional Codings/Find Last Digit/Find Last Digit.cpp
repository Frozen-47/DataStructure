#include<iostream>
using namespace std;
int main(){
    int num,pow,result=1,last;
    cout<<"Enter the Number and it's Power :";
    cin>>num>>pow;
    for(int i = 1;i <= pow;i++){
        result = result*num;
    }
    last = num % 10;
    cout<<last;
    return 0;
}