#include <iostream>

int main(){

    const int ARRAY_SIZE = 10;
    int array[ARRAY_SIZE];

    std::cout << "Enter 10 integers:";
    for (int i = 0; i < ARRAY_SIZE; i++){
        std::cin >> array[i];
    }

    int sumOfAllArrayItems = 0; //initializing

    for (int i = 0; i < ARRAY_SIZE; i++){
        sumOfAllArrayItems += array[i];
    }

    double averageOfAllArrayItems = double(sumOfAllArrayItems)/double(ARRAY_SIZE);

    int sumOfAllItemsGreaterThanAverage = 0;
    int numberOfAllItemsGreaterThanAverage = 0;
    for (int i = 0; i < ARRAY_SIZE; i++){
        if(array[i] >= averageOfAllArrayItems){
            sumOfAllItemsGreaterThanAverage += array[i];
            numberOfAllItemsGreaterThanAverage++;
        } 
    }

    double averageOfAllItemsGreaterThanAverage = double(sumOfAllItemsGreaterThanAverage)/double(numberOfAllItemsGreaterThanAverage);

    std::cout << "Average of All Items: " << averageOfAllArrayItems << ";;;; Average of All Items Greater Than Average: " << averageOfAllItemsGreaterThanAverage << std::endl;

    return 0;
}