#include<iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector< vector<int> > commands) {
    vector<int> answer;
    
    for (int i = 0; i < commands.size(); i++) {
        vector<int> command = commands[i];
        int startIndex = command[0];
        int endIndex = command[1];
        int findIndex = command[2];
        
        vector<int> tempArray;
        for(int index = startIndex; index <= endIndex; index++) {
            int data = array[index-1];
            tempArray.push_back(data);
        }
        
        sort(tempArray.begin(), tempArray.end());
        int commandIAnswer = tempArray[findIndex-1];
        answer.push_back(commandIAnswer);
    }
    
    return answer;
}

int main(void) {
    int arrayData[] = { 1,5,2,6,3,7,4};
    vector<int> array(begin(arrayData), end(arrayData));

    int command1Data[] = { 2,5,3};
    vector<int> command1(begin(command1Data), end(command1Data));

    int command2Data[] = { 4,4,1};
    vector<int> command2(begin(command2Data), end(command2Data));

    int command3Data[] = { 1,7,3};
    vector<int> command3(begin(command3Data), end(command3Data));

    vector< vector<int> > commands;
    commands.push_back(command1);
    commands.push_back(command2);
    commands.push_back(command3);

    vector<int> answer = solution(array, commands);
    cout <<"answer is ";
    for(int i = 0; i < answer.size(); i++ ) {
        cout << answer[i];
        cout << ",";
    }
    cout << endl;
    
    return 0;
}