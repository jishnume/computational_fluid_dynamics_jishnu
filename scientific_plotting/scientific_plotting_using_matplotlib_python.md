## Scientific Plotting

Visualisation of data is an important part of any scientific endeavour. Here I will use **python** and **matplotlib**, a python library to plot and **numpy**, a python library to handle complex data files to demonstrate various steps in some typical visualisation activities. 

The procedure for plotting are detailed as follows -



For following the instructions to follows, there are certain prerequisites. These are as follows -

1. Ability to access a Ubuntu terminal (in Windows system by enabling Windows subsystem for Linux and installing any Ubuntu distribution)
2. Familiarity with shell commands (for a basic introduction refer [here](https://github.com/jishnume/computational_fluid_dynamics_jishnu/blob/main/shell_commands_linux.md), for detail understanding refer [here](http://linuxcommand.org/lc3_learning_the_shell.php))

### Step 1

To install Python 3 in your system

```bash
sudo apt update
sudo apt-get install python3
```

For checking successful installation of python, run the following command.

```bash
python3 --version
```

A typical update after correct installation is as follows -

```bash
python 3.11.4
```

This means in my system, I have correctly installed python with the version being 3.11.4

### Step 2

To install a package manager to install various libraries for python.

```bash
sudo apt-get update
sudo apt-get installl python3-pip
```

**pip** is a package installer with the help of which one can install various widely used libraries available in python.

### Step 3

To install numpy, pandas and matplotlib, which are some of the important python libraries required for visualising the data files.

```python
pip3 install numpy
pip3 install pandas
pip3 install matplotlib
```

### Step 4

To create a python to begin the plotting.

```python 
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
```

After this code snippet, save the file (here my file name is - ```basic_plotting.py```) and run the file using a terminal as follows

```bash
python3 basic_plotting.py
```

