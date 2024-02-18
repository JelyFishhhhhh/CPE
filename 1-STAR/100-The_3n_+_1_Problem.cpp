#include <iostream>
#include <algorithm>    // std::swap, std::max, std::min

using namespace std;

#define AC ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

ll getLen(int buf){

    ll length= 1;
    while(buf!= 1){

        if(buf% 2== 1){

            buf= 3* buf + 1;
        }
        else{

            buf/= 2;
        }
        length++;
    }
    return length;
}

int main(){

    AC
    ll i, j, maxLen;
    while(cin>> i>> j){

        maxLen= 0;
        cout<< i<< ' '<< j<< ' ';
        if(j< i){

            swap(i, j);
        }   
        // (i < j) must be established.
        for(int tra= i; tra<= j; tra++){

            maxLen= max(getLen(tra), maxLen);
        }
        cout<< maxLen<< '\n';
    }

}