#include <iostream>
#include <vector>
#include <cstring>      // using atoi
using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long

int main(){

    fastio;
    string s_addend, s_adder;
    vector<ll> l_addend, l_adder;
    ll times, biggerSize;
    while(cin>> s_addend>> s_adder){

        if(s_addend== "0" && s_adder== "0"){

            return 0;   // end of program
        }

        /* init start */
        times= 0;
        biggerSize= (s_addend.size()> s_adder.size()? s_addend.size(): s_adder.size());
        l_addend.assign(biggerSize+ 1, 0);
        l_adder.assign(biggerSize+ 1, 0);
        /* init end */
        
        /* string 2 integer array start */
        for(int idx= s_addend.size()- 1; idx>= 0; idx--){

            l_addend[idx]= (s_addend[s_addend.size()- 1- idx]- '0');
        }
        
        for(int idx= s_adder.size()- 1; idx>= 0; idx--){

            l_adder[idx]= (s_adder[s_adder.size()- 1- idx]- '0');
        }
        /* string 2 integer array end */

        /* carrying start */
        for(int idx= 0; idx< biggerSize+ 1; idx++){

            l_addend[idx]+= l_adder[idx];
            if(l_addend[idx]>= 10){

                times++;
                l_addend[idx+ 1]+= l_addend[idx]/ 10;
                l_addend[idx]%= 10;
            }
        }
        /* carrying end */

        /* print result start */
        if(times== 0){

            cout<< "No carry operation.\n";
        }
        else if (times== 1){

            cout<< "1 carry operation.\n";
        }
        else{

            cout<< times<<" carry operations.\n";
        }
        /* print result end */
    }
}