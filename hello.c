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