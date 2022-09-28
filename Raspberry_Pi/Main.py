import cv2
import numpy as np

cap = cv2.VideoCapture(0)


cap.set(3, 480)
cap.set(4, 320)

_, frame = cap.read()
rows, cols, _ = frame.shape


x_medium = int(cols / 2)
center = int(cols / 2)
position = 90 # degrees
