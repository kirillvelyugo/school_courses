#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findPrime(int n, vector <int> &v){
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
    vector <int> primeNum;
    for (int i = 7178551; i <= 7178659; i++){
        findPrime(i, primeNum);
    }    
    sort(primeNum.begin(), primeNum.end());
    for (int i = 0; i < primeNum.size(); i++){
        cout << i + 1 << ' ' << primeNum[i] << endl;
    }
    return 0;
}

/*
59)	Напишите программу, которая ищет среди целых чисел, принадлежащих числовому отрезку [7178551; 7178659], 
простые числа. Выведите все найденные простые числа 
в порядке возрастания, слева от каждого числа выведите его номер по порядку.
*/