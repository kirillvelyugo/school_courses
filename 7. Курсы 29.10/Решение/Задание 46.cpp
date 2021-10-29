/*
46)	Напишите программу, которая ищет среди целых чисел, принадлежащих числовому 
отрезку [2358827; 2358891], простые числа. Выведите все найденные простые числа в 
порядке возрастания, слева от каждого числа выведите его номер по порядку.
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void findDiv (int n, vector <int> &divs){
    for (int i = 1; i * i <= n; i++){
        if (i * i == n){
            divs.push_back(i);
        }else if (n % i == 0){
            divs.push_back(i);
            divs.push_back(n / i);
        }
    }
}

int main()
{
    int index = 1;
    for (int i = 2358827; i <= 2358891; i++){
        vector <int> divs;
        findDiv (i, divs);
        if (divs.size() == 2){
            sort(divs.begin(), divs.end());
            cout << index << ' ' << i << ' ';
            index++; 
            cout << endl;
        }
    }

    return 0;
}
