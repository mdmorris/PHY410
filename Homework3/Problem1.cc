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
	

	float chosenMag2 = 9999999999.;
	float mag2 = 0.;
	int min = -1;

	for (int i = 0; i < xvectors.size(); i++){

		x = xvectors[i];
		y = yvectors[i];

		mag2 = x*x + y*y;

		if(mag2 < chosenMag2){ 
			chosenMag2 = mag2;
			min = i;
		};
	}


	float mag = std::sqrt(chosenMag2);

	float xmin = xvectors[min];
	float ymin = yvectors[min];

	std::cout << "\nThe vector with the smallest magnitude is (" << xmin << ", " << ymin << std::setprecision(2) << std::fixed <<  "). Magnitude = " << mag << std::endl;


	return 0;

}
