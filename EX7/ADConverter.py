import smbus
import time

address = 0x48
AIN0 = 0x40
AIN1 = 0x41
AIN2 = 0x42
AIN3 = 0x43

bus = smbus.SMBus(1)

while True:
    bus.write_byte(address, AIN0)
    value = bus.read_byte(address)
    print(value)
    time.sleep(0.1)
