import serial

opencr = serial.Serial(port='/dev/ttyACM0',baudrate=115200,timeout=1)

while True:
    num = input('Enter num : ')
    opencr.write(bytes(num, 'utf-8'))
    value = opencr.readline()
    print('Result :', value)
    