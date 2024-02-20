#include <iostream>
#include <string>       // using to_string()

using namespace std;

#define AC ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

int main(){

    AC
    string num;
    ll sum;
    while(cin>> num && num!= "0"){

        while(num.size()> 1){
            
            sum= 0;
            for(int i= 0; i< num.size(); i++){

                sum+= num[i]- '0';
            }
            num= to_string(sum);
        }
        cout<< num<< '\n';
    }
}
