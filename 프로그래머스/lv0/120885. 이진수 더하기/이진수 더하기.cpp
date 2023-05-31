#include <string>
#include <vector>
#include <bitset>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    if(bin1 == "0" && bin2 == "0")
        return "0";
    bitset<100> bit1(bin1);
    bitset<100> bit2(bin2);
    int sum = bit1.to_ulong() + bit2.to_ulong();
    bitset<100> bit3(sum);
    answer = bit3.to_string();
    answer = answer.substr(answer.find('1'));
    return answer;
}