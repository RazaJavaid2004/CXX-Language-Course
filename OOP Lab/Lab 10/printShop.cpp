#include <iostream>
using namespace std;

template <typename T>
class DynamicQueue {
    T* data;
    int front, rear, count, capacity;
    public:
    DynamicQueue(int s) : capacity(s), front(0), rear(-1), count(0) {
        if(capacity <= 0) throw invalid_argument("Capacity Must Be Positive!");
        data = new T[capacity];
    }
    DynamicQueue(const DynamicQueue& other) : capacity(other.capacity), front(0), rear(other.count - 1), count(other.count) {
        data = new T[capacity];
        int index = 0;
        for(int i = other.front; index < count; ++index) {
            data[i] = other.data[i];
            i = (i + 1) % other.capacity;
        }
    }
    DynamicQueue& operator=(const DynamicQueue& other) {
        if(this != &other) {
            delete[] data;
            capacity = other.capacity;
            count = other.count;
            front = 0;
            rear = other.count - 1;
            data = new T[capacity];
            int index = 0;
            for(int i = other.front; index < other.count; ++index) {
                data[index] = other.data[i];
                i = (i + 1) % other.capacity;
            }
        }
        return *this;
    }
    ~DynamicQueue() {
        delete[] data;
    }
    bool isFull() const {
        return count == this->capacity;
    }
    bool isEmpty() const {
        return count == 0;
    }
    int size() const {
        return count;
    }
    T Front() const {
        if(isEmpty()) throw runtime_error("Queue is Empty!");
        return this->data[front];
    }
    T Rear() const {
        if(isEmpty()) throw runtime_error("Queue is Empty!");
        return this->data[rear];
    }
    void enqueue(T value) {
        if(isFull()) resize(this->capacity * 2);
        rear = (rear + 1) % this->capacity;
        this->data[rear] = value;
        count++;
    }
    void dequeue() {
        if(isEmpty()) throw runtime_error("Queue is Empty!");
        front = (front + 1) % this->capacity;
        count--;
    }
    void resize(int newCapacity) {
        if(newCapacity <= 0) throw invalid_argument("New Capacity Must Be Positive!");
        T* newData = new T[newCapacity];
        int index = 0;
        for(int i = front; index < count; index++) {
            newData[index] = this->data[i];
            i = (i + 1) % this->capacity;
        }
        delete[] this->data;
        this->data = newData;
        this->capacity = newCapacity;
        front = 0;
        rear = count - 1;
    }
    void display() const {
        if(isEmpty()) {
            cout << "Queue is Empty!" << endl;
            return;
        }
        cout << "Queue Elements: ";
        int index = front;
        for(int i = 0; i < count; ++i) {
            cout << this->data[index] << " ";
            index = (index + 1) % this->capacity;
        }
        cout << endl;
    }
};

class PrintShop {
    DynamicQueue <string> printQueue;
    public:
    PrintShop(int s) : printQueue(s) {}
    void addPrintJob(const string& job) {
        cout << "Adding Print Job: " << job << endl;
        printQueue.enqueue(job);
    }
    void processPrintJobs() {
        cout << "Processing Print Jobs... " << endl;
        while(!printQueue.isEmpty()) {
            string job = printQueue.Front();
            printQueue.dequeue();
            cout << "Printing: " << job << endl;
        }
        cout << "All Print Jobs Completed! Printer in Now Idle!" << endl;
    }
};



int main() {
    PrintShop shop(5);

    shop.addPrintJob("Job 1: Business Cards");
    shop.addPrintJob("Job 2: Flyers");
    shop.addPrintJob("Job 3: Posters");
    shop.addPrintJob("Job 4: Brochures");

    shop.processPrintJobs();

    shop.addPrintJob("Job 5: Booklets");
    shop.addPrintJob("Job 6: Banners");

    shop.processPrintJobs();

    return 0;
}