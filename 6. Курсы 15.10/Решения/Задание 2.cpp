#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void divNumber(int n, vector <int> &v){
    for (int i = 1; i * i <= n; i++){
        if (i * i == n){
            v.push_back(i);
        }else if(n % i == 0){
            v.push_back(i);
            v.push_back(n / i);
        }
    }
}

int main()
{
    for (int i = 102714; i <= 102725; i++){
        vector <int> v;
        divNumber(i, v);
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
2)	Напишите программу, которая ищет среди целых чисел, принадлежащих числовому отрезку [102714; 102725],
числа, имеющие ровно 4 различных делителя. 
Выведите эти четыре делителя для каждого найденного числа в порядке возрастания.
*/