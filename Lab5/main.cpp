#include <iostream>

int main(){
    const unsigned short int A_BAR = 90;
    const unsigned short int B_BAR = 90;
    const unsigned short int C_BAR = 90;
    const unsigned short int D_BAR = 90;
    const unsigned short int F_BAR = 90;

    unsigned short int input_score = 0; 

    std::cout << "Please enter a score: ";
    std::cin >> input_score;

    if(input_score == A_BAR){
        std::cout<< "A";
    }
    return 0;
}