#include <iostream>
#include <string>
using namespace std;

// Node structure representing each webpage in the linked list
struct Node {
    string url; // Stores the URL of the webpage
    Node* next; // Pointer to the next node in the list
    Node* prev; // Pointer to the previous node in the list

    // Constructor to initialize the node with a URL
    Node(string url) : url(url), next(nullptr), prev(nullptr) {}
};

// Class for managing the linked list of webpages
class WebsiteList {
private:
    Node* head; // Pointer to the first node in the list
    Node* tail; // Pointer to the last node in the list
    Node* current; // Pointer to the current node for navigation

public:
    // Constructor initializing pointers to nullptr
    WebsiteList() : head(nullptr), tail(nullptr), current(nullptr) {
        // Populate the list with predefined URLs
        addItem("http://amoheric.com");
        addItem("http://jw.org");
        addItem("http://123movies.com");
        addItem("http://homedepot.com");
        addItem("http://jw.org");
        addItem("http://google.org");
        addItem("http://microsoft.org");
        addItem("http://bing.org");
        addItem("http://jw2.org");
        addItem("http://jw3.org");
        addItem("http://jw4.org");
        addItem("http://jw5.org");
        addItem("http://jw6.org");
        addItem("http://jw7.org");
        addItem("http://jw8.org");
        addItem("http://canva.com");
        addItem("http://pinterest.com");
        addItem("http://credstat.net");
        addItem("http://jw9.org");
        addItem("http://jw0.org");
        addItem("http://jw1.org");
        addItem("http://123movies.com");
        addItem("http://homedepot.com");
        // Add more URLs as needed
    }

    // Display all URLs in the list
    void displayList() {
        Node* temp = head;
        if (temp == nullptr) {
            cout << "List is empty." << endl;
            return;
        }
        while (temp != nullptr) {
            cout << temp->url << endl;
            temp = temp->next;
        }
    }

    // Navigate forward in the list
    void moveForward() {
        if (current == nullptr) current = head;
        else if (current->next == nullptr) {
            cout << "End of the list." << endl;
            return;
        }
        else current = current->next;
        cout << "Current URL: " << current->url << endl;
    }

    // Navigate backward in the list
    void moveBackward() {
        if (current == nullptr) current = tail;
        else if (current->prev == nullptr) {
            cout << "Start of the list." << endl;
            return;
        }
        else current = current->prev;
        cout << "Current URL: " << current->url << endl;
    }

    // Add a new URL to the list
    void addItem(string url) {
        Node* newNode = new Node(url);
        if (!head) head = tail = newNode;
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Delete a URL from the list

    void deleteItem(string url) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->url == url) {
                if (temp->prev) temp->prev->next = temp->next;
                if (temp->next) temp->next->prev = temp->prev;
                if (temp == head) head = temp->next;
                if (temp == tail) tail = temp->prev;
                delete temp;
                cout << "URL deleted: " << url << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "URL not found: " << url << endl;
    }

    // Find a URL in the list
    Node* findItem(string url) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->url == url) {
                cout << "URL found: " << url << endl;
                return temp;
            }
            temp = temp->next;
        }
        cout << "URL not found: " << url << endl;
        return nullptr;
    }
};

// Main function to demonstrate list operations
int main() {
    WebsiteList myList;
    int choice;
    string url;


    do {
        cout << "\nMenu\n";
        cout << "1. Display List\n2. Move Forward\n3. Move Backward\n";
        cout << "4. Add Item\n5. Delete Item\n6. Find Item\n7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: myList.displayList(); break;
        case 2: myList.moveForward(); break;
        case 3: myList.moveBackward(); break;
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
            break;
        }
    } while (choice != 7);

    return 0;
}

