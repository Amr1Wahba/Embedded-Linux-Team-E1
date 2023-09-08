# Python program to to create client 1

import socket 

host = '127.0.0.1'
port = 5000

client_1 = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
client_1.bind(('127.0.0.1',4000))

try:
    client_1.connect((host,port))
except socket.error as e:
    print(str(e))

id = 'abc'
type = 'Speed'
id_encoded = id.encode('utf-8')
type_encoded = type.encode('utf-8')

while True:
    value = str(input("Enter Value: "))
    value_encoded = value.encode('utf-8')

    client_1.send(id_encoded)
    client_1.send(type_encoded)

    client_1.send(str(len(value)).encode('utf-8'))
    client_1.send(value_encoded)

    msg = client_1.recv(1024).decode('utf-8')
    print(msg)

    if msg == 'close':
        break

client_1.close()