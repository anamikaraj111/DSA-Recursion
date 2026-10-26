//Fibonacci number 
//nth fibonacci number
#include<iostream>
using namespace std;
int getFibonnaci(int n){
    //base case
    if(n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    int ans= getFibonnaci(n-1) + getFibonnaci(n-2);
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<getFibonnaci(n)<<endl;
}
