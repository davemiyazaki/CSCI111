#include <iostream> 

int main(){
    int numberOfIntegers = 0; //initializing

    std::cout << "Enter a positive integer (at most 100): ";
    std::cin >> numberOfIntegers;
    if((numberOfIntegers >= 1) && (numberOfIntegers <= 100)){
        std::cout << "Enter " << numberOfIntegers << " integers: ";
        int arrayOfIntegers[numberOfIntegers] = {}; //initializing array
        for(int i = 0; i < numberOfIntegers; i++) std::cin >>arrayOfIntegers[i];
        
        for(int i = 0; i < numberOfIntegers; i++){
            if(arrayOfIntegers[i] < 0)
                std::cout << arrayOfIntegers[i] << " ";

        }
        printf("\n"); //starting new line for positive ingeres including 0(zero) 
        numberOfIntegers -= 1;//for the sake of fun I will use numberOfIntegers instead of temporary variable for last loop, 
                                //logically it should not be done so however since it is the last loop in the program i could use the original itself 
        for(;numberOfIntegers >= 0; numberOfIntegers--){
            if(arrayOfIntegers[numberOfIntegers] >= 0)
                std::cout << arrayOfIntegers[numberOfIntegers] << " ";
        }
    }

	return 0;
}
