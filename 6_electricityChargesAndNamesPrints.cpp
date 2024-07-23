#include<iostream>
using namespace std;
int main(){
    int units,ch,rate=1,belunit,exrate;
    char name[20]={};
    cout<<"Enter Name Here ";
    cin>>name;
    cout<<"\n Enter Unite Here ";
    cin>>units;
    if(units<=100){
        if(units<=84){
            rate=50;
            cout<<"Mr/Mrs "<<name<<" Your Electricity Bill Total Charge Is "<<rate<<endl;
            return 0;
        }
        rate=units*0.6;
        cout<<"Mr/Mrs "<<name<<" Your Electricity Bill Total Charge Is "<<rate<<endl;
    }
    else if(units<100||units<=300){
        belunit=units-100;
        rate=60+belunit*0.8;
        cout<<"Mr/Mrs "<<name<<" Your Electricity Bill Total Charge Is "<<rate<<endl;
    }
    else if(units<300||units<=600){
        belunit=units-300;
        rate=220+belunit*0.9;
        cout<<"Mr/Mrs "<<name<<" Your Electricity Bill Total Charge Is "<<rate<<endl;
            if(rate>=300){
                exrate=rate*15/100;
                cout<<"Exta Charge 15% "<<exrate<<endl;
                cout<<"Grand Total "<<rate+exrate;
            }
    }
    return 0;
}