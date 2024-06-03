## Widely used linux shell commands

### Author - Jishnu Goswami, MS Engg, EMU, JNCASR


To use a linux based system properly, one needs to know certain shell commands. These are typically very essential while working with programming languages like c, c++, python etc.

Let's take a simple example to learn some of the most widely used commands in a linux terminal.

----
#### Step 1 - Create a folder

To create a folder/directory, type the following command - 
```bash
mkdir learning_shell
```
Here **mkdir** (make a directory) helps in creating a folder/directory named *learning_shell*. 

Thus you have created a new folder now. The next step is to enter inside this directory. 

-----
#### Step 2 - Enter inside a directory

Now we will enter inside the directory we have created just now called *learning_shell*. For that, we can type the following -

```bash
cd learing_shell
```
Here **cd** (change directory) helps us to enter into the directory - learning_shell

You can check in which directory you are right now by using the command **pwd**. if you type pwd, you can see outputs similar to the following -

```bash
/home/suman/Desktop/learning_shell
```
You can see I am inside the directory *learning_shell*

----

#### Step 3 - Create a text file

Let's now create a text file name - *first_file.txt*

To do that, you can type the following -
```bash
touch first_file.txt
```
here **touch** is the command with which you can create any type of file with a necessary correct extension such as *.txt* at this moment.

Before going to the next step, open this file with your preferable text editor (e.g Notepad in Windows) and type something. I am typing the following - 

```I am learning Linux shell scripting```

----
#### Step 4 - List out files/folders

To see what is inside a particular directory, take the help of **ls** command. To see the contents, type the following - 
```bash
ls
```

You will see outputs similar to the following - 
```bash
(base) suman@suman:~/Desktop/learning_shell$ ls
first_file.txt
```

This means, now you have a file named - 'first_file.txt' inside the directory - learning_shell.

You can type ```ls -al``` to see the files in a list format along with the hidden files. Hidden files and folders start with a dot symbol. But normally you don't need to go inside these folders and files.

You can see the following output - 
```bash
total 20
drwxrwxr-x  2 suman suman  4096 Jun  3 20:55 .
drwxr-xr-x 16 suman suman 12288 Jun  3 20:45 ..
-rw-rw-r--  1 suman suman    36 Jun  3 20:55 first_file.txt
```

Step 5 - Create more files
Let's create two more files. One will be a c++ file and the other will be a python file.
You can type the following commands.

```bash
touch c++_first_file.cpp
```
This will create a c++ file with an extension ```.cpp```.

Next we will create a python file.

```bash
touch python_first_file.py
```
This will create a python file with an extension ```.py```.


Now if you list out all the files, you can see output similar to the following -

```bash
total 20
drwxrwxr-x  2 suman suman  4096 Jun  3 21:01 .
drwxr-xr-x 16 suman suman 12288 Jun  3 20:45 ..
-rw-rw-r--  1 suman suman     0 Jun  3 21:01 c++_first_file.cpp
-rw-rw-r--  1 suman suman    36 Jun  3 20:55 first_file.txt
-rw-rw-r--  1 suman suman     0 Jun  3 21:01 python_first_file.py
```


















