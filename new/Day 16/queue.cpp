#include <iostream>
using namespace std;
template <class T>
class Queue
{
public:
    int front, rear;
    T arr[5];
    Queue()
    {
        front = 0;
        rear = -1;
    }

    void Enqueue(T data)
    {

        if (rear == 4)
        {
            cout << "Queue overflow, cant perform the Enqueue()" << endl;
        }
        else
        {

            rear++;

            arr[rear] = data;
        }
    }

    void Dequeue()
    {

        if (front > rear)
        {
            cout << "stack is empty cant perform the pop()" << endl;
        }
        else
        {
            cout << arr[front] << " element has been removed\n";
            front++;
        }
    }
};

int main()
{
    Queue<double> q;
    int choice;
    double value;

    do
    {
        cout << "\n1. Enqueue";
        cout << "\n2. Dequeue";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to enqueue: ";
            cin >> value;
            q.Enqueue(value);
            break;

        case 2:
            q.Dequeue();
            break;

        case 3:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 3);

    return 0;
}