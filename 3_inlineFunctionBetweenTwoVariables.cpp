#include<iostream>
using namespace std;
inline int lar(int a,int b){
    if(a>b)
        return a;
    else
        return b;
}
int main(){
    int a,b;
    cout<<"Enter First Value ";
    cin>>a;
    cout<<"\n Enter Second Value ";
    cin>>b;
    lar(a,b);
    cout<<"Largest Value You Entered is "<<lar(a,b);
    return 0;
}