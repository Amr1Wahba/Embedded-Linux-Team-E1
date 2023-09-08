# Python program to to create server

import socket
from threading import Thread


def new_client(client,add):
    while True:
      id = str(client.recv(3).decode("utf-8"))
      type = str(client.recv(5).decode("utf-8"))


      value_length = client.recv(1).decode('utf-8')
      value = client.recv(int(value_length)).decode("utf-8")

      print(f'("id": "{id}", "Value": {value}, "type": "{type}")')
      
      msg = "I got message".encode('utf-8')
      client.sendall(msg)

      close_msg = str(input(f"Do you want to end connection with '{add}' ? (y,n): "))
      if close_msg == 'y':
            client.send('close'.encode('utf-8'))
            # break
            client.close()


host = '127.0.0.1'
port = 5000

server = socket.socket(socket.AF_INET,socket.SOCK_STREAM)

try:
      server.bind((host,port))
except  socket.error as e:
     print(str(e)) 

# The server is listening to the port
server.listen()

while True:

    client, address = server.accept()
    print(f"Server is now connected to : '{address[0]}':{address[1]}")

    thread = Thread(target=new_client, args=(client,address))
    thread.start()

thread.join()
