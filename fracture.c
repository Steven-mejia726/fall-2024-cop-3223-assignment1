//Steven Mejia
//NID: st559049
//UCF ID: 5523538


// Inputing libraries 
#include <stdio.h>
#include <math.h>

//Define Pi
#define PI 3.14159

//Creating a function to ask for user input.
double userInputs() 
{ 
  //Initializing variables
  double x1 = 0.0;
  double x2 = 0.0;
  double y1 = 0.0;
  double y2 = 0.0;
  double totalDistance = 0.0;

  //Asking user for inputs on position of points
  printf("Type in the x coordinate of the first point: ");
  scanf("%lf",&x1);
  printf("Type in the x coordinate of the second point: ");
  scanf("%lf",&x2);
  printf("Type in the y coordinate of the first point: ");
  scanf("%lf",&y1);
  printf("Type in the y coordinate of the second point: ");
  scanf("%lf",&y2);

  //Printing out user inputs
  printf("Point #1 entered: x1 = %.3lf; y1 = %.3lf \n", x1, y1);
  printf("Point #2 entered: x2 = %.3lf; y2 = %.3lf \n", x2, y2);

  //Calculating distance between two points
  totalDistance = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
  return totalDistance;
}

//Creating function to calculate distance between two points
double calculateDistance()
{
  //Initializing variable
  double totalDistance = userInputs();
  
  //Priting distance between two points
  printf("The distance between the two points is %.3f \n", totalDistance);

  //Difficulty level 3.0, had some nasty bugs and some errors that were hard to see at first.
  return totalDistance;
}

//Creating function to calculate perimeter of a city 
double calculatePerimeter() 
{
  //Initialized variables
  double perimeter =0.0;
  double diameter = userInputs();

  //Making equation to find perimeter
  perimeter = PI * diameter;

  //Printing out perimeter
  printf("The perimeter of the city encompassed by your request is %.3lf \n", perimeter);

return 3.0;
}

//Creating function that calculates the area of a city encompessed by two points
double calculateArea()
{
  //Initialzing variables
  double area = 0.0;
  double radius = userInputs()/2;

  //Finding Area
  area = PI * pow(radius, 2);

  //Printing Area
  printf("The area of the city encompassed by your request is %.3lf \n", area);
  
  return 1.0;
}

//Creating a function that calculates the width of the city
double calculateWidth()
{
  //initialzing variable
  double width = userInputs();

  //Printing width
  printf("The width of the city encompassed by your request is %lf \n", width);

  return 1.0;
}

//Creating a function that calculates the height of the city
double calculateHeight()
{
  //Initialzing variables
  double height = userInputs();
  
  //Printing out height
  printf("The height of the city encompassed by your request is %lf \n", height);

  return 1.0;
}

//Creating main function
int main(int argc, char **argv) 
{
  calculateDistance();
  calculatePerimeter();
  calculateArea();
  calculateWidth();
  calculateHeight();
  
  return 0;
}
