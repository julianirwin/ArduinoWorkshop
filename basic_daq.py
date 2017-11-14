import time
import serial 
import csv

# change COM4 to the interface that corresponds to the arduino 
# com_port = 'COM4'
com_port = '/dev/cu.usbmodem1411'

ser = serial.Serial(com_port, 9600) 
with open('data.csv', 'wb') as csvfile:
    tempwriter = csv.writer(csvfile , delimiter=',')
    message = ser.readline()
    print(message)
    # tempwriter.writerow(message)
    time.sleep(0.5)
