import tensorflow as tf
from tensorflow import keras
from ann_visualizer.visualize import ann_viz;

import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

train_df = pd.read_csv('./data/train.csv')
np.random.shuffle(train_df.values)

#print(train_df.head())

model = keras.Sequential([
	keras.layers.Dense(32, input_shape=(2,), activation='relu'),
	keras.layers.Dense(32, activation='relu'),
	keras.layers.Dense(2, activation='sigmoid')])

#ann_viz(model, title="My first neural network")

model.compile(optimizer='adam', 
	          loss=keras.losses.SparseCategoricalCrossentropy(from_logits=True),
	          metrics=['accuracy'])

x = np.column_stack((train_df.x.values, train_df.y.values))

history_train = model.fit(x, train_df.color.values, batch_size=4, epochs=15)
print(history_train.history.keys())

test_df = pd.read_csv('./data/test.csv')
test_x = np.column_stack((test_df.x.values, test_df.y.values))

print("EVALUATION")
history_test = model.fit(test_x, test_df.color.values, batch_size=4, epochs=15)
print(history_test.history.keys())

plt.figure(1)
plt.plot(history_train.history['accuracy'])
plt.plot(history_test.history['accuracy'])
plt.title('model training')
plt.ylabel('accuracy')
plt.xlabel('epoch')
plt.legend(['train', 'test'], loc='lower right')
plt.show()

plt.figure(2)
plt.plot(history_train.history['loss'])
plt.plot(history_test.history['loss'])
plt.title('model training')
plt.ylabel('loss')
plt.xlabel('epoch')
plt.legend(['train', 'test'], loc='upper right')
plt.show()