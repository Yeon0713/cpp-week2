#include <iostream>
#include <string>

int game(std::string ans_num) {
    
    while (true) {
        std::string guess_num;

        int strike = 0;
        int ball = 0;

        std::cout << "Enter a guess: ";
        std::cin >> guess_num;
        
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++) {
                if (ans_num[i] == guess_num[j] && i == j){
                    strike++;
                }
                else if (ans_num[i] == guess_num[j] && i != j){
                    ball++;
                }

            }
        }
        if (strike == 3){
            std::cout << "You Win!";
            break;
        }
        else {
            std::cout << "Strikes: " << strike << ", " << "Balls: " << ball << "\n";
        }
    }


    return 0;
}