#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class kqueue
{
public:
    int n;
    int k;
    int *front;
    int *arr;
    int freespot;
    int *next;
    int *rear;

public:
    kqueue(int n, int k)
    {
        this->n = n;
        this->k = k;
        front = new int[k];
        rear = new int[k];
        for (int i = 0; i < k; i++)
        {
            front[i] = -1;
            rear[i] = -1;
        }
        next = new int[n];
        for (int i = 0; i < n; i++)
        {
            next[i] = i + 1;
        }
        next[n - 1] = -1;
        freespot = 0;

        arr = new int[n];
    }
    void enqueue(int data, int qn)
    {
        // overflow
        if (freespot == -1)
        {
            cout << "no empty space is present" << endl;
            return;
        }
        // find first index
        int index = freespot;
        // update freespot

        freespot = next[index];
        if (front[qn - 1] == -1)
        {
            front[qn - 1] = index;
        }
        else
        {
            // link new element to the prev element
            next[rear[qn - 1]] = index;
        }
        // update next
        next[index] = -1;
        // update rreaeer
        rear[qn - 1] = index;
        // push element
        arr[index] = data;
    }
    // for pop operation
    /* 1= is empty

    */
    int dequeue(int qn)
    {
        // unnderflow
        if (front[qn - 1] == -1)
        {

            return -1;
        }
        // find index to pop
        int index = front[qn - 1];
        // front ko aage badhao
        front[qn - 1] = next[index];

        // freeslot
        next[index] = freespot;
        freespot = index;
        return arr[index];
    }
};
int main()
{
    kqueue q(10, 3);
    q.enqueue(10, 1);

    q.enqueue(15, 1);
    q.enqueue(20, 2);
    q.enqueue(25, 1);

    cout << q.dequeue(1) << endl;
    cout << q.dequeue(2) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(1) << endl;
}