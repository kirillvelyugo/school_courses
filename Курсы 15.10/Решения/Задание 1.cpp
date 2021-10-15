#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void countDiv (int n, vector <int> &v){
    int c = 0;
    for (int i = 1; i * i <= n; i++){
        if (i * i == n){
            v.push_back(i);
        }else if (n % i == 0){
            c += 2;
            v.push_back(i);
            v.push_back(n / i);
        }
    }
}

int main()
{
    for (int i = 126849; i <= 126871; i++){
        vector <int> v;
        countDiv(i, v);
        sort(v.begin(), v.end());
        if (v.size() == 4){
            for (auto x: v){
                cout << x << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}

/*
1)	Напишите программу, которая ищет среди целых чисел, принадлежащих числовому отрезку [126849; 126871], 
числа, имеющие ровно 4 различных делителя. Выведите эти четыре делителя для каждого найденного числа в
порядке возрастания.
*/