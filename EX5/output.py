import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)

print("Setup LED pins as output")

GPIO.setup(23, GPIO.OUT)
GPIO.setup(24, GPIO.OUT)
GPIO.output(23, False)
GPIO.output(24, False)

while 1 :
    GPIO.output(23, True)
    GPIO.output(24, True)

    time.sleep(1000)

    GPIO.output(23, False)
    GPIO.output(24, False)

    time.sleep(1000)

GPIO.cleanup()