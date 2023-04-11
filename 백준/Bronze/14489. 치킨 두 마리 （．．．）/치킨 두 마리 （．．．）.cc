#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    long long account1,account2,price,answer;
    cin >> account1 >> account2;
    cin >> price;
    answer = account1+account2>=price*2 ? account1+account2-price*2 : account1+account2;
    cout << answer << endl;
}
