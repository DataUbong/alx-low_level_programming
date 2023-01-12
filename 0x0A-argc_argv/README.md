It is possible to pass some values from the command line to your C programs when they are executed. These values are called command line arguments and many times they are important for your program especially when you want to control your program from outside instead of hard coding those values inside the code.



The command line arguments are handled using main() function arguments where argc refers to the number of arguments passed, and argv[] is a pointer array which points to each argument passed to the program. Following is a simple example which checks if there is any argument supplied from the command line and take action accordingly −



#include <stdio.h>



int main( int argc, char *argv[] )  {



   if( argc == 2 ) {

      printf("The argument supplied is %s\n", argv[1]);

   }

   else if( argc > 2 ) {

      printf("Too many arguments supplied.\n");

   }

   else {

      printf("One argument expected.\n");

   }

}

Write a program that prints its name, followed by a new line.



If you rename the program, it will print the new name, without having to compile it again

You should not remove the path before the name of the program

Write a program that prints the number of arguments passed into it.



Your program should print a number, followed by a new line


Write a program that prints all arguments it receives.



All arguments should be printed, including the first one

Only print one argument per line, ending with a new line


Write a program that multiplies two numbers.



Your program should print the result of the multiplication, followed by a new line

You can assume that the two numbers and result of the multiplication can be stored in an integer

If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1

Write a program that adds positive numbers.



Print the result, followed by a new line

If no number is passed to the program, print 0, followed by a new line

If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1

You can assume that numbers and the addition of all the numbers can be stored in an int
