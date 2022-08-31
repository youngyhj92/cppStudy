#include <iostream>
#include <string>

using namespace std;

namespace Security {
    string hidePhoneNumber(string phone_number) {
         int size = phone_number.length();
    string replaceString = "";
    for (int i=0;i<(size-4);i++) {
        replaceString.append("*");
    }
    
    string answer = phone_number.replace(0,(size-4),replaceString);
    return answer;
    }
}

int main(void) {
    string returnData = Security::hidePhoneNumber("01029800089");
    cout<<returnData<<endl;

    return 0;

}