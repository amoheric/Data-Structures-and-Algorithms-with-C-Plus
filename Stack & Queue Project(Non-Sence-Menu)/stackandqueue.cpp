#include <iostream>
#include <cstring>

using namespace std;

// Node structure for a linked list
typedef struct node 
{
    char message[100];
    struct node* next;

} Node;


// Function to add a message to the stack
void push(Node** top, const char* message) 
{
    Node* new_node = new Node;
    strcpy_s(new_node->message, message);
    new_node->next = *top;
    *top = new_node;
}

// Function to remove a message from the stack
void pop(Node** top) {
    if (*top == nullptr) {
        cout << "Stack is empty!" << endl;
        return;
    }
    Node* temp = *top;
    *top = (*top)->next;
    delete temp;
}

// Function to add a message to the queue
void enqueue(Node** front, Node** rear, const char* message) {
    Node* new_node = new Node;
    strcpy_s(new_node->message, message);
    new_node->next = nullptr;
    if (*rear == nullptr) {
        *front = *rear = new_node;
        return;
    }
    (*rear)->next = new_node;
    *rear = new_node;
}

// Function to remove a message from the queue
void dequeue(Node** front, Node** rear) {
    if (*front == nullptr) {
        cout << "Queue is empty!" << endl;
        return;
    }
    Node* temp = *front;
    *front = (*front)->next;
    if (*front == nullptr) *rear = nullptr;
    delete temp;
}

// Function to display messages from a stack or queue
void display(Node* head) {
    while (head != nullptr) {
        cout << head->message << endl;
        head = head->next;
    }
}

// Main function
int main() 
{
    srand(time(NULL)); // Initializes the random seed based on the current time

    Node* stack_top = nullptr;
    Node* queue_front = nullptr;
    Node* queue_rear = nullptr;

    // Example Fictional conversation messages
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


    // ... add more messages ...

    int choice;
    do {
        cout << "\nChoose an option:\n";
        cout << "1. Display the stack\n";
        cout << "2. Display the queue\n";
        cout << "3. Exit\n";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Stack messages:" << endl;
            display(stack_top);
            break;
        case 2:
            cout << "Queue messages:" << endl;
            display(queue_front);
            break;
        case 3:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice, please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}