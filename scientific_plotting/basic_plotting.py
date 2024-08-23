import numpy as np
import pandas as pd
import matplotlib.pyplot as plt


file = pd.read_csv("sinusoidal_data_file.csv",sep=',')

col_label = np.array(['x_val','sine_val','cosine_val'])

file.columns = col_label


## Extracting the data vectors
x = file['x_val']
y1 = file['sine_val']
y2 = file['cosine_val']


plt.plot(x,y1,label='sine')
plt.plot(x,y2,label='cosine')

plt.xlim(0,2*np.pi)
plt.ylim(-1.01,1.01)
plt.legend()
plt.show()