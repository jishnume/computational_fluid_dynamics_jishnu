## Author - Jishnu Goswami

Let's see a general structure of c++ programming language -
```cpp
#include<iostream>

int main()
{
	std::cout<< "Hello World !" << std::endl ;
	return 0 ; 
}
```
##### What is iostream ?
Here ```iostream``` is a header file. There are several standard header file present in c++ which we can use. In special cases we can create our own header files. We will discuss these things later.

##### What is int main() ?
In c++, we call ```main``` a *function* with a return type of integer type. Inside this function, we write our code, which will executed when we try to run our programs.

##### What is the meaning of std::cout ?
To print out something on our terminal, we take the help of a standard cout

##### What is the meaning if std::endl ?
It cursor will go to a new line once it finishes showing the hello world message.

##### What is return 0 ?
Every function in c++ has some return type associated with it. When we define ```int main()```, we have specified the return type of the function to be *int*. Therefore we are specifying *return 0* at the end of the program.
