import tensorflow as tf
from tensorflow import keras
from ann_visualizer.visualize import ann_viz;
from keras import metrics
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

train_df = pd.read_csv('./path1.csv')
np.random.shuffle(train_df.values)

print(train_df.head())

model = keras.Sequential([
	keras.layers.Dense(12, input_shape=(6,), activation='softmax'),
	keras.layers.Dense(12, activation='relu'),
	keras.layers.Dense(2)])

#ann_viz(model, title="neural network")

model.compile(optimizer='sgd',
			loss='mse',
			metrics=[metrics.mae, metrics.categorical_accuracy])

x = np.column_stack((train_df.righthipyaw.values, train_df.righthiproll.values, 
					 train_df.righthippitch.values, train_df.rightknee.values, 
					 train_df.rightankleroll.values, train_df.rightanklepitch.values))

history_train = model.fit(x, train_df.time.values, batch_size=15, epochs=100)
print(history_train.history.keys())

#test_df = pd.read_csv('./servo.csv')
#
#print(test_df.head())
#
#test_x = np.column_stack((test_df.righthipyaw.values, test_df.righthiproll.values, 
#						  test_df.righthippitch.values, test_df.rightknee.values, 
#						  test_df.rightankleroll.values, test_df.rightanklepitch.values))
#
#history_test = model.fit(test_x, test_df.time.values, batch_size=15, epochs=100)

test1_df = pd.read_csv('./servo2.csv')

print(test1_df.head())

test1_x = np.column_stack((test1_df.righthipyaw.values, test1_df.righthiproll.values, 
						  test1_df.righthippitch.values, test1_df.rightknee.values, 
						  test1_df.rightankleroll.values, test1_df.rightanklepitch.values))

history_test1 = model.fit(test1_x, test1_df.time.values, batch_size=15, epochs=100)

fig1 = plt.figure(1)
plt.plot(history_train.history['loss'])
#plt.plot(history_test.history['loss'])
plt.plot(history_test1.history['loss'])
plt.title('model training')
plt.ylabel('mean squared error (m^2)')
plt.xlabel('time (s)')
plt.legend(['train 50-15', 'test 50-15'], loc='upper right')
#plt.savefig('Data Train.png')
plt.show()

fig2 = plt.figure(2)
plt.plot(history_train.history['mean_absolute_error'])
#plt.plot(history_test.history['mean_absolute_error'])
plt.plot(history_test1.history['mean_absolute_error'])
plt.title('model training')
plt.ylabel('mean absolute error (m)')
plt.xlabel('time (s)')
plt.legend(['train 50-15', 'test 50-15'], loc='upper right')
#plt.savefig('Data Test 20-10.png')
plt.show()

fig3 = plt.figure(3)
plt.plot(history_train.history['categorical_accuracy'])
#plt.plot(history_test.history['categorical_accuracy'])
plt.plot(history_test1.history['categorical_accuracy'])
plt.title('model training')
plt.ylabel('accuracy (%)')
plt.xlabel('time (s)')
plt.legend(['train 50-15', 'test 50-15'], loc='upper right')
#plt.savefig('Data Test 25-15.png')
plt.show()