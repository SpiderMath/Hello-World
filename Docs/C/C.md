# C

- **Summary**: C is a general-purpose, procedural computer programming language supporting structured programming, lexical variable scope, and recursion, with a static type system. 

- **Created by**: Dennis Richie

- **Created in**: 1972

- **Wikipedia**: [Here](https://en.wikipedia.org/wiki/C_(programming_language))

- **File Extension**: `.c`

- **Remarks**: 
	C is a really old programming language, often taught in various schools and universities to teach basics of programming to students. C is one of the fastest languages in computer programming<br>

Here is the Hello World program for C
```c
#include <stdio.h>

int main()
{
	printf("Hello, World!");
	return 0;
}
```

Now lets break it down into parts to understand what's going on in the code

```c
#include <stdio.h>
```
In this line, we import the stdio library, which is a build in Library in C. The reason for it having a `.h` extension is that it is a `header` file and can be imported to the program. This library gives us access to basic methods to help us in Input and Output (the reason it is called `stdio` is that is provides us with **St**andar**d** **I**nput **O**utput methods)

```c
int main() 
```
This line of code basically shows us the entry point of the program. In any C file, the main function is the entry point of the program, which means that if you run a C file, it will only execute the logic in this function. Any other code, which is not called/required into this function, will not be utilized.

```c
{
...
}
```
The curly braces, which you can see in here, are basically to `demarcate` where the logic is, like from where it is starting and where its ending. You can think of it as a container of logic in this case, which belongs to main, and and is thus executed.

```c
	printf("Hello, World!");
```
printf is a method, which you can use to `print` something to the console/terminal. Like, you can output whatever string you want in there, by changing "Hello, World!" to something else. This is actually the main part of the program, which we are concerned with.

```c
	return 0;
```
Every function has a type of value that it can return. For example, `bool` (Basically true or false), `int` (integer), etc... (you'll know more when you do Data Types). Since the program was declared with `int main()`, it **has** to return an integral value in the end. So we do return 0 to let the program know that, `Yes, we are done`.<br><br>

If you noticed, we used `;` (semicolons) in printf and return statements. If you are wondering what they are for and they're for, then you are right to think about that. Semicolons are **absolutely** necessary in your code. It basically lets the compiler know that the line of logic has ended. The reason for it being not in the other lines is that, for one thing, include statements do NOT need it, and functions do not require it at the end too, since the last `}` demarkates its end.

- **Resources**: