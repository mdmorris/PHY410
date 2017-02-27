#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <sstream>
#include <vector>



int main(){

	std::cout << "Enter vectors x1 y1 x2 y2 ... xn yn\n\n";

	std::vector<float> xvectors;
	std::vector<float> yvectors;
	float x = 0.;
	float y = 0.;
	float xi = 0.;
	float yi = 0.;
	


	while (std::cin >> xi >> yi){
		xvectors.push_back(xi);
		yvectors.push_back(yi);
	}
	

	float oldmag2 = 0.;
	float mag2 = 0.;
	int max = -1;

	for (int i = 0; i < xvectors.size(); i++){

		x = xvectors[i];
		y = yvectors[i];

		mag2 = x*x + y*y;

		std::cout << x << " " << y << " " << mag2 << std::endl;

		if(mag2 > oldmag2){ 
			oldmag2 = mag2;
			max = i;
		};
	}


	float mag = std::sqrt(mag2);

	float xmax = xvectors[max];
	float ymax = yvectors[max];

	std::cout << "The vector with the largest magnitude is " << xmax << ", " << ymax << ". Magnitude = " << mag << std::endl;


	return 0;

}
