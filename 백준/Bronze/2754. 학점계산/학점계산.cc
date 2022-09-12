#include <iostream>

using namespace std;

int main()
{
    string input;
    double score = 0;
    cin >> input;
    switch (input[0])
        {
        case 'A':
            score += 4;
            break;
        case 'B':
            score += 3;
            break;
        case 'C':
            score += 2;
            break;
        case 'D':
            score += 1;
            break;
        }
        switch (input[1])
        {
        case '+':
            score += 0.3;
            break;
        case '-':
            score -= 0.3;
            break;
        }
        printf("%.1f", score);
}
