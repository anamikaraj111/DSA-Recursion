//say digits
// i/p- 412 o/p- four one two
#include <iostream>;
using namespace std;
void sayDigits(int n, string arr[]){
    //base case
    if(n==0){
        return;
    }
    int digit= n%10;
    n= n/10;
    cout<<arr[n] <<" " <<endl;

    //recursive call
    sayDigits(n, arr);

}

int main(){
string arr[10]= {"zero","one", "two", "three", "four", "five", "six" , "seven" , "eight","nine"};
int n ;
cin>>n;
sayDigits(n, arr);

}       