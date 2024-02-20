#include <iostream>
#include <string>

using namespace std;

#define AC ios::sync_with_stdio, cin.tie(0), cout.tie(0);
#define ll long long

int main(){

    AC
    ll markCounter= 0;
    string txt;
    while(getline(cin, txt, '\n')){

        for(int i= 0; i< txt.size(); i++){

            if(txt[i]== '\"'){
                markCounter++;
                // left quote mark
                if(markCounter% 2== 1){

                    cout<< "``";
                }
                else{

                    cout<< "\'\'";
                }
            }
            else{

                cout<< txt[i];
            }
        }
        cout<< '\n';
    }
}