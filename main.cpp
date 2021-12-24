#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 int
 bool
 double
 float
 char
 unsigned int
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int dogLength = 4;
    int dogHeight = 5;
    int dogBreadth = 6;

    bool isDogMale = true;
    bool doesDogPoop = true;
    bool doesDogTalk = false;

    double dogWalkingDistance = 8;
    double dogWalkingSpeed = 40;
    double dogWeight = 50;

    float dogAltitude = 4000.20f;
    float dogAirspeed = 300.0f;
    float dogLift = 90.12f;

    char dogColour = 'R';
    char dogSize = 'L';
    char dogGender = 'M';

    std::string dogName = "Dumbo";
    std::string dogOwnerName = "Garren";
    std::string dogFood = "Potatoes";

    ignoreUnused(number, dogLength, dogHeight, dogBreadth, isDogMale, doesDogPoop, doesDogTalk, dogWalkingDistance, dogWalkingSpeed, dogWeight, dogAltitude, dogAirspeed, dogLift, dogColour, dogSize, dogGender); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int measureDogSize(int dogLength, int dogHeight, int dogBreadth = 0)
{
  ignoreUnused(dogLength, dogHeight, dogBreadth);
  return{};
}
/*
 2)
 */
bool dogBuoyancy(char dogSize = 'L', int dogWeight=0, int volumeOfAirInDog = 0.0f)
{
  ignoreUnused(dogSize, dogWeight, volumeOfAirInDog);
  return{};
}
/*
 3)
 */
int measureCarDurability(int carMileage = 0, int carDamage = 0)
{
  ignoreUnused(carMileage, carDamage);
  return{};
}
/*
 4)
 */

/*
 5)
 */
int burnCalories(int distanceCovered, int runningSpeed, int weight = 0)
{
  ignoreUnused(distanceCovered, runningSpeed, weight);
  return{};
}
/*
 6)
 */
bool qualityOfLife(int numberOfFriends = 0, float boredomLevel =0.0f)
{
  ignoreUnused(numberOfFriends, boredomLevel);
  return{};
}
/*
 7)
 */
void throwBalls(int ballDistance, int numberOfBalls=0, bool doBallsExplode = false)
{
  ignoreUnused(ballDistance, numberOfBalls, doBallsExplode);
}
/*
 8)
 */
void cookSpaghetti(int numberOfNoodles, int durationOFBoiling=0)
{
  ignoreUnused(numberOfNoodles, durationOfBoiling);
}
/*
 9)
 */
char observeDogFeatures(bool areEarsFloopy = false, char dogColor = 'r', char dogFurPattern = 's')
{
  ignoreUnused(areEarsFloopy, dogColor, dogFurPattern);
  return{};
}
/*
 10)
 */
char observePlaneFeatures(char size='s', int crewNumber=0, bool isMilitary = false)
{
  ignoreUnused(size,crewNumber,isMilitary);
  return{};
}








/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1) 
    auto dogSize = measureDogSize
    //2)
    
    //3)
    
    //4)
    
    //5)
    
    //6)
    
    //7)
    
    //8)
    
    //9)
    
    //10)
    
    
    ignoreUnused(carRented);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
