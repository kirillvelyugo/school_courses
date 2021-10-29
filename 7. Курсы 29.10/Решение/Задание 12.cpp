#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void countDiv (int n, vector <int> &v){
    for (int i = 1; i * i <= n; i++){
        if (i * i == n){
            v.push_back(i);
        }else if (n % i == 0){
            v.push_back(i);
            v.push_back(n / i);
        }
    }
}

int main()
{
    for (int i = 193136; i <= 193223; i++){
        vector <int> v;
        countDiv(i, v);
        if (v.size() == 6){
            sort(v.begin(), v.end());
            for (auto x: v){
                cout << x << ' ';
            }
            cout << endl;    
        }
        
    }

    return 0;
}
