#include <iostream> 

int main(){

	int numbersOfRows = 0; //initializing

	std::cout << "How many rows (at most 100)? ";
	std::cin >> numbersOfRows; 
	if(numbersOfRows <= 100){
		int starsArray[numbersOfRows] = {};

		std::cout << "Enter " << numbersOfRows << " row lengths: ";

		for(int i = 0; i < numbersOfRows; i++)
			std::cin >> starsArray[i];
		
		for(int i = 0; i < numbersOfRows; i++){
			for(int stars = 0; stars < starsArray[i];stars++) printf("*");
			printf("\n");
		}
			
	}
	return 0;
}
