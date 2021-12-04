# Basics Linux Command to be Used

0. To Create a file

```
touch arp.txt
```

1. To open the file

```
vi arp.txt
```

2. To Open code Editor

```
vi filename.c

after that write your code
```

3. To Save the code

```
:wq
```

4. To Compile the code

```
gcc filename.c
```

5. To run the code

```
./a.out
```

# Basic FTP Command

## 1. Sending Data to other system

1. While Sending Data to other system first connect to your system and then put the data

   1. add your system ip
      ```
      ~ ftp "192.168.200.7"
      ~ connected
      ~ Name: roll1
      ~password: roll123
      ```
   2. to send information
      ```
      put arp.txt
      ```

2. To Receive data while connecting use the sender system IP address

```
ftp close

ftp open

ftp "192.168.200.9"

ftp roll1 -- username

ftp roll123 --password
```

3. to get out of ftp

```
ftp bye

or

ctrl + Z
```

# Socket Programming In C

## What are Sockets ?

- Sockets are the low level endpoint used for processing information across a network.

- Common networking protocols like HTTP, and FTP rely on sockets underneath to make connections.

## Client Socket Workflow

The client socket is created with a socket[] call, and connected to a remote address with the connect[] call, and then finally can retrieve data with the recv[] call.

![client-socket](./img/client.png)

## Server Socket Workflow

On the "Server" end of thr socket, we need to also create a socket with a **socket[]** call, but then, we need to **bind[]** the socket to an ip and port where it can then **listen[]** for connections and then finally **accept[]** a connection and then **send[]** or **recv[]** data to the other sockets it has connected to.

![server-flow](./img/server.png)
