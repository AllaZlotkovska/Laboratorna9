#include <iostream>
#include<queue>
#include "Windows.h"

using namespace std;

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    queue<int> q;
    int n, x, sum = 0;

    cout << "Введіть розмір черги: ";
    cin >> n; 

    cout << "Введіть "<<n<<" цілих чисел:\n ";
    for (int i = 0; i < n; i++) {
        cin >> x;
        q.push(x);
    }
    while (!q.empty()) {
        if (q.front() % 2 == 0) {
            sum += q.front();
        }
        q.pop();
    }
    cout << "Сума парних елементів у черзі:"<< sum <<endl;
    return 0;


}

