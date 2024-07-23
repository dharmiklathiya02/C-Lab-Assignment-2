#include<iostream>
using namespace std;
inline int area(int l,int w){
    return (l*w);
}
int main(){
    int l,w;
    cout<<"Enter Lenght Of Rectangle";
    cin>>l;
    cout<<"\n Enter Width Of Rectangle";
    cin>>w;
    area(l,w);
    cout<<"Area Of Rectangle Is "<<area(l,w);
    return 0;
}