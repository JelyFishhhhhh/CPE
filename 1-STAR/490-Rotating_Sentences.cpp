#include <iostream>
#include <vector>
#include <string>           // using getline()

using namespace std;

#define AC ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

int main(){

    AC
    vector<string> paragraph;
    string tmp;
    /* init start */
    ll maxLength= 0;
    paragraph.clear();
    /* init end */
    while(getline(cin, tmp, '\n')){

        paragraph.push_back(tmp);
        maxLength= tmp.size()> maxLength? tmp.size(): maxLength;
    }

    for(int i= 0; i< maxLength; i++){

        for(int j= paragraph.size()- 1; j>= 0; j--){

            if(paragraph[j].size()> i){

                cout<< paragraph[j][i];
                continue;
            }
            cout<< ' ';
        }
        
        cout<< '\n';
    }
}