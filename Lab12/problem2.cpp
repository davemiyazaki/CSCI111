#include <iostream>
#include <string>


int main(){
    const int ARRAY_SIZE = 3;
    std::string nameArray[ARRAY_SIZE] = {"David", "Alice", "Bob"};
    int numberArray[ARRAY_SIZE] = {100, 90, 80};
    for(int i = 0; i < ARRAY_SIZE; i++){
        std::cout << nameArray[i] << "'s score is " << numberArray[i] << "." << std::endl;
    }
    return 0;
}