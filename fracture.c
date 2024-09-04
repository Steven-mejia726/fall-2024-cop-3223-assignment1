// Inputting libraries 
#include <stdio.h>
#include <math.h>

//Creating main function
int main(int argc, char **argv) 
{
  

  return 0;
}

//Creating function to calculate distance between two points
double calculateDistance()
{
  //Initializing variable
  double x1 = 0.0
  double x2 = 0.0
  double y1 = 0.0
  double y2 = 0.0
  double totalDistance = 0.0;

  //Printing out user inputed info
  printf("Point 1 entered: x1 = ");
  x1 = userInputs();
  printf("; y1 = ");
  y1 = userInputs();
  printf("Point 2 was entered: x2 = ");
  x2 = userInputs();
  printf("; y2 = ");
  y2 = userInputs();

  totalDistance = sqrt(pow(x2+x1, 2) + pow(y2+y1, 2));
  printf(totalDistance);
  return totalDistance;
}

//Creating function to calculate perimeter of a city 
double calculatePerimeter() 
{

}

//Creating function that calculates the area of a city encompessed by two points
double calculateArea()
{

}

//Creating a function that calculates the width of the city
double calculateWidth()
{

}

//Creating a function that calculates the height of the city
double caluclateHeight()
{

}

//Creating a function to ask for user input.
double userInputs() 
{
  //Initializing variable
    double userInput = 0.0
    
    //Asking for user input
    scanf(%lf, &userInput);
    return userInput;
}