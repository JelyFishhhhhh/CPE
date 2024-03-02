#include <iostream>

using namespace std;

#define AC ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

int main(){

    AC
    ll s, d;
    while(cin>> s>> d){

        while(true){

            d-= s;
            if(d<= 0){

                cout<< s<< '\n';
                break;
            }
            else{

                s++;
            }
        }
    }

}
