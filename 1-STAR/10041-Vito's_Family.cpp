#include <iostream>
#include <vector>
#include <algorithm>        // if cannot include? write a simple bubble sort to alternate it
using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long

int main(){

    fastio;
    ll testCase, listLength, mid, distance;
    vector<ll> sequences;

    cin>> testCase;
    while(testCase--){

        cin>> listLength;
        
        /*  init start    */
        distance= 0;
        sequences.assign(listLength, 0);
        /*  init end    */

        for(int i= 0; i< listLength; i++){

            cin>> sequences[i];
        }

        sort(sequences.begin(), sequences.end());   // sort the sequences
        mid= sequences[listLength/ 2];              // get mid
        for(int i= 0; i< listLength; i++){

            distance+= abs(sequences[i]- mid);      // calc the distance
        }
        
        cout<< distance<< '\n';
    }
}