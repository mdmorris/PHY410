#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <sstream>
#include <vector>



unsigned long Factorial(unsigned int N){

	unsigned long factorial = 1;

	for (unsigned int i = 1; i <= N; i++){
		
			factorial = factorial * i;
			std::cout << i << " " << factorial << std::endl;

	}

	return factorial;

}


int main(){

	std::cout << "Input a positive integer that is less than 20" << std::endl;

	unsigned int n = 0;
	unsigned long factorial = 0;
	
	int input;
	std::cin >> input;

	if(input > 19){
		std::cout << "That is greater than or equal to 20. Enter a number that is less than 20." << std::endl;
		return 0;
	}
	else if (input < 0){

		std::cout << "That is a negative integer. Please input a positive integer less than 20" << std::endl;
		return 0;
	}
	else{
		n = input;
	}




	if(n==0){
		factorial = 1;
	}	
	else{
		factorial = Factorial(n);
	}


	std::cout << "The factorial of " << n << " is " << factorial << std::endl;



	return 0;
}
