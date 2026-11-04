//sum of  digits 
#include<iostream>
using namespace std;
int sum(int n){
    int sum=0;
    while(n!=0){
        int digits= n%10;
        sum= sum+ digits;
        n= n/10;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    cout<< sum(n) <<endl;
}