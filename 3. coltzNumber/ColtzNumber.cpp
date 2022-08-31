#include <iostream>

using namespace std;

int solution(int num) {
    int answer = 0;
    long int reverseNumber = num;
    while(reverseNumber != 1) {
        if (answer >= 500)
        {
            break;
        }
        
        if(reverseNumber % 2 == 0) {
            reverseNumber = reverseNumber / 2;    
        } else {
            reverseNumber = reverseNumber * 3 + 1;
        }
        answer++;
    }
    
    if(answer >= 500) {
        answer = -1;
    }
    
    return answer;
}

int main(void) {
    int result = solution(626331);
    cout<<result<<endl;
}