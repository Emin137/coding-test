#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer(num_list.size()/n);
    vector<int> temp;
    int j = 0,k=0;
    for(int i=0; i<num_list.size(); i++)
    {
        answer[k].push_back(num_list[i]);
        j++;
        if(j==n)
        {
            j=0;
            k++;
        }
            
    }

    return answer;
}