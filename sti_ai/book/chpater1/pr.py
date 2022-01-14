from tensorflow.keras.utils import to_categorical
X_train = X_train_image.reshape(60000, 28, 28 ,1) #add one tensor for label
X_test = X_test_image.reshape(10000, 28, 28, 1) #add one tensor for label
y_train = to_categorical(y_train_lable, 10) #convert to one-hot code
y_test = to_categorical(y_test_lable, 10) #convert to one-hot code
print(X_train.shape)
print(y_train[0])

