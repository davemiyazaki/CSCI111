#include <iostream> 

int main(){
    short int numberOfWords = 0; //initializing

    std::cout << "How many words (at most 100)? ";
    std::cin >> numberOfWords;
    if((numberOfWords >= 1) && (numberOfWords <= 100)){
        std::cout << "Enter all word(s) below:\n";
        //receiving data from User
        #include <string>
        std::string wordsArray [numberOfWords] = {};

        for(int i = 0; i < numberOfWords; i++)
            std::cin >> wordsArray[i];

        std::cout << "I will now print your word(s) in reverse order:\n";

        //printing data from user in reverse order
        for(int i = numberOfWords-1; i >= 0; i--){
            std::cout << wordsArray[i] << " ";
        }
    }
    return 0;
}