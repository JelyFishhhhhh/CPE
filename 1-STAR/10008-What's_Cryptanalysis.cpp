#include <iostream>
#include <vector>
#include <string>       // using getline()
#include <algorithm>    // using max_element()

using namespace std;

#define AC ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

int main(){

    AC
    ll testCase;
    string tmp;
    vector<ll> counter;

    while(getline(cin, tmp, '\n')){

        testCase= stoi(tmp);

        counter.assign(26, 0);
        for(int i= 0; i< testCase; i++){

            getline(cin, tmp, '\n');
            for(int j= 0; j< tmp.size(); j++){
                if(!isalpha(tmp[j])){

                    continue;
                }
                counter[toupper(tmp[j])- 'A']++;
            }
        }
        while(*max_element(counter.begin(), counter.end())> 0){

            ll maxNum= *max_element(counter.begin(), counter.end());
            for(int i= 0; i< 26; i++){
                if(counter[i]== maxNum){

                    cout<< char('A'+ i)<< ' '<< counter[i]<< '\n';
                    counter[i]= 0;
                }
            }
        }
    }
}