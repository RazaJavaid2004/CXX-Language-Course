#include <iostream>
using namespace std;

template <typename T>
class DynamicArray {
    protected:
    T* data;
    int capacity;
    public:
    DynamicArray(int s) : capacity(s) {
        if(capacity <= 0) throw invalid_argument("Capacity Must Be Positive!");
        data = new T[capacity];
    }
    DynamicArray(const DynamicArray& other) {
        capacity = other.capacity;
        data = new T[capacity];
        for(int i = 0; i < capacity; ++i) {
            data[i] = other.data[i];
        }
    }
    virtual ~DynamicArray() {
        delete[] data;
    }
    virtual void resize(int newCapacity) = 0;
    int getCapacity() const {
        return capacity;
    }
};

template <typename T>
class DynamicQueue : public DynamicArray <T> {
    int front, rear, count;
    public:
    DynamicQueue(int s) : DynamicArray <T> (s), front(0), rear(-1), count(0) {}
    DynamicQueue(const DynamicQueue& other) : front(0), rear(other.count - 1), count(other.count) {
        this->capacity = other.capacity;
        this->data = new T[this->capacity];
        int index = 0;
        for(int i = other.front; index < count; ++index) {
            this->data[i] = other.data[i];
            i = (i + 1) % other.capacity;
        }
    }
    DynamicQueue& operator=(const DynamicQueue& other) {
        if(this != &other) {
            delete[] this->data;
            this->capacity = other.capacity;
            count = other.count;
            front = 0;
            rear = other.count - 1;
            this->data = new T[this->capacity];
            int index = 0;
            for(int i = other.front; index < other.count; ++index) {
                this->data[index] = other.data[i];
                i = (i + 1) % other.capacity;
            }
        }
        return *this;
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
    void resize(int newCapacity) override {
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

int main() {
    DynamicQueue <int> queue(3);

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.display();

    queue.dequeue();
    queue.display();

    queue.enqueue(40);
    queue.enqueue(50);
    queue.display();

    cout << "Front: " << queue.Front() << endl;
    cout << "Rear: " << queue.Rear() << endl;
    cout << "Size: " << queue.size() << endl;

    return 0;
}