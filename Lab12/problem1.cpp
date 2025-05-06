#include <iostream>

int main(){

    const int ARRAY_SIZE = 10;
    int array[ARRAY_SIZE];

    std::cout << "Enter ten numbers: ";
    for (int i = 0; i < ARRAY_SIZE; i++){
        std::cin >> array[i];
    }

    int sumOfAllArrayItems = 0; //initializing

    for (int i = 0; i < ARRAY_SIZE; i++){
        sumOfAllArrayItems += array[i];
    }

    double averageOfAllArrayItems = double(sumOfAllArrayItems)/double(ARRAY_SIZE);
    std::cout << "Average of the integers in array: " << averageOfAllArrayItems << std::endl;
    int sumOfAllItemsGreaterThanAverage = 0; // initializing
    int numberOfAllItemsGreaterThanAverage = 0; // initializing
    for (int i = 0; i < ARRAY_SIZE; i++){
        if(array[i] >= averageOfAllArrayItems){
            sumOfAllItemsGreaterThanAverage += array[i];
            numberOfAllItemsGreaterThanAverage++;
        } 
    }

    double averageOfAllItemsGreaterThanAverage = double(sumOfAllItemsGreaterThanAverage)/double(numberOfAllItemsGreaterThanAverage);

    std::cout << "Average of the integers greater than or equal to the average of " << averageOfAllArrayItems <<
                " is: " << averageOfAllItemsGreaterThanAverage << std::endl;

    return 0;
}