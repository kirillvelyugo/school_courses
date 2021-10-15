#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void primeNum (int n, vector <int> &v){
    int c = 0;
    for (int i = 1; i * i <= n; i++){
        if (i * i == n){
            c++;
        }else if (n % i == 0){
            c += 2;
        }
    }
    if (c == 2){
        v.push_back(n);
    }
}

int main()
{
    vector <int> primeNumbers;
    for (int i = 3144472; i <= 3144600; i++){
        primeNum(i, primeNumbers);
    }       
    for (int i = 0; i < primeNumbers.size(); i++){
        cout << i + 1 << ' ' << primeNumbers[i] << endl;
    }
    return 0;
}

/*
51)	Напишите программу, которая ищет среди целых чисел, принадлежащих числовому отрезку [3144472; 3144600],
простые числа. Выведите все найденные простые числа в порядке возрастания, слева от каждого числа 
выведите его номер по порядку.
*/