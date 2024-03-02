#include <iostream>
#include <map>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

#define AC ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
#define idx(a) a[0]* pow(10, 12) + a[1]* pow(10, 9)+ a[2]* pow(10, 6)+ a[3]* pow(10, 3)+ a[4]

int main(){

    AC

    int course[5];
    ll n, mx, ans;
    map<ll, int> cnt;
    map<ll, int> ::iterator iter;

    while(cin>> n && n!= 0){
    
        cnt.clear();
        mx= 0;
        ans= 0;

        for(int i= 0; i< n; i++){

            for(int j= 0; j< 5; j++){

                cin>> course[j];
            }
            sort(course, course+ 5);
            cnt[idx(course)]++;
            mx= mx> cnt[idx(course)]? mx: cnt[idx(course)];
        }
        for(iter= cnt.begin(); iter!= cnt.end(); iter++){

            if(iter-> second== mx){

                ans+= mx;
            }
        }
        cout<< ans<< '\n';
    }
}
