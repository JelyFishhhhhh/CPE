#include <iostream>
#include <cmath>        // using pow()
#include <iomanip>      // using setprecision()

using namespace std;

#define AC ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

// Formula: pow(1-P, nth- 1)* P/ (1- pow(1-P, people))

int main(){

    AC
    double P;
    ll testCase, people, nth;
    while(cin>> testCase){

        for(int i= 0; i< testCase; i++){

            cin>> people>> P>> nth;
            if(P== 0){

                cout<< "0.0000\n";
                continue;
            }
            cout<< fixed<< setprecision(4)<< pow(1-P, nth- 1)* P/ (1- pow(1-P, people))<< '\n';
        }
    }

}