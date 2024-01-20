#include <iostream>
#include <string>

// Node structure for each webpage
struct Node {
    std::string url;
    Node* next;
    Node* prev;

    // Constructor to initialize the node with URL and null pointers
    Node(std::string url) : url(url), next(nullptr), prev(nullptr) {}
};

// Class for managing the linked list
class LinkedList {
    Node* head;
    Node* tail;
    Node* current;

public:
    LinkedList() : head(nullptr), tail(nullptr), current(nullptr) {}

    void add(std::string url);
    void display();
    void goForward();
    void goBackward();
    void deleteItem(std::string url);
    Node* find(std::string url);
    // Additional helper functions
};

// Function to add new webpage to the list
void LinkedList::add(std::string url) {
    Node* newNode = new Node(url);
    if (!head) {
        head = tail = newNode;
    }
    else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    if (!current) current = head;
}

// Function to display all webpages in the list
void LinkedList::display() {
    Node* temp = head;
    while (temp) {
        std::cout << temp->url << "\n";
        temp = temp->next;
    }
}

// Function to navigate to the next webpage
void LinkedList::goForward() {
    if (current && current->next) {
        current = current->next;
        std::cout << "Current webpage: " << current->url << "\n";
    }
    else {
        std::cout << "Reached the end of the list.\n";
    }
}

// Function to navigate to the previous webpage
void LinkedList::goBackward() {
    if (current && current->prev) {
        current = current->prev;
        std::cout << "Current webpage: " << current->url << "\n";
    }
    else {
        std::cout << "Reached the beginning of the list.\n";
    }
}

// ... Implement other methods like deleteItem, find

int main() 
{
    LinkedList list;
    int choice;
    std::string url;

    std::cout << "Welcome to the Webpage Navigation System!\n";

    do 
    {
        std::cout << "\nMenu:\n";
        std::cout << "1. Display List\n";
        std::cout << "2. Go Forward and Display Webpage\n";
        std::cout << "3. Go Backward and Display Webpage\n";
        std::cout << "4. Add Another Item to the List\n";
        std::cout << "5. Delete an Item from the List\n";
        std::cout << "6. Find an Item in the List\n";
        std::cout << "7. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

      
            switch (choice) 
            {
            case 1:
                list.display();
                break;
            case 2:
                list.goForward();
                break;
            case 3:
                list.goBackward();
                break;
            case 4:
                std::cout << "Enter URL to add: ";
                std::cin >> url;
                list.add(url);
                break;
            case 5:
                std::cout << "Enter URL to delete: ";
                std::cin >> url;
                list.deleteItem(url);
                break;
            case 6:
                std::cout << "Enter URL to find : ";
                    std::cin >> url;
                if (list.find(url) != nullptr)
                    std::cout << "URL found.\n";
                else
                    std::cout << "URL not found.\n";
                break;
            case 7:
                std::cout << "Exiting the program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
            }
    } while (choice != 7);

    
     
        return 0;

}