# Laplace Equation Solution using Finite Difference Method
import numpy as np
import matplotlib.pyplot as plt

# 設定最大iteration
maxIter = 100

# 設定Dimension and delta
lenX = lenY = 10 #we set it rectangular
delta = 1

# 設定邊界(Boundary condition)
Ttop = 15
Tbottom = 15
Tleft = 15
Tright = 15

# Initial assumption
Tguess = 50

# 設定 colour map
colorinterpolation = 50
colourMap = plt.cm.jet
#或是：colourMap = plt.cm.coolwarm

# Set meshgrid
X, Y = np.meshgrid(np.arange(0, lenX), np.arange(0, lenY))

# Set array size and set the interior value with Tguess
T = np.empty((lenX, lenY))
T.fill(Tguess)

# Set Boundary condition
T[(lenY-1):, :] = Ttop
T[:, (lenX-1):] = Tright
T[:1, :] = Tbottom
T[:, :1] = Tleft

T[3][8]=100
print (T[3][8])

# Iteration (假設 maxIter = 100)
print("Please wait for a moment")
#下公式
for iteration in range(0, maxIter):
    for i in range(1, lenX-1, delta):
        for j in range(1, lenY-1, delta):
            T[i, j] = 0.25 * (T[i-1][j] + T[i+1][j] + T[i][j+1] + T[i][j-1])

print("Iteration finished")

# Configure the contour
plt.title("Contour of Temperature")
plt.contourf(X, Y, T, colorinterpolation, cmap=colourMap)
# Set Colorbar
plt.colorbar()
plt.figure()
plt.imshow(T)
# Show the result in the plot window
plt.show()
print(T[3][8])
print("")
