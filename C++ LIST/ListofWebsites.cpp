#include <iostream>
#include <string>
using namespace std;

// Node structure to represent each webpage
struct Node {
    string url; // URL of the webpage
    Node* next; // Pointer to the next node
    Node* prev; // Pointer to the previous node

    // Constructor for initializing the node with a URL
    Node(string url) : url(url), next(nullptr), prev(nullptr) {}
};

// Class for managing the linked list of webpages
class LinkedList {
    Node* head; // Pointer to the first node in the list
    Node* tail; // Pointer to the last node in the list
    Node* current; // Pointer to the current node for navigation

public:
    LinkedList() : head(nullptr), tail(nullptr), current(nullptr) {}

    // Adding a new webpage to the list
    void add(string url) 
    {
        Node* newNode = new Node(url); // Create a new node
        if (!head) // If the list is empty
        { 
            head = tail = newNode; // The new node becomes both head and tail
        }
        else 
        {
            tail->next = newNode; // Link new node at the end of the list
            newNode->prev = tail; // Update new node's previous pointer
            tail = newNode; // Update tail to new node
        }
        if (!current) current = head; // Set current to head if it's not set
    }

    
        // Displays all webpages in the list
        void display()
        {
         Node* temp = head; // Start from the head
         while (temp) 
         {
            cout << temp->url << "\n"; // Display the URL of each node
            temp = temp->next; // Move to the next node
         }

        }

    // Navigate to the next webpage
    void goForward()
    {
        if (current && current->next) // If next node exists
        { 
            current = current->next; // Move current to next node
            cout << "Current webpage: " << current->url << "\n";
        }
        else 
        {
            cout << "Reached the end of the list.\n";
        }

    }

    // Navigate to the previous webpage
    void goBackward() {
        if (current && current->prev) { // If previous node exists
            current = current->prev; // Move current to previous node
            cout << "Current webpage: " << current->url << "\n";
        }
        else {
            cout << "Reached the beginning of the list.\n";
        }
    }

    // Delete a webpage from the list
    void deleteItem(string url) 
    {
        Node* temp = head;
        Node* prev = nullptr;

        // If head node itself holds the key to be deleted
        if (temp != nullptr && temp->url == url)
        {
            head = temp->next; // Changed head
            delete temp;       // free old head
            return;
        }

        // Search for the key to be deleted
        while (temp != nullptr && temp->url != url)
        {
            prev = temp;
            temp = temp->next;
        }

        // If key was not present in linked list
        if (temp == nullptr) return;

        // Unlink the node from linked list
        prev->next = temp->next;
        delete temp; // Free memory
    }

    // Find any webpage in the list
    Node* find(string url) 
    {
        Node* current = head; // Initialize current
        while (current != nullptr)
        {
            if (current->url == url)
                return current;
            current = current->next;
        }
        return nullptr;
    }
};

int main() 
{
    LinkedList list;
    int choice;
    string url;


        cout << "Welcome to the Webpage Navigation System!\n";

    // Initial population of the list with 20 websites
    for (int i = 1; i <= 20; ++i)
    {
        list.add("Website" + to_string(i));
    }

    // Menu for user interaction
    do
    {
        cout << "\nMenu:\n";
        cout << "1. Display List\n";
        cout << "2. Go Forward and Display Webpage\n";
        cout << "3. Go Backward and Display Webpage\n";
        cout << "4. Add Another Item to the List\n";
        cout << "5. Delete an Item from the List\n";
        cout << "6. Find an Item in the List\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            // Implementing switch cases for each menu option
        case 1:
            list.displayList();
            break;
        case 2:
            myList.moveForward();
            break;
        case 3:
            myList.moveBackward();
            break;
        case 4:
            cout << "Enter URL to add: ";
            cin >> url;
            myList.addItem(url);
            break;
        case 5:
            cout << "Enter URL to delete: ";
            cin >> url;
            myList.deleteItem(url);
            break;
        case 6:
            cout << "Enter URL to find: ";
            cin >> url;
            myList.findItem(url);
            break;
        case 7:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 7);

    return 0; // Return to exit the application
}