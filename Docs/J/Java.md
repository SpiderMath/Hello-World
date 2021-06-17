# Java

- **Summary**: Java is a high-level, class-based, object-oriented programming language that is designed to have as few implementation dependencies as possible. It is a general-purpose programming language intended to let application developers write once, run anywhere (WORA), meaning that compiled Java code can run on all platforms that support Java without the need for recompilation.

- **Created by**: James Gosling

- **Created in**: 1995

- **Wikipedia**: [Here](https://en.wikipedia.org/wiki/Java_(programming_language))

- **File Extension**: .java

- **Remarks**: 
	Java is a really popular programming language, with a large support base. It is highly Object Oriented, in the fact that every program has to be a class, and the primary class of the program has to have a main method.

Here is the Hello World program in Java
```java
class HelloWorld {
	public static void main(String[] args) {
		System.out.println("Hello, World!");
	}
}
```

Lets break the program down to know more about how this is working

```java
class HelloWorld
```
Every program has to have a class, with the main method, which acts as the entry point for the program. In this case, we are naming is HelloWorld

```java
{
...
}
```
The curly braces, which you can see in here, are basically to `demarcate` where the logic is, like from where it is starting and where its ending. You can think of it as a container of logic.

```java
	public static void main(String[] args) {
```
main is ENTRY point of the program. So when we run the code, all the code inside this method is executed. If we make another method called `xyz` but do not call it inside the main function, it would not be executed. `public` means that the method is public, meaning that the instances of that class can use that method. If it were `private`, the program would not run, since the compiler would not have been able to use this method as it is private, and reserved for use ONLY inside the class & its inhentances. The keyword `void` means that the method does not return any value upon executing. `static` means that the methods is present on the class, not on the class instance. We are also passing in `String[] args` as the parameters, which is **mandatory**. `String[] args` is for taking in Java Command Line Arguments. So if we run `java FILENAME.java one two three`, `args` will be equal to `["one", "two", "three"]`. The expression for `String[] args` can also be of the form `String args[]` or `String... args`, the value shall be the same.

```java
		System.out.println("Hello, World!");
```
Semicolon (`;`) is absolutely necessary at the end of the line, to let the program know that the line has come to an end and stuff.
`System` is a global built in Java variable which has a lot of Utility methods, like println. What println does, is that it prints the given string (or text) to the console/terminal with a line break. Meaning, that if you print something after that, it will be printed in the next line of the console.

- **Resources**: