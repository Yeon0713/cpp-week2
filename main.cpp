#include <iostream>

int ans;
int game(int ans);

int main(){
    int answer;
    std::cout << "Enter a answer: ";
    std::cin >> answer;
    
    game(answer);
}