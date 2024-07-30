import matplotlib.pyplot as plt
import numpy as np

x = [i for i in range (0,20)]
coeff = [1,-60,900.100]
y = np.polyval(coeff, x)
plt.plot(x,y)   