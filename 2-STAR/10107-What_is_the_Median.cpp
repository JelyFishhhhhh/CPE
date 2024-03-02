#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define AC ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

int main(){

    AC
    vector<ll> seq;
    ll buf;

    seq.clear();

    while(cin>> buf){

        seq.push_back(buf);
        sort(seq.begin(), seq.end());

        if(seq.size()% 2){ // % 2 == 1

            cout<< seq[seq.size()/ 2]<< '\n';
        }
        else{

            cout<< (seq[seq.size()/ 2]+ seq[seq.size()/ 2- 1])/ 2<< '\n';
        }
    }
}
