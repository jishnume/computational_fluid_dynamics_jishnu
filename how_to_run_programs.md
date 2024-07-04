## About section

In this file, I will explain how to run programs in a Ubuntu terminal

### How to run c++ code ?

The steps are as follows -

* Let's create a c++ file.

  ```c++
  touch sample_prog.cpp
  ```

* Let's now create a simple hello world program written in c++.

  ```c++
  #include<iostream>
  using namespace std ;
  
  int main()
  {
      cout <<" Hello  World !!" << endl ;
      return 0 ;
  }
  ```

* Now we will want to compile this c++ code. I will be using the g++ compiler to run this file.

  ```bash
  g++ sample_prog.cpp
  ```

  If the program is successfully compiled, you will see **a.out** file. This is an output file. Now we will have to run this file.

  ```bash
  ./a.out
  ```



This is how you can write a c++ program.