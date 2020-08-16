#include <iostream>

using namespace std;

//create node data type.
class Node
{
public:
    int data;
    Node *next;  

    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int d, Node *ptr = 0)
    {
        data = d;
        next = ptr;
    }
};

class SinglyLinkedList
{
public:
    Node *head, *tail, *temp, *ptr;

    SinglyLinkedList() //Constructor
    {
        head = tail = 0;
    }
    ~SinglyLinkedList() //Destructor to free memory
    {
        cout << "Deallocalised Memory\n";
        ptr = head;
        while (ptr != NULL)
        {
            temp = head->next;
            delete head;
            head = temp;
        }
    }
    //create function for create a node
    void create();

    // Functions declared for inserting a node.
    void insert_at_begin();
    void insert_at_loc();
    void insert_at_end();

    // Display function for ssl
    void display();
};
//create funtion
void SinglyLinkedList::create()
{
    int n;
    char ch = 'y';

    do
    {
        temp = new Node();
        temp->next = NULL;
        cout << "Enter the node data:";
        cin >> n;
        if (head == NULL)
        {
            head = temp;
            head->data = n;
            head->next = NULL;
            tail = head;
        }

        else
        {
            temp->data = n;
            tail->next = temp;
            tail = temp;
        }
        cout << "Want to enter more nodes ? (y/n) : ";
        cin >> ch;
    } while (ch == 'y');
}

// Append Node(insert node at end)
void SinglyLinkedList::insert_at_end()
{
    temp = new Node();
    cout << "Enter the data to store :";
    cin >> temp->data;
    temp->next = NULL;
    tail->next = temp;
    tail = temp;
    cout << "Inserted!" << endl;
}

//prepend Node(insert node at begin)
void SinglyLinkedList :: insert_at_begin()
{
    temp=new Node();
    cout<<"Enter the data to store:";
    cin>>temp->data;
    temp->next=head;
    head=temp;
    cout << "Inserted!" << endl;
}

//Display Function
void SinglyLinkedList ::display()
{
    if (head == NULL)
    {
        cout << "SSL is Empty.\n";
    }
    ptr = head;
    while (ptr != NULL)
    {
        cout << "-->" << ptr->data;
        ptr = ptr->next;
    }
    cout << "\n";
}

int main(void)
{
    SinglyLinkedList s;
    int option;
    char ch;

    do
    {
        //Menu 
        cout << "Choose the option what to do.\n0 for exit.\n";
        cout << "1.Create a Node\n";
        cout << "2.Appened a node\n";
        cout <<"3.Prepend a Node\n";
        cout << "4.Display the list\n";



        cout<<"Enter option:";//take option
        cin>>option;
        //switch case for options
        switch (option)
        {
            case 1:
            s.create();
            break;
            case 2:
            s.insert_at_end();
            break;
            case 3:
            s.insert_at_begin();
            break;
            case 4:
            s.display();
            break;
        }
        cout<<"Do you choose more?(y/n)";
        cin>>ch;

    } while (ch=='y');//do while for selecting again option

    return 0;
}
