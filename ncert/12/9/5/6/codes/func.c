#include<math.h>

//function to calculate xn
double x_new(double x_0,double h){
  return (x_0+h);
}

//function to calculate yn
double y_new(double x_0,double y_0,double h){
	return (y_0+ ((y_0/x_0)+sqrt(1+(pow(y_0,2)/pow(x_0,2))))*h);
}