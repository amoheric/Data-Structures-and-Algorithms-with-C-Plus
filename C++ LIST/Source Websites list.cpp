// linked list using list library

#include <iostream>
#include <list>
#include <string>
using namespace std;



// Node structure representing each element in the list
struct Node {
    std::string url; // Data part of the node, storing the website URL
    Node* next; // Pointer to the next node in the list
    Node* prev; // Pointer to the previous node in the list

    // Constructor to initialize the node with a URL and set pointers to null
    Node(std::string url) : url(url), next(nullptr), prev(nullptr) {}
};

// Class representing the linked list
class LinkedList {
    Node* head; // Pointer to the first node in the list
    Node* tail; // Pointer to the last node in the list
    Node* current; // Pointer to the current node for navigation

public:
    // Constructor to initialize an empty list
    LinkedList() : head(nullptr), tail(nullptr), current(nullptr) {}

    void add(string url); // Method to add a node to the list
    void display(); // Method to display the entire list
    void displayForward(); // Method to navigate forward in the list
    void displayBackward(); // Method to navigate backward in the list
    void deleteItem(string url); // Method to delete a node from the list
    Node* find(string url); // Method to find a node in the list
};

void LinkedList::add(string url) {
    Node* newNode = new Node(url); // Create a new node with the given URL
    if (!head) { // If the list is empty
        head = tail = newNode; // Set the new node as both head and tail
    }
    else { // If the list is not empty
        tail->next = newNode; // Link the new node after the current tail
        newNode->prev = tail; // Set the new node's previous to the current tail
        tail = newNode; // Update the tail to the new node
    }
    if (!current) current = head; // If current is null, set it to head
}

void LinkedList::display() {
    Node* temp = head; // Start from the head
    while (temp) { // Iterate through the list
        cout << temp->url << " "; // Display the URL of each node
        temp = temp->next; // Move to the next node
    }
    std::cout << std::endl;
}

// ... Implement other methods like displayForward, displayBackward, deleteItem, find

int main() {
    // Example usage of the LinkedList class
    LinkedList list;
    list.add("http://example.com");
    list.add("http://example.org");
    list.display();
    // Add more functionality tests here
    return 0;
}


// Implement add, display, displayForward, displayBackward, deleteItem, and find functions

// Implementation of deleteItem function
void LinkedList::deleteItem(string url) {
    Node* temp = head;
    Node* prev = nullptr;

    // If head node itself holds the key to be deleted
    if (temp != nullptr && temp->url == url) {
        head = temp->next; // Changed head
        delete temp;       // free old head
        return;
    }

    // Search for the key to be deleted
    while (temp != nullptr && temp->url != url) {
        prev = temp;
        temp = temp->next;
    }

    // If key was not present in linked list
    if (temp == nullptr) return;

    // Unlink the node from linked list
    prev->next = temp->next;
    delete temp; // Free memory
}

// Implementation of find function
Node* LinkedList::find(string url) {
    Node* current = head; // Initialize current
    while (current != nullptr) {
        if (current->url == url)
            return current;
        current = current->next;
    }
    return nullptr;
}




int main() {
    LinkedList list;
    int choice;
    string url;

    // Add initial 20 websites
    for (int i = 1; i <= 20; ++i)
    {
        list.add("Website" + std::to_string(i));
    }

    do {
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

        switch (choice) {
        case 1:
            list.display();
            break;
        case 2:
            list.displayForward();
            break;
        case 3:
            list.displayBackward();
            break;
        case 4:
            cout << "Enter URL to add: ";
            cin >> url;
            list.add(url);
            break;
        case 5:
            cout << "Enter URL to delete: ";
            cin >> url;
            list.deleteItem(url);
            break;
        case 6:
            cout << "Enter URL to find: ";
            cin >> url;
            if (list.find(url) != nullptr)
                cout << "URL found.\n";
            else
                cout << "URL not found.\n";
            break;
        case 7:
            cout << "Exiting.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 7);
    /*
    list.add("http://amoheric.com");
    list.add("http://jw.org");
    list.add("http://google.org");
    list.add("http://microsoft.org");
    list.add("http://bing.org");
    list.add("http://jw2.org");
    list.add("http://jw3.org");
    list.add("http://jw4.org");
    list.add("http://jw5.org");
    list.add("http://jw6.org");
    list.add("http://jw7.org");
    list.add("http://jw8.org");
    list.add("http://canva.com");
    list.add("http://pinterest.com");
    list.add("http://credstat.net");
    list.add("http://jw9.org");
    list.add("http://jw0.org");
    list.add("http://jw1.org");
    list.add("http://123movies.com");
    list.add("http://homedepot.com");
    list.display();
    */


    return 0;//return exit app
}
}


/*struct Node {
    std::string url;
    Node* next;
    Node* prev;

    Node(std::string url) : url(url), next(nullptr), prev(nullptr) {}
};


class LinkedList {
    Node* head;
    Node* tail;
    int size;

public:
    LinkedList() : head(nullptr), tail(nullptr), size(0) {}

    void add(std::string url);
    void display();
    void displayForward();
    void displayBackward();
    void deleteItem(std::string url);
    Node* find(std::string url);
    // Additional helper functions
};


class LinkedList {
    Node* head;
    Node* tail;
    int size;

public:
    LinkedList() : head(nullptr), tail(nullptr), size(0) {}

    void add(std::string url);
    void display();
    void displayForward();
    void displayBackward();
    void deleteItem(std::string url);
    Node* find(std::string url);
    // Additional helper functions
};
*/