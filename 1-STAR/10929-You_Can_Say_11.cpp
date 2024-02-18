#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

#define AC ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

int main(){

    AC
    string num;
    vector<ll> digitSum;
    while(cin>> num){

        if(num== "0"){

            return 0;
        }
        digitSum.assign(2, 0);
        for(int i= 0; i< num.size(); i++){

            digitSum[i%2]+= (num[i]- '0');
        }
        if(abs(digitSum[1]- digitSum[0])% 11== 0){

            cout<< num<< " is a multiple of 11.\n";
        }
        else{

            cout<< num<< " is not a multiple of 11.\n";
        }
    }
}