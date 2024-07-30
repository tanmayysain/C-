import numpy as np
from sklearn.linear_model import LinearRegression

x=np.array([5,15,25,35,45,55]).reshape([-1,1])
y=np.array([5,20,14,32,22,33])
model = LinearRegression().fit(x,y)
r_sq = model.score(x,y)
print(model)
print(f"Coefficient of determination: {r_sq}")
print(f"intercept: f{model.intercept_}")
print(f"slope: f{model.coef_}")
y_pred = model.predict(x)
print(f"predicted response: \n{y_pred}")

y_pred = model.intercept_+model.coef_*x
print(f"predicted response using formula: \n{y_pred}")
x_new = np.arange(5).reshape([-1,1])
y_new=model.predict(x_new)

