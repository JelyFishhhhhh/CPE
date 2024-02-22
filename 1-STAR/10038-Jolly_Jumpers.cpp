#include <iostream>
#include <vector>
#include <algorithm>        // using sort()

using namespace std;

#define AC ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

int main(){

    AC
    
    ll testCase, tmp;
    vector<ll> seq, diff;
    bool flag;

    while(cin>> testCase){

        if(testCase== 1){

            cin>> tmp;
            cout<< "Jolly\n";
            continue;
        }

        flag= false;
        seq.assign(testCase, 0);
        diff.assign(testCase- 1, 0);

        for(int i= 0; i< testCase; i++){

            cin>> seq[i];

            if(i!= 0){

                diff[i- 1]= abs(seq[i]- seq[i- 1]);
                if(diff[i- 1]>= testCase || diff[i- 1]< 1){

                    flag= true;
                }
            }
        }

        sort(diff.begin(), diff.end());

        for(int i= 1; i< testCase; i++){

            if(flag || diff[i- 1]!= i){

                cout<< "Not jolly\n";
                break;
            }
            if(i== testCase- 1){

                cout<< "Jolly\n";
            }
        }
    }
}