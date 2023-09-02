# Python program to to create client 2

import socket 

host = '127.0.0.1'
port = 5000

client_2 = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
client_2.bind(('127.0.0.1',2000))

try:
    client_2.connect((host,port))
except socket.error as e:
    print(str(e))

id = 'abc'
type = 'Speed'
id_encoded = id.encode('utf-8')
type_encoded = type.encode('utf-8')

while True:
    value = str(input("Enter Value: "))
    value_encoded = value.encode('utf-8')

    client_2.send(id_encoded)
    client_2.send(type_encoded)

    client_2.send(str(len(value)).encode('utf-8'))
    client_2.send(value_encoded)

    msg = client_2.recv(1024).decode('utf-8')
    print(msg)

    if msg == 'close':
        break

client_2.close()