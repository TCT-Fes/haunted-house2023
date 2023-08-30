import serial
import os
import subprocess
import time

port = "/dev/ttyACM0"
baud = 9600


def read_distance():
    with serial.Serial(port, baud, timeout=5) as ser:

        received_line = ser.readline()
        print(received_line)

        if received_line != b'':
            distance = received_line.decode('utf8', 'ignore')
            distance = distance.rstrip(os.linesep)
            print(distance)
            try:
                distance = float(distance.replace(" ", ""))
            except ValueError as e:
                print(type(e))
                return -1.0
            # print(distance)

            return distance
        else:
            return -1.0


while (True):
    dis = read_distance()
    print(dis)
    if dis <= 200 and dis >= 0.2:
        print("test")
        subprocess.Popen("paplay --volume=65536 Kodo_long.wav", shell=True)
        time.sleep(3.7)
        os.system("pkill paplay")
