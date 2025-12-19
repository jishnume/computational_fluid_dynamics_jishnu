## Some notes from Chapter 1

### Writing a more efficient *for* loop
Let's see a simple *for* loop of adding numbers:
```c++
for (int i=1;i<5;i++>)
{
  sum=sum+i;
}
```
Here ```i++``` is more efficient than a writing ```i=i+1```. Both of them
performs the same operation of adding the numbers. However, in the later,
the intermediate value of ```i+1``` is stored and then assigned to ```i```,
while in ```i++```, the value is directly incremented.

The compound operator ```+=``` is also more efficient by the same logic.

* An advice for writing good program:
A variable should not be declared until it is used. For example:
```c++
// first approach of writing
int a,b;
a=10;

/*
b is declared but not used here. Therefore, it makes sense to
declare b later on.
*/
```