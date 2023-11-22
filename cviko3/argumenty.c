 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char *argv[])
 {
 // "argc" is an integer that holds the number of command -line arguments supplied by the user
 if (argc < 4) {
 printf("3 arguments expected!\n");
 return 1;
 }

 // All command -line arguments are by default represented as strings
 // What if we want the user to supply an integer number?
 // How can we convert the string to the integer?
 // Solution: Use "atoi" function (array to integer)
 printf("First argument (string): %s\n", argv[1]);
 int int_arg = atoi(argv[1]);
 printf("First argument (int): %d\n", int_arg);

 // What about float numbers?
 // Use "atof" function (array to float)
 printf("Second argument (string): %s\n", argv[2]);
 double double_arg = atof(argv[2]);
 printf("Second argument (double): %lf\n", double_arg);

 // What about characters?
 // Argument is a string , so if we know that it is just a single character ,
 // we can extract the first character of the string
 // argv[3]: ['X', '\0']
 // argv[3][0]: ^
 printf("Third argument (string): %s\n", argv[3]);
 char char_arg = argv[3][0];
 printf("Third argument (char): %c\n", char_arg);
   
   return 0;
 }