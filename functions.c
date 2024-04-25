#include <stdio.h>

// Function to add one to a number passed by value
void addOne(int x) {
    x = x + 1; // Increment the value of x by 1 (only affects the copy of x)
    printf("Inside function: x = %d\n", x); // Print the modified value of x
}

// Main function
int main() {
    int num = 5; // Declare and initialize a variable num with value 5
    printf("Before function call: num = %d\n", num); // Print the initial value of num
    addOne(num); // Call the addOne function with num as argument
    printf("After function call: num = %d\n", num); // Print the value of num after the function call
    return 0;
}

    }


    
   return 0;
}