/*
* 
NAME: Eric Amoh Adjei
DATE: 01/21/2024
Project 2: Stack and queue.
*
*/


#include <stdio.h>//This includes the standard input and output library in C++. It's used for operations like reading from and writing to the console.

#include <stdlib.h>// It provides functionalities for dynamic memory allocation, random number generation, communication with the environment, integer arithmetic, searching, sorting, and converting.

#include <iostream>// including iostream directive tells the preprocessor to include other contents file.

#include <fstream>//Stream class to both read and write from/to files. 

#include <string>// with the include String, we can not display a string output or alphabetical characters.

#include <windows.h>// windows.h library allow coders to do more like adding delays like sleep for some seconds

#include <algorithm>//algorithms library defines functions for a variety of purposes

#include <vector>//Constructs a container with as many elements as the range

#include <cstdlib>//defines several general purpose functions, including dynamic memory management, random number generation and more

#include <ctime>//Interprets the value pointed by timer as a calendar time and converts it to a C-string containing a human-readable version

#include <array>//an array includes a certain value among its entries, returning true or false as appropriate

#include <time.h>//defines variable types, two macro and various functions for manipulating date and time. 

#include <cctype>//declares a set of functions to classify and transform individual characters.

#include <list>//This includes the standard library header file for the std::list container. std::list in C++ is a sequence container that allows non-contiguous memory allocation.


// using namespace std to avoid std:: cout repetitions in our code
using namespace std;

/****************************************
*
*
Creating a program that simulates a conversation between two people using a stack and a queue.
Explanation of why this works:

•The stack preserves the order of messages as they are pushed onto it, 
making it suitable for displaying messages in the order they were added.

•The queue, when implemented to store messages in reverse order, 
allows you to retrieve messages in the correct order for playback, as it follows the FIFO behavior.

*/


// Creating my Node structure for a linked list
struct Node 
{

    char message[100];
    Node* next;

    Node(const char* msg) // Creating my Constructor to initialize Node
    { 

        strcpy_s(message, msg); // Copying message to node (strcpy is depreciated)
        next = nullptr;       // Initializing next pointer to nullptr

    }
};


//Creating my Function to add a message to the stack
int stack_size = 0;  // Global variable to track stack size
const int MAX_STACK_SIZE = 100;  // Define maximum stack size

void push(Node** top, const char* message) 
{

    Node* new_node = new Node(message); // Creating my new node with the message
    new_node->next = *top;              // Linking the new node to the current top
    *top = new_node;                    // Updating the top of the stack
    stack_size++;

}


// Creating my Function to remove a message from the stack
void pop(Node** top) 
{

    if (*top == nullptr) 
    {

        cout << "Stack is empty!" << endl;
        return;

    }
    Node* temp = *top;       // This temporarily store the top node
    *top = (*top)->next;     // Moves the top to next node
    delete temp;             // Deletes the old top node

}


//Creating my Function to add a message to the queue
int queue_size = 0;  // Global variable to track queue size
const int MAX_QUEUE_SIZE = 100;  // Define maximum queue size

void enqueue(Node** front, Node** rear, const char* message)
{
    if (queue_size >= MAX_QUEUE_SIZE) {
        cout << "Queue Overflow: Cannot add more messages to the queue!" << endl;
        return;
    }

    Node* new_node = new Node(message); // Creating a new node with the message
    if (*rear == nullptr)
    {
        *front = *rear = new_node; // If queue is empty, new node is both front and rear
        return;

    }
    else {
        (*rear)->next = new_node; // Linking the current rear to the new node
        *rear = new_node;         // Updating the rear to the new node
    }
	queue_size++;
}


//Creating my Function to remove a message from the queue
void dequeue(Node** front, Node** rear) 
{

    if (*front == nullptr) 
    {

        cout << "Queue is empty!" << endl;
        return;
    }
    Node* temp = *front;      // This temporarily store the front node
    *front = (*front)->next;  // Moves the front to next node
    if (*front == nullptr) *rear = nullptr; // If queue is now empty, rear is also nullptr
    delete temp;              // Deletes the old front node

}


//Creating my Function to display messages from a stack or queue
void display(Node* head) 
{

    while (head != nullptr) 
    {

        cout << head->message << endl; // Displays message of each node
        head = head->next;             // Moves to the next node

    }

}


//Creating my Additional Function to display conversation
void displayConversation(Node* stack, Node* queue) 
{
    // Convert stack to queue to maintain order
    Node* tempStack = nullptr;
    while (stack != nullptr) 
    {

        Node* newNode = new Node(stack->message); // Creating my new node with stack's message
        newNode->next = tempStack;                // Pushes it to the temporary stack
        tempStack = newNode;
        pop(&stack);                              // Pops or deletes from original stack

    }

    // Now tempStack has the reversed order of the original stack
    //Creating my Alternate messages from tempStack (Eric's messages) and queue (Amoh's messages)
    while (tempStack != nullptr || queue != nullptr) 
    {

        if (tempStack != nullptr) 
        {

            cout << tempStack->message << endl;   // Display Eric's message
            pop(&tempStack);                      // Pop from tempStack

        }
        if (queue != nullptr) 
        {
            cout << queue->message << endl;       // Display Amoh's message
            queue = queue->next;                  // Move to the next in queue

        }

    }

}



// My main function includes the display option
int main()
{

    srand(time(NULL)); // Initializes the random seed based on the current time


    Node* stack_top = nullptr; // Stack for person 1 (Eric)
    Node* queue_front = nullptr;//Queue for person 2 (Amoh)
    Node* queue_rear = nullptr; //Queue for person 2 (Amoh)



    //Creating my example Fictional conversation messages
    push(&stack_top, "Eric: Hey, what's up?");
    enqueue(&queue_front, &queue_rear, "Amoh: Not much, just chilling.");
    push(&stack_top, "Eric: Doing some coding, you?");
    enqueue(&queue_front, &queue_rear, "Amoh: Oh cool, what are you coding?");
    push(&stack_top, "Eric: Just working on a small project for class.");
    enqueue(&queue_front, &queue_rear, "Amoh: Nice! I'm just watching some TV.");
    push(&stack_top, "Eric: Anything interesting?");
    enqueue(&queue_front, &queue_rear, "Amoh: Yeah, watching 'The 100'. Ever seen it?");
    push(&stack_top, "Eric: Heard of it, never got around to watching it though.");
    enqueue(&queue_front, &queue_rear, "Amoh: It's pretty good, you should check it out.");
    push(&stack_top, "Eric: Maybe I will. Need a break from coding anyway.");
    enqueue(&queue_front, &queue_rear, "Amoh: Definitely, let's catch up later?");
    push(&stack_top, "Eric: Sounds good, talk to you later!");
    enqueue(&queue_front, &queue_rear, "Amoh: Later!");
    push(&stack_top, "Eric: Doing some coding, you?");
    enqueue(&queue_front, &queue_rear, "Amoh: Oh cool, what are you coding?");
    push(&stack_top, "Eric: Just working on a small project for class.");
    enqueue(&queue_front, &queue_rear, "Amoh: Nice! I'm just watching some TV.");
    push(&stack_top, "Eric: Anything interesting?");
    enqueue(&queue_front, &queue_rear, "Amoh: Yeah, watching 'The 100'. Ever seen it?");
    push(&stack_top, "Eric: Heard of it, never got around to watching it though.");
    enqueue(&queue_front, &queue_rear, "Amoh: It's pretty good, you should check it out.");
    push(&stack_top, "Eric: Maybe I will. Need a break from coding anyway.");
    enqueue(&queue_front, &queue_rear, "Amoh: Definitely, let's catch up later?");
    push(&stack_top, "Eric: Sounds good, talk to you later!");
    enqueue(&queue_front, &queue_rear, "Amoh: Later!");
    push(&stack_top, "Eric: Hey, wait, is the stuff up yet?");
    enqueue(&queue_front, &queue_rear, "Amoh: Not much, just hanging out at home.");
    push(&stack_top, "Eric: Same here, bored out of my mind.");
    enqueue(&queue_front, &queue_rear, "Amoh: Want to come over and watch a movie or something?");
    push(&stack_top, "Eric: Sure, that sounds like a good idea.");
    enqueue(&queue_front, &queue_rear, "Amoh: Great, I'll see you in about 30 minutes.");
    push(&stack_top, "Eric: Sounds good, see you soon.");
    enqueue(&queue_front, &queue_rear, "Amoh: Do you have any movie preferences?");
    push(&stack_top, "Eric: Not really, anything you want to watch is fine with me.");
    enqueue(&queue_front, &queue_rear, "Amoh: How about a comedy? I could use a good laugh.");
    push(&stack_top, "Eric: That works for me.");
    enqueue(&queue_front, &queue_rear, "Amoh: Okay, I'm on my way.");
    push(&stack_top, "Eric: Alright, I'll see you soon.");
    enqueue(&queue_front, &queue_rear, "Amoh: Sorry, I'm running a bit late. Be there in 10 minutes.");
    push(&stack_top, "Eric: No worries, take your time.");
    enqueue(&queue_front, &queue_rear, "Amoh: Okay, I'm here.");
    push(&stack_top, "Eric: I'll be right down.");
    enqueue(&queue_front, &queue_rear, "Amoh: Sounds good.");
    push(&stack_top, "Eric: That was a hilarious movie.");
    enqueue(&queue_front, &queue_rear, "Amoh: I'm glad you liked it.");
    // ...the messages can continue....


    //Creating my menu choices
    int choice;
    do 
    {
        //welcomes our user and introduces the app to the user
        cout << "\nWELCOME TO C++ Stack and queue\n A sequence of messages demonstrating a back-and-forth conversation \n between two people (Person-1: Eric & Person-2: Amoh)";
        
        '\n \n';

        cout << "\nChoose an option:\n";
        cout << "1. Display Eric's stack\n";
        cout << "2. Display Amoh's queue\n";
        cout << "3. Display the conversation\n";
        cout << "4. Exit\n";

        cin >> choice;


        switch (choice) 
        {

        case 1:
            cout << "Eric's Stack messages:" << endl;
            display(stack_top);
            break;

        case 2:
            cout << "Amoh's Queue messages:" << endl;
            display(queue_front);
            break;

        case 3:
            cout << "Conversation:" << endl;
            displayConversation(stack_top, queue_front);
            break;

        case 4:
            cout << "Exiting program." << endl;
            break;

        default:
            cout << "Invalid choice, please try again." << endl;

        }

    } while (choice != 4);


    return 0;// exits app

}
