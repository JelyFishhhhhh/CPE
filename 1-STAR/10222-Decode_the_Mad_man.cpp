#include <iostream>
#include <string>       // using getline()

using namespace std;

#define AC ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

int main(){

    AC
    string txt;
    string cryp= "`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";
    while(getline(cin, txt, '\n')){

        for(int i= 0; i< txt.size(); i++){

            if(txt[i]== ' '){

                cout<< ' ';
                continue;
            }
            cout<< cryp[cryp.find(tolower(txt[i]))- 2];
        }
        cout<< '\n';
    }
}