#include <iostream>
#include <iomanip>

using namespace std;

#define AC ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

ll filter[4]={10000000, 100000, 1000, 100};
string unit[4]={"kuti", "lakh", "hajar", "shata"};

void printer(ll buf){

    if(buf>= filter[0]){

        printer(buf/ filter[0]);
        cout<< " "<< unit[0];
        buf%= filter[0];
        
    }
    if(buf>= filter[1]){

        printer(buf/ filter[1]);
        cout<< " "<< unit[1];
        buf%= filter[1];
        
    }
    if(buf>= filter[2]){

        printer(buf/ filter[2]);
        cout<< " "<< unit[2];
        buf%= filter[2];

    }
    if(buf>= filter[3]){

        printer(buf/ filter[3]);
        cout<< " "<< unit[3];
        buf%= filter[3];
        
    }
    if(buf){

        cout<< " "<< buf;
        return;
    }
}

int main(){

    AC
    ll banglaNum, testCase= 1;
    while(cin>> banglaNum){
        
        cout<< setw(4)<< testCase++<< ".";
        if(banglaNum){

            printer(banglaNum);
        }
        else{

            cout<< " 0";
        }
        cout<< '\n';
    }
}