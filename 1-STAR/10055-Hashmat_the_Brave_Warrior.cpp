#include <iostream>
using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long

int main(){

    fastio;
    ll allies, opponents;
    while(cin>> allies>> opponents){

        cout<< abs(allies- opponents)<< '\n';
    }
}