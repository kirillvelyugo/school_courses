/*
Напишите программу, которая ищет среди целых чисел, принадлежащих числовому отрезку
[190061; 190080], числа, имеющие ровно 4 различных НЕЧЁТНЫХ делителя. 
Выведите эти четыре делителя для каждого найденного числа в порядке убывания.
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void findDiv (int n, vector <int> &v){
    for (int i = 1; i * i <= n; i++){
        if (i % 2 != 0 && i * i == n){
            v.push_back(i);
        }else if (n % i == 0){
            if (i % 2 != 0){
                v.push_back(i);    
            }
            if ((n / i) % 2 != 0){
                v.push_back(n / i);    
            }
        }
    }
}

int main()
{
    for (int i = 190061; i <= 190080; i++){
        vector <int> v;
        findDiv(i, v);
        if (v.size() == 4){
            sort(v.begin(), v.end());
            reverse(v.begin(), v.end());
            for (auto x: v){
                cout << x << ' ';
            }
            cout << endl;
        }
    }

    return 0;
}
