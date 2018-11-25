#include <cs50.h>
// include specific library with their functions
// hello.c
// in c language a file ends in c.c

// color code source code to draw attention to functions etc.
// library pre installed into the IDE.

#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}

// clang = compiler for c language to run a file in c language.

// all 0's and 1's got saved in file named a.out. not necessary for us the developer.

// one dot ./ means look in my current directory.

// backslash n means put a new line here. \n
// enter symbolically means \n

// must recompile even after saving the source code. the machine code is outdated even with source code is up to Date.

// -o hello means output a file named hello

// ls means list all files in the current folder.

// rmdir file name and that deletes a file name.

// functions aren't that interesting

// get_char, get_string, get_double, get_int... examples

int main(void)
{
  string s = get_string("Name: ")
  printf("hello, %s\n", s);
}
%s means put some string here
s means get_string and then name.

// line 36 saves a string. string s gets a string

int i = get_int("Integer: ");
  printf("hello, %i\n", i);
int main(void)
{
printf("%i plus %i is %i\n", x, y, x+y);
// placeholders on left %i, and the values are on the right x, y etc.
} 

int main(void)
{
  int x = get_int("x: ");
  int y = get_int("y: ");

  if (x < y)
    {
      printf("x is less than y\n");
    }
    else if (x > y)
    {
      printf("x is greater than y\n");
    }
}
int main(void)
char c = get_char("Answer: ");
    if (c == 'Y' || c == 'y')
    {
      printf("yes\n");
    }
    else if (c == 'N' || c == 'n')
    {
      printf("no\n");
    }

    || means or just like javascript.

why do things multiple times when you can just put them in a loop?

switch (c)
{
  case 'Y':
  case 'y':
      printf("yes\n");
      break;
  case 'N':
  case 'n':
      printf("no\n");
      break;

}
// variable to look at and a variable to make decisions off of.
// give the compiler a hint of what's to come.

// a prototype, like a movie trailer for a function.

int square(int n);

int main(void)
{
  int x = get_int("x: ");
  printf("%i\n", square(x));
  // x * x would be square(x).
}
// takes square from below.
int square(int n)
{
  return n * n;
}
// squaring function below

// one value, anything, int n.
// executes one line of code and returns it.

// RAM stores 0's and 1's in memory. fixed amount of memory.

// integer overflow: 32 bits, large number will literally reset to 0, because the computer runs out of space in their binary memory.

// source code >> compiler >> machine code

// Video 2 stopped at 

// 0's and 1's into assembly code.

int main(void)
{
  string name = get_string("Name: ");
  printf("hello, _____%s\n", name);
}
// like a madlib where the %s is.

// preprocessing compiling assembling and linking all going on from source code to machine code.

// 1. turning source into machine, is called a preprocessor. any time there's a line of code that starts with a #, special command that is replaced by the contents of the file.

// # means grab that file, and then copy and paste it in current location.

// 2. after preprocessing, then comes compiling into assembly code.
// 3. and then assembly code turns into binary.

// all those steps turn into compiling in modern day programming.

// inside curly braces, you should indent code.

#include <stdio.h>

int main(void)
{
    printf("????\n");
}
// without \n, and hitting enter, code on 2 lines would only confuse the computer.
// ? boxes in Mario

// for (int i = 0; i < 4; i++)
// {
//   printf("?");
// }
// printf("\n");

// if i=0; in for loop, you can't request -50, because it is less than 0.

// control c stops a program from running, such as a recursive loop or a server.

// to pester a user several times, at least once.
// <= less than or equal left to right
// >= greater than or equal left to right

// 9:13
// line 9, 13th character

// you can declare a variable and then say I'll deal with it later

// print out this many rows
for (int i = 0; i < n; i++)
{
  // print out this many columns at each instance of i, in other words, type out this many iterations of j at EACH ITERATION of i.
  for (int j = 0; j < n; j++)
    {
      printf("#\n");
    }
}
// for loop inside of a for loop.
// to make a square of bricks in mario.

eprintf is like console.log for C.

C has data types.

// string info

// name surrounded by boxes.
// actually an abstraction of something lower level. of characters

int main(void)
{
    string s = get_string("input: ");
    printf("output: ");
    for (int i = 0; i < strlen(s); i++)
    //  7 doesn't reference the program correctly, need dynamic option.
    {
      printf("%c\n", s[i])
    }
    // character at a  time, suggests a loop.
    the [i] prints the ith character of a the requested name.
}

typecasting - types of variables. casting - to convert from one to another.

lower case letters start at 97. 'a'= 97

// capitalization function in c
couple includes lines, like declared variables

int main(void)
{
      string  s = get_string("before: ");
      printf("after: ");
      for (int i = 0, n = strlen(s); i < n; i++)
      {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - ('a' - 'A'));
        }
        else
        {
          printf("%c", s[i]);
        }
      }
      printf("\n");
}
// this code says, if s[i] is lowercase between 'a' and 'z', then take it, s[i], and subtact ('a' - 'A') from it, in ascii, this would produce a lower number, which is the capital version of that letter, since ascii is formatted that way.

datatype also a boolean in C.

length of a string function - 
1 billion bytes is 1 GB

in C, a string with a number of characters with a \0 at the end.

// an array: continuous set of memory, literally physically back to back to each other. maybe its int, int, string, string, student, student, student. multiple things back to back to back.

int main(void): void means 0 arguments,  no input by default, have to prompt user with get_string, char etc.

// segments of memory, segmentation fault: is can't touch memory that is not assigned to be used.
