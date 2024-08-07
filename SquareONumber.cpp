//Q.No - 4.
#include<iostream>
using namespace std;
int sq(int n){
int count = 0;
while(n!=0){
    n/=10;
    count++;
    }
    return count * count;
}
int main(){
    int n;
    cout<<"Enter A Number : ";
    cin>>n;
    cout<<sq(n);
}