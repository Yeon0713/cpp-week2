#include <iostream>
#include <string>

int game(std::string ans_num) {
    
    int count = 5;
    
    while (count > 0) {
        std::string guess_num;

        int strike = 0;
        int ball = 0;

        std::cout << count << " chances left.\n";
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
            std::cout << "You win!";
            break;
        }
        else {
            std::cout << "Strikes: " << strike << ", " << "Balls: " << ball << "\n";
        }

        count--;
        
        if(count == 0){
            std::cout << "You lose!";
            break;
        }
    }


    return 0;
}