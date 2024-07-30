import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

data='D:\DM\car_evaluation.csv'
df=pd.read_csv(data,header=None)
col_names=['buying','maint','doors','persons','bugboots','safety','class']
df.columns=col_names
print('No. of missing values:\n',df.isnull().sum())

x=df.drop(['class'],axis=1)
y=df[['class']]

from sklearn.model_selection import train_test_split
x.train,x.test,y.train,y.test = train_test_split(x,y,test_size=0.33,random_state=42)
print(x.train.shape,x.test.shape)

from sklearn.tree import DecisionTreeClassifier
from sklearn.metrics import accuracy_score
import category_encoders as ce
