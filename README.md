# Stack-using-LINKED-LIST-SINGLY-LINKED-LIST-
Stack Implementation using Singly Linked List in C
This project demonstrates a simple stack (LIFO - Last In First Out) implementation using a Singly Linked List (SLL) in C programming language.

Features
Push Operation: Insert an element into the stack.

Pop Operation: Remove the top element from the stack.

Peek Operation: View the top element without removing it.

Display Operation: Show all elements present in the stack.

Handles Stack Overflow (memory full) and Stack Underflow (no elements) scenarios.

Files
stack_sll.c: Main source code file containing the full implementation.

How It Works
Each node in the singly linked list represents an element of the stack.

The top of the stack is managed by a pointer (tos - Top Of Stack).

Push creates a new node at the beginning of the list.

Pop deletes the node at the beginning and returns its data.

Peek simply returns the data of the top node without modifying the stack.

Display traverses the list and prints all node values from top to bottom.

Sample Menu
bash
Copy
Edit
1. Push
2. Pop
3. Display All
4. Display Peek Value
How to Compile and Run
bash
Copy
Edit
gcc stack_sll.c -o stack_sll
./stack_sll
Example Usage
mathematica
Copy
Edit
Enter the option: 1
Enter a number to be pushed: 10
Enter the option: 1
Enter a number to be pushed: 20
Enter the option: 3
The Stack Elements are:
20
10
Enter the option: 2
Popped Element is 20
Enter the option: 4
Peek Element is 10
Requirements
GCC Compiler

Basic understanding of pointers and dynamic memory management in C.

Notes
malloc() is used to dynamically allocate memory for each new node.

free() is used to deallocate memory after popping elements.

Error handling included for both overflow (rare) and underflow (common) conditions.

fflush(stdin) is used to clear the input buffer before taking character input, although it is not standard practice in modern C. Refer to: Why fflush(stdin) is Undefined Behavior in C (Stack Overflow).

References
GeeksforGeeks - Stack Data Structure

GeeksforGeeks - Stack using Linked List

TutorialsPoint - Data Structure Stack

Would you also like me to create a nice badge layout or a GitHub Actions workflow suggestion for building/testing this project? 🚀


















