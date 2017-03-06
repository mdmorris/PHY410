#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <sstream>
#include <vector>


float Stirling(unsigned int largeN){
	
	unsigned int m = largeN;

	float f =  m * std::log(m) - m ;

	return f;

}


unsigned long Factorial(unsigned int N){

	unsigned long factorial = 1;

	for (unsigned int i = 1; i <= N; i++){
		
			factorial = factorial * i;

	}

	return factorial;

}


int main(){

	std::cout << "Input a positive integer" << std::endl;

	unsigned int n = 0;
	unsigned int x = 0;
	unsigned long factorial = 0;
	
	int input;
	std::cin >> input;

	if(input > 19){
	
		float s = Stirling(input);

		std::cout << "The log of the factorial of " << input << std::setprecision(3) << std::fixed <<  " is approximately " << s << std::endl;


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