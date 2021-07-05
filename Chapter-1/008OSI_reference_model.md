# OSI Refernce Model

The pupose of OSI model is to show how to facilitate communication between different system without requiring changes to the logic of the underlying hardware and software.

## Layers in OSI Reference Model

> Application Layer

> Presentation Layer

> Session Layer

> Transport Layer

> Network Layer

> Data Link Layer

> Physical Layer

Shortcut : **P**lease **D**o **N**o**T** **S** **P** **A**

![OSI-REF](../assets/OSIREF.svg)

## How Layers in OSI Model Works ?

1. Application Layer

   - lets say your application layers is generating some confidential data.and you want to send this information to another user like
     > _my password is @@@@@@@@@@@@@@_

2. Presentation layer
   - presentation layer modifies the data and covrts it into some format and after conversion it is givent to session layer.
     > asdfhbsajhvshdb\*?cxvnbx
3. Session Layer

   - Session layers carry this information to transport layer.

4. Transport layer
   - here transport layer information is added to the data.
     > `TL INFO`--asdfhbsajhvshdb\*?cxvnbx
   - Then forwarded to Network layer
5. Network Layer

   - Here data is added with Network layer informations
     > `NL INFO`-- TL INFO--asdfhbsajhvshdb\*?cxvnbx
   - Then forwarded to data link layer.

6. Data Link Layer

   - Here some data link information is also added to the original data.
     > `DL INFO` -- NL INFO -- TL INFO -- asdfhbsajhvshdb\*?cxvnbx
   - Now the data is forwarded to Physical layer

7. Physical Layer
   - Physical layer encode entire data into binary and sent it to the destination .
   - Physical Layer Knows about the connected medium too.
   - if connected medium is wired the signal will be sent.
   - if connected medium is wireless the wave
   - if connected medium is optical fiber then light.
   - if connected medium is Ethernet cable then electric signal.
   - sent info is like this
     > 0100001000000001001001010101001001010100101010101010010100101001010

## 1. Application Layer

It enables the user to access the network resources.

### Services Provided by Application Layer

- File Transfer and Access Management(FTAM)
- Mail Service

- Directory Service

## 2. Presentation Layer

It is concerned with the **syntax and semantics** of the information exchange between two syatem.

### Services Provided by Presentetatin layer

- Translation -covertin data to commin format such that sender and receiver are at same page
- Encryption - secure the information such that only sender and receiver can access the information

- Compression - Reducing the number of bits of information so the information is of minimum size during the process

## 3. Session Layer

It establishes , maintains , and synchronizes the interaction among communicating devices.

### Services Provided by Session Layer

- Dialoge control - Session layer allows two system to enter in a dialog, dialog means it a communication between two system either in half or full duplex mode.

- Synchronization

## 4. Transport layer

It is responsible for the process to process delivery of the entire maessage.

- Two computer communicate with each other means two processes are communicating one in each system.

### Servises provided by Transport layer

- Port Addressing - if request is sent to server then server will hand over the data to the porocess no then Process will find the receiver port no and response will appear.
- Segementation and Reassembly - suppose a large message is sent from server then Transport layer reassemble each segment and make a complete message.
- connection control
- End-to-End flow Control - if sender is fast and receiver is slow then it is upto Transport layer to match the speed or adjust the speed of data flow.(perevent data loss)

- Error Control - if response has error then transport layer will control the response and handle the error.this error is transmission error.

## 5. Network Layer

It is responsible for delivery of data from the original source to the desnation network.

### Services offered by Network Layer

- Logical Addressing - source IP address and destination IP address
- Routing - Finding the best riute to send the data (if there is multiple route for packet to transmit the finding the best route is handled by netwok layer )

## 6. Data Link Layer

It is responsible for moving the data (frames) from one node to another node.

### Services provided by data link layer

- Framing - Data link layer groups the bits(0 and 1) as frame
- Physical Addresing - it the responsiblity of data link layer to handle source MAC address and Destination MAC address
- Flow Control
- Error Control

- Access Control - Two or more node are connected to same link then data link layer decides which node has access for now.

## 7. Physical layer

Physical layer is responsible for transmitting bits over a medium.

It also provides electrical and mechanical specification.

### Services Offered by physical layers

- Physical charecteristics of media - whether it's wired or Wireless media.
- Representation of Bits - Types of encoding (how 0 and 1 are coverted into signals)
- data rate - Rate of transmission of bits (No of bits sent each second)
- Synchronization of Bits - The clock between receiver and sender must be synchronized
- Line Configuration - whether it is a Point-to-Point(one channel/medium for communication) communication or Point-to-Multipoint(common channel of medium is shared by many nodes) communication

- Physical Topology - How devices are connected in a network(different topologies)

- Transmission mode - whether it is simplex halfduplex or duplex
