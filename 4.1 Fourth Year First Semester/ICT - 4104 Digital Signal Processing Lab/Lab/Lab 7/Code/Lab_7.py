#!/usr/bin/env python
# coding: utf-8

# ## Noise Reduction and Signal Smoothing with Moving Average Filters

# In[1]:


import numpy as np
import matplotlib.pyplot as plt


# In[2]:


def moving_average_filter(input_signal, window_size):
    output_signal = np.convolve(input_signal, np.ones(window_size)/window_size, mode='same')
    return output_signal


# Generate a noisy input signal (sinusoidal signal with added noise)

# In[3]:


t = np.linspace(0, 1, 1000)
input_signal = np.sin(2*np.pi*5*t) + 0.5 * np.random.normal(size=1000)


# Apply a moving average filter with window size 10

# In[4]:


window_size = 10
smoothed_signal = moving_average_filter(input_signal, window_size)


# Plot the original signal and the smoothed signal

# In[5]:


plt.figure(figsize=(10, 6))
plt.plot(t, input_signal, label='Original Signal')
plt.plot(t, smoothed_signal, label=f'Smoothed (Window Size = {window_size})')
plt.legend()
plt.xlabel('Time')
plt.ylabel('Amplitude')
plt.title('Smoothing a Noisy Signal using Moving Average Filter')
plt.grid(True)
plt.show()


# In[ ]:




