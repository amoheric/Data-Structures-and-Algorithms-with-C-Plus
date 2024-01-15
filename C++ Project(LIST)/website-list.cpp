/*
NAME: ERIC AMOH ADJEI
DATE:  01/14/2024
ASSIGNMENT 1: LIST
*/


 /*
I'm including the necessary headers:
<iostream> for console input/output and <string> for using the string class.
using namespace std; allows me to avoid prefixing standard library names with std::
 */
#include <iostream>
#include <string>
using namespace std;


 /*
   Here, I define a Node struct for each webpage.
   Each node has a URL, and pointers to the next and previous nodes in the list.
   The constructor initializes these members.
 */
 // Node structure representing each webpage in the linked list
struct Node 
{
    string url; // Stores the URL of the webpage
    Node* next; // Pointer to the next node in the list
    Node* prev; // Pointer to the previous node in the list

    // Constructor to initialize the node with a URL
    Node(string url) : url(url), next(nullptr), prev(nullptr) {}

};

// Class for managing the linked list of webpages
class WebsiteList 
{

private:
    Node* head; // Pointer to the first node in the list
    Node* tail; // Pointer to the last node in the list
    Node* current; // Pointer to the current node for navigation



   /*
    I create a WebsiteList class to manage the linked list.
    It has private pointers to the head, tail, and a current node for navigation.
    The constructor initializes these to nullptr and populates the list with predefined URLs.
   */
public:
    // Constructor initializing pointers to nullptr
    WebsiteList() : head(nullptr), tail(nullptr), current(nullptr) 
    { 
        /* InitializING the list with the given URLs,In the constructor,
        I call addItem for each predefined URL to populate the list. */
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
        addItem("http://homedepot.com"); // I CAN Add more URLs as needed as predefined urls

    }


    /*
    displayList WILL traverses the list from head to tail, printing each URL.
    If the list is empty, it outputs "List is empty."
    */
    // Display all URLs in the list
    void displayList() 
    {
        Node* temp = head; // Starting from the head of the list
        if (temp == nullptr) // Check if the list is empty
        {
            cout << "List is empty." << endl;
            return;

        }

        while (temp != nullptr) { // Traverse the list
            cout << temp->url << endl; // Print each URL
            temp = temp->next; // Move to the next node

        }

    }


    /*
    moveForward and moveBackward CAN change the current pointer to navigate through the list,
    handling cases like reaching the end or start of the list. 
    */
    // Navigate forward in the list
    void moveForward() 
    {
        if (current == nullptr) current = head; // Start from head if current is null
        else if (current->next == nullptr)  // Check if end of the list is reached 
        {
            cout << "You have reached the end of the list." << endl;
            return;

        }
        else
        {
            current = current->next; // Move to the next node

        }
        cout << "The Current URL: " << current->url << endl;

    }


    // Navigate backward in the list
    void moveBackward() 
    {

        if (current == nullptr) current = tail; // Start from tail if current is null
        else if (current->prev == nullptr) // Check if start of the list is reached
        {
            cout << "You've Reached the beginning of the list." << endl;
            return;

        }
        else
        {
            current = current->prev; // Move to the previous node

        }
        cout << "Current URL: " << current->url << endl;

    }


    /*
    In addItem, I create a new node with the given URL and add it to the end of the list.
    */
    // Add a new URL to the list
    void addItem(string url) 
    {
        Node* newNode = new Node(url); // Creating a new node
        if (!head)                    // If the list is empty
        {
            head = tail = newNode; // Sets the new node as both head and tail

        }

        else // If the list is not empty
        {
            tail->next = newNode; // Links the new node after the current tail
            newNode->prev = tail; // Sets the new node's previous to the current tail
            tail = newNode; // Updates the tail to the new node

        }

    }

    // Delete a URL from the list
    /*
    In deleteItem, I search for a node with the specified URL and remove it from the list if found.
    */
    void deleteItem(string url) 
    {
        Node* temp = head;  // Starts from the head
        while (temp != nullptr)  // To Iterate through the list
        {
            if (temp->url == url) // If any URL is found
            {
                if (temp->prev) temp->prev->next = temp->next; // Unlinks the node from the list
                if (temp->next) temp->next->prev = temp->prev;
                if (temp == head) head = temp->next; // Updates the head if necessary
                if (temp == tail) tail = temp->prev; // Updates the tail if necessary
                delete temp; // Free up the memory of the node
                cout << "URL deleted: " << url << endl; // Displays the URL of each node

                return;
            }
            temp = temp->next;  // Moves to the next node
        }
        cout << "URL not found: " << url << endl; // URL not found in the list
    }


    /*
    findItem searches the list for a node with the given URL and returns it if found.
    If not found, it returns nullptr.
    */
    // Finds a URL in the list
    Node* findItem(string url)
    {
        Node* temp = head; // Starts from the head of the list

        while (temp != nullptr) // Iterates through the list
        {
            if (temp->url == url) // If URL is found
            {
                cout << "URL found: " << url << endl;
                return temp; // Returns the node containing the URL

            }
            temp = temp->next; // Movse to the next node

        }
    }

};


    /*
    In main, I create an instance of WebsiteList,
    display a menu, and process user choices for different list operations.
   */
   // Main function to demonstrate list operations
int main()
{

    // Welcome message and introduction
    cout << "Welcome to the Website Manager App!" << endl;
    cout << "This app allows you to manage a list of websites." << endl;

    // User input for name and age
    string name;
    cout << "Please enter your name: ";
    getline(cin, name); // Using getline to read a line of text

    string age;
    cout << "Please enter your age: ";
    getline(cin, age); // Using getline for age as a string to keep it simple

    // Outputting the user's name and age
    cout << "Hi " << name << ", you are " << age << " years old." << endl;

    // Additional information
    cout << "Here are the available Menu functions of the app:" << endl;


    WebsiteList myList;  // Creating an instance of WebsiteList
    int choice;
    string url;




    do // Display menu options
    {
        cout << "\nMenu\n";
        cout << "1. Display List\n2. Move Forward\n3. Move Backward\n";
        cout << "4. Add Item\n5. Delete Item\n6. Find Item\n7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;


        switch (choice)

        {
        case 1: myList.displayList(); 
            break;
        case 2: myList.moveForward(); 
            break;
        case 3: myList.moveBackward(); 
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
            break;

        }

    } while (choice != 7); // This Continues until the user chooses to exit

    return 0; //Exit app

}

