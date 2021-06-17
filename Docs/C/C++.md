# C++

- **Summary**: C++ is a general-purpose programming language created by Bjarne Stroustrup as an extension of the C programming language, or "C with Classes"

- **Created by**: Bjarne Stroustrup

- **Created in**: 1982

- **Wikipedia**: [Here](https://en.wikipedia.org/wiki/C++)

- **File Extension**: `.cpp`

- **Remarks**: 
	C++, as with C, is a really old programming language, and also one of the fastest, as with C. It is taught in schools and universities all over the world, being a beginner friendly language. Also, because it is an extension of C, shifting to C++ from C is not that big of a change. It is still is in High Demand for Software Development, also with many libraries still being created.

Here is the Hello World Program for C
```cpp
#include <iostream>

using namespace std;
int main()
{
	cout << "Hello, World!";
	return 0;
}
```

Time to break it down to know what is going on with the code.

```cpp
#include <iostream>
```
This line is to import the iostream library from the default libraries in C++. This library gives us access to a lot of methods for Input and Output in the Console/Terminal. So if we do not use this line, we won't be able to use any of the input output functions.

```cpp
using namespace std;
```
This line is NOT Mandatory. However it is considered a good practice to use this, since without this, methods will need to be used in the form `std::cout` and that in opinions of many, makes the code messy.

```cpp
int main() 
```
This line of code basically shows us the entry point of the program. In any C++ file, the main function is the entry point of the program, which means that if you run a C++ file, it will only execute the logic in this function. Any other code, which is not called/required into this function, will not be utilized. It is the same case as in C as well.


```cpp
{
...
}
```
The curly braces, which you can see in here, are basically to `demarcate` where the logic is, like from where it is starting and where its ending. You can think of it as a container of logic in this case, which belongs to main, and and is thus executed.

```cpp
	cout << "Hello, World!";
```
This is how we use `cout`. If you are NOT USING `using namespace std;` this code will not work. You need to use `std::cout` instead. Now, you can think of this method as `Console Out` (I doubt whether that's the actual intention for the naming, but it helps to remember). And this method works a BIT differently to the `printf` method we saw in C. How you print stuff out is by double left arrow `<<`, and keep adding stuff if you want. So 
```cpp
	cout << "Hello, World!" << " Some other text which I want to put!";
```
will basically print out `Hello, World! Some other text which I want to put!`.

```cpp
	return 0;
```
Every function has a type of value that it can return. For example, `bool` (Basically true or false), `int` (integer), etc... (you'll know more when you do Data Types). Since the program was declared with `int main()`, it **has** to return an integral value in the end. So we do return 0 to let the program know that, `Yes, we are done`.<br><br>

If you noticed, we used `;` (semicolons) in cout and return statements. If you are wondering what they are for and they're for, then you are right to think about that. Semicolons are **absolutely** necessary in your code. It basically lets the compiler know that the line of logic has ended. The reason for it being not in the other lines is that, for one thing, include statements do NOT need it, and functions do not require it at the end too, since the last `}` demarkates its end.

- **Resources**: