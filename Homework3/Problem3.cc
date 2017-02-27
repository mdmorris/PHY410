#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <sstream>
#include <vector>


unsigned int Stirling(unsigned int largeN){
	
	unsigned int m = largeN;

	unsigned int f = std::exp( m * std::log(m) - m );

	return f;

}


unsigned int Factorial(unsigned int N){

	unsigned int factorial = 1;

	for (unsigned int i = 1; i <= N; i++){

		factorial = factorial * i;
	}

	return factorial;

}


int main(){

	std::cout << "Input a positive integer" << std::endl;

	unsigned int n = 0;
	unsigned int x = 0;
	unsigned int factorial = 0;
	
	int input;
	std::cin >> input;

	if(input > 19){
	
		unsigned int s = Stirling(input);

		std::cout << std::setprecision(0) << std::fixed << "The factorial of " << input << " is approximately " << s << std::endl;


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
