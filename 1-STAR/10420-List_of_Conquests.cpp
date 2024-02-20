#include <iostream>
#include <vector>
#include <string>       // using getline()
#include <algorithm>    // using sort()

using namespace std;

#define AC ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

int main(){

    AC
    vector<string> country;
    string tmp;
    ll testCase;
    while(getline(cin, tmp, '\n')){
        testCase= stoi(tmp);
        country.assign(testCase, "\0");
        for(int i= 0; i< testCase; i++){

            getline(cin, tmp, '\n');
            country[i]= tmp.substr(0, tmp.find(" "));
        }
        sort(country.begin(), country.end());

        for(int i= 0; i< testCase; ){

            ll count= 1;
            int j;
            for(j= i+ 1; j< testCase; j++){

                if(country[j]!= country[i]){

                    break;
                }
                count++;
            }
            cout<< country[i]<< ' '<< count<< '\n';
            i+= count;
        }
    }
}