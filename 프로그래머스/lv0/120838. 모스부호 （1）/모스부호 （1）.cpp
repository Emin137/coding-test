#include <string>
#include <vector>

using namespace std;

string solution(string letter) {
    string answer = "";
    string temp;
    string mos[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    for(int i=0; i<letter.size(); i++)
    {
        if(letter[i] != ' ')
            temp+=letter[i];
        else
        {
            for(int i=0; i<26; i++)
                if(temp == mos[i])
                {
                    answer += 'a'+i;
                    temp = "";
                    break;
                }
                    
        }
    }
    for(int i=0; i<26; i++)
                if(temp == mos[i])
                {
                    answer += 'a'+i;
                    temp = "";
                    break;
                }
    
    
    return answer;
}