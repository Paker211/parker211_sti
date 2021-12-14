import pandas as pd

df_housing = pd.read_csv("https://raw.githubusercontent.com/huangjia2019/house/master/house.csv")
df_housing.head

--------------------------------

X = df_housing.drop("median_house_value", axis = 1)
y = df_housing.median_house_value

--------------------------------

from sklearn.model_selection import train_test_split
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=0)

--------------------------------

from sklearn.linear_model import LinearRegression
model = LinearRegression()
model.fit(X_train, y_train)

--------------------------------

y_pred = model.predict(X_test)
print("Real House price(Test):", y_test)
print("Predict House price(Test):", y_pred)

--------------------------------

print("Score for prediction:", model.score(X_test, y_test))

--------------------------------

import matplotlib.pyplot as plt
plt.scatter(X_test.median_income, y_test, color='brown')
plt.plot(X_test.median_income, y_pred, color='green', linewidth=1)
plt.xlabel('Median Income')
plt.ylabel('Median House Value')
plt.show()
