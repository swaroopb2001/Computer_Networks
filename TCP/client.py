from socket import *
serverName = 'LAPTOP-S5-VINU' serverPort = 12530
clientSocket = socket(AF_INET, SOCK_STREAM)
 
clientSocket.connect((serverName,serverPort)) sentence = input("Enter file name") clientSocket.send(sentence.encode()) filecontents = clientSocket.recv(1024).decode() print ('From Server:', filecontents) clientSocket.close()
