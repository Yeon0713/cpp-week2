#include <iostream>
#include <string>

int ans;
int game(std::string ans);
std::string util();

int main(){
    int answer;
    std::cout << "Answer is " <<  util() << "\n";
    
    game(util());
}