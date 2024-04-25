#include <stdio.h>//Include is a preprocessor function that includes a file.

int main(){/*The program main function all code has to be inside this class class.
            So take note*/

    printf("I like Pizza!\n"); /*
                                \n(new line character) is an scape sequency for a new line
                                \t (Tab or space)
                                \" Duoble Quote
                                \' Single Qoute
                                */
    printf("\"It is really good!\"\tSaid Abraham Lincoln.\t\'And So am I\'\tInturupted John!\n");

    //VARIABLES 
    /*Variable = Allocated space in memory to store a value.
      We refer to a variable's name to access the stored value.
      That variable now behaves as if it was the value it contains.
      BUT we need to declare what type of data we are storing.
      */
    
    //Declaration & Initialisation of Variables

    int x; //Declaration
    x = 23; //Initialisation
    int y = 123; //Declaration & Initialisation

    //DATA TYPES
    int age = 36; //Integer
    float gpa = 3.67; //Floating point number
    char grade = 'B'; //Single Character
    char name[] = "Amanyire";//Array of Characters (there are no strings in C because it is not object oriented)
    
    //FORMAT SPECIFIERS
    //%d for integers
    //%f for floating numbers
    //%c for chars
    //%s for strings (array of characters)
    
    printf("Hello %s\n", name); //Printing a string
    printf("You are %d years old\n", age); //Printing an integer or decimal
    printf("Your average grade is %c\n", grade); //Printing a character
    printf("Your GBA is %f\n", gpa); //Printing floats

return 0;//checks for errors if they are there it returns 1
}