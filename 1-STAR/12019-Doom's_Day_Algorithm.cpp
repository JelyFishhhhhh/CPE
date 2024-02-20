#include <iostream>

using namespace std;

#define AC ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

int main(){

    AC
    ll  days[13]= {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, 
        sumDay, mon, mDay, testCase;
    string calender[7]= {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
    while(cin>> testCase){
        while(testCase--){
            
            sumDay= 0;
            cin>> mon>> mDay;
            for(int i= 0; i< mon; i++){

                sumDay+= days[i];
            }
            sumDay+= mDay;

            cout<< calender[sumDay% 7]<< '\n';
        }
    }

}