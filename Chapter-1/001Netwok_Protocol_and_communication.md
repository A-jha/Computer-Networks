# Network protocol and communication

## Data Communication

Data communications are the exchange of data between two nodes via some form of link (transmission medium) such as cable.

## Data Flow

Data flow means data is going to flow from one node to another node.

Three different flows are

- Simplex
- Half Duplex
- Full Duplex

### Simplex Dataflow

- Communication is always unidirectional
- One device can transmit and other will receive

  Examples:

  - Keyboard
  - Traditional monitors

### Half Duplex Dataflow

- Communication is in both direction but not at the same time.
- if one device is sending, the other can only receive and viceversa.

  Examples:

  - Walkie-Talkies

### Full Duplex Dataflow or Duplex

- Communication is both direction simultaniously.
- Davice can send and receive data at same time.
  Example:
  - Telephone Lines

## Protocols

All communication schemes will have the following things in common:

- Source or sender
- Destination or receiver
- Channel or media

Rules of protocol govern all methods of communication.

- Protocol = Rule
- It is a set of rules that govern data communication
- Protocol determines:
  - What is communicated?
  - How it is communicated?
  - When it is communicated?

### Need of Protocol in Network Communication

Protocols used in network communication also define :

- Message encoding
- Message formatting and encapsulation
- Message Timing
- Message Size
- Message Delivery option

These are called elements of protocol.

### 1. Message Encoding

![encoing](../assets/encoding.svg)

### 2. Meesage Formatting and Encapsulation

A format on which Sender and Receiver both are aggred.

Encapsulate the information to identify the sender and receiver intigrity.

### 3. Message Size

Human break long message into smaller parts or sentences.

Long message must be broken into smaller part to travel across network.

### 4. Meesage Timing

Message timing deals with **flow control** and **response timeout**.

- flow control : if sender is very fast and receiver is slow than network should mannage the flow of messages .(if flow control is not available then chances of data loss is very high)
- response timeout - an approximate time to get response from sender message or reciever massage.

### 5. Message Delivery Option

- Unicast : One sender and One receiver
- MultiCast : one sender to set of receiver
- Broadcast : one sender to all receiver

## Peer to Peer Network

- No cetralized administration
- All peers are equal
- Simple sharing application
- Not Scalable

## Cleint Server Nework

- Centralized administration
- Request-response model
- Scalable
- Server may be overloaded

![cntralized](../assets/cntralized.svg)
