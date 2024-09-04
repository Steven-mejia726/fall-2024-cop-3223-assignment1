// Inputting libraries 
#include <stdio.h>
#include <math.h>

//Define Pi
#define PI 3.14159

//Creating a function to ask for user input.
double userInputs() 
{ 
  //Initializing variable
  double userInput = 0.0;
    
  //Asking for user input
  scanf("%lf", &userInput);
  return userInput;
}


//Creating function to calculate distance between two points
double calculateDistance()
{
  //Initializing variable
  double x1 = 0.0;
  double x2 = 0.0;
  double y1 = 0.0;
  double y2 = 0.0;
  double totalDistance = 0.0;

  //Asking user for inputs on position of points
  printf("Type in x coordinate of first point: ");
  x1 = userInputs();
  printf("Type in x coordinate of second point: ");
  x2 = userInputs();
  printf("Type in y coordinate of first point: ");
  y1 = userInputs();
  printf("Type in y coordinate of second point: ");
  y2 = userInputs();
  
  //Printing out user inputs
  printf("Point #1 entered: x1 = %.3lf; y1 = %.3lf \n", x1, y1);
  printf("Point #2 entered: x2 = %.3lf; y2 = %.3lf \n", x1, y1);

  //Calculating distance between two points
  totalDistance = sqrt(pow(x2+x1, 2) + pow(y2+y1, 2));

  //Priting distance between two points
  printf("The distance between the two points is %.3f \n", totalDistance);
  return totalDistance;
}

//Creating function to calculate perimeter of a city 
double calculatePerimeter() 
{
  //Initialized variables
  double perimeter =0.0;
  double diameter = calculateDistance();

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
  double radius = calculateDistance()/2;

  //Finding Area
  area = Pi * pow(radius, 2);

  //Printing Area
  printf("The area of the city encompassed by your request is %lf", area);
  
  return 1.0
}

//Creating a function that calculates the width of the city
double calculateWidth()
{

}

//Creating a function that calculates the height of the city
double caluclateHeight()
{

}

//Creating main function
int main(int argc, char **argv) 
{
  double distance = calculateDistance();
  double test = calculatePerimeter();  

  return 0;
}
