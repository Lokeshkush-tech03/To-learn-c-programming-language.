#include <stdio.h>
//Question no 1 to make a Right half pyramid , Reverse right half pyramid and left half Pyramid.
int main()
{
  printf(" Right half pyramid\n");
  printf("*.\n");
  printf("* *\n");
  printf("* * *\n");
  printf("* * * *\n");
  printf("* * * * *\n");

  printf("Reverse right half pyramid\n");
  printf("* * * * *\n");
  printf("* * * *\n");
  printf("* * *\n");
  printf("* *\n");
  printf("*\n");

  printf("left half Pyramid\n");
  printf("        *\n");
  printf("      * *\n");
  printf("    * * *\n");
  printf("  * * * *\n");
  printf("* * * * *\n");

//question no 2:-
  printf("Show the following patterns using single print  statement:\n");
  printf("*\n* *\n* * *\n* * * *\n* * * * *\n");
 
 //3. Create a program to input name of the person and respond with ”Welcome NAME to KG Coding”
   char Name[50];
   printf("Please enter your name:");
   scanf("%s", Name);
   printf("Welcome %s ! in the world of programming\n", Name);

/*4. Create a program to declare two integer variables, assign them
values, and display their values.*/
{
   int num1, num2, sum;
  printf("Enter the first num\n");
  scanf("%d", &num1);
  printf("Enter the Second num\n");
  scanf("%d", &num2);
  sum=num1+num2;
  printf("The sum of these numbers are:%d\n", sum);
 }
  /*5. Create a program that declares one variable of each of the
fundamental data types (int, float, double, char) and prints their
size using sizeof() operator.*/

    int integerVar;
    float floatVar;
    double doubleVar;
    char charVar;

    printf("Size of int: %zu bytes\n", sizeof(integerVar));
    printf("Size of float: %zu bytes\n", sizeof(floatVar));
    printf("Size of double: %zu bytes\n", sizeof(doubleVar));
    printf("Size of char: %zu bytes\n", sizeof(charVar));

   /*6. Define variables for storing a user's first name, last name, and age
using appropriate naming conventions and then display them.*/
  char First_name[50] , Last_name[50];
  int age;
  printf("Enter your first name:");
  scanf("%s",First_name);
  printf("Enter your last name:");
  scanf("%s",Last_name);
  printf("Enter your age:");
  scanf("%d",&age);
  printf("My name is %s %s, and my age is %d years old.\n", First_name, Last_name, age);
 
/*7. Create a program to print the area of a square by inputting its side
length*/
 int side, area;
  printf("Enter the side of sqare:");
  scanf("%d", &side);
  area=side*side;
  printf("The area of this square is: %d m^2\n", area);

/*9. Create a program to print the area of a circle by inputting its radius.*/
 /*int radius, area;
 printf("Enter the radius of circle:");
  scanf("%d", &radius);
  area=3.14*radius*radius;
  printf("The area of this circle is: %d m^2\n", area);*/
  return 0;
}
