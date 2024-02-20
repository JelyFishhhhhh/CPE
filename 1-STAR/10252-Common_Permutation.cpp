#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define AC ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

int main(){

    AC
    string strA, strB;
    vector<ll> alphaListA, alphaListB;
    while(
            getline(cin, strA, '\n'), 
            getline(cin, strB, '\n')){
        
        if(strA== " " || strB== " "){

            cout<< '\n';
        }
        
        alphaListA.assign(26, 0);
        alphaListB.assign(26, 0);

        for(int i= 0; i< strA.size(); i++){

            alphaListA[strA[i]- 'a']++;
        }
        
        for(int i= 0; i< strB.size(); i++){

            alphaListB[strB[i]- 'a']++;
        }

        for(int i= 0; i< 26; i++){

            for(int j= min(alphaListA[i], alphaListB[i]); j> 0; j--){

                cout<< char(i+ 'a');
            }
        }
        cout<< '\n';
    }
}
