# ⏰ Client–Server Clock (C++)

This project demonstrates a **client–server application in C++** that exchanges messages and works with system time.  
It provides a simple example of how to implement socket communication between a server and multiple clients, as well as how to send data such as the current time.


---

## ⚙️ Requirements

- **C++ compiler** (g++, clang++)
- **Linux/Unix environment** (sockets are used)
- Optional: multiple terminal windows to test multiple clients

---

## 🔨 Build

To compile the entire project, simply run:

```bash
make
```

This will generate the binaries:

- server

- client

- clock

You can also build them manually:
```bash
g++ server.cpp -o server
g++ client.cpp -o client
g++ clock.cpp -o clock
```

## 🚀 Run

1. Start the server (e.g., on port 8080):
```bash
./server 8080
```
2. Start the client (connects to the server):
```bash
./client 127.0.0.1 8080
```
3. Clock program
The clock binary demonstrates handling of system time and can be used as part of the client–server communication or independently:
```bash
./clock
```

## 🌐 Functionality

- The server listens for incoming client connections.

- The client connects to the server and exchanges messages.

- The clock module can provide the current system time.

- Communication can include simple requests/responses, such as retrieving and displaying the current time.

## 🧑‍💻 Author

Created by **Adam Kuchár**  