/*
Найдите все натуральные числа, N, принадлежащие отрезку [150 000 000; 300 000 000], 
которые можно представить в виде N = 2m • 3n, где m – чётное число, n – нечётное число. 
В ответе запишите все найденные числа в порядке возрастания, а справа от каждого числа – 
сумму m+n.
*/

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main (){
    map <int, int> mp;
    for (int n = 0; n <= 100; n++){
        for (int m = 0; m <= 100; m++){
            if (m % 2 == 0 && n % 2 == 1){
                int x = pow(2, m) * pow(3, n);
                if (x >= 150000000 && x <= 300000000){
                    cout << x << endl;
                    mp[x] = m + n;
                }
            }
        }
    }
    for (auto x: mp){
        cout << x.first << ' ' << x.second << endl;
    }
    
}