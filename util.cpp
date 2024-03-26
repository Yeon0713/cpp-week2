#include <iostream>
#include <stdlib.h>
#include <string>
#include <ctime>

std::string util(){
    int ans_num[3];
    std::string ans;
    
    srand(static_cast<unsigned int>(time(NULL)));
    
    ans_num[0] = rand()%10;
    ans_num[1] = rand()%10;
    while (ans_num[0] == ans_num[1]) {
        ans_num[1] = rand()%10;
    }
    ans_num[2] = rand()%10;
    while (ans_num[0] == ans_num[2] || ans_num[1] == ans_num[2] ){
        ans_num[2] = rand()%10;
    }
    

    std::string num0 = std::to_string(ans_num[0]);
    std::string num1 = std::to_string(ans_num[1]);
    std::string num2 = std::to_string(ans_num[2]);

    return ans.append(num0).append(num1).append(num2);
    
}