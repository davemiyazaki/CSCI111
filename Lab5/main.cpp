#include <iostream>

int main(int argc, char* argv[]){
    const unsigned short int A_BAR = 90;
    const unsigned short int B_BAR = 80;
    const unsigned short int C_BAR = 70;
    const unsigned short int D_BAR = 60;

    char input_score = 0; 

    std::cout << "Please enter a score: ";
    std::cin >> input_score;

    if(input_score >= A_BAR){
        std::cout<< "A";
    }else if(input_score < A_BAR && input_score >= B_BAR){
        std::cout<< "B";
    }else if(input_score < B_BAR && input_score >= C_BAR){
        std::cout<< "C";
    }else if(input_score < C_BAR && input_score >= D_BAR){
        std::cout<< "D";
    }else if(input_score < D_BAR){
        std::cout<< "F";
    }
    return 0;
}