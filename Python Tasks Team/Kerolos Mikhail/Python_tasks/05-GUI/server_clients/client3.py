# Python program to to create client 3

import socket 

host = '127.0.0.1'
port = 5000

client_3 = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
client_3.bind(('127.0.0.1',3000))

try:
    client_3.connect((host,port))
except socket.error as e:
    print(str(e))

id = 'abc'
type = 'Speed'
id_encoded = id.encode('utf-8')
type_encoded = type.encode('utf-8')

while True:
    value = str(input("Enter Value: "))
    value_encoded = value.encode('utf-8')

    client_3.send(id_encoded)
    client_3.send(type_encoded)

    client_3.send(str(len(value)).encode('utf-8'))
    client_3.send(value_encoded)

    msg = client_3.recv(1024).decode('utf-8')
    print(msg)

    if msg == 'close':
        break

client_3.close()