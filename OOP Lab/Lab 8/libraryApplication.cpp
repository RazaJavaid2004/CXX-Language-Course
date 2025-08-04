#include <iostream>
using namespace std;

class Media {
    protected:
    string title;
    bool isBorrowed;
    public:
    Media(const string& t = "", bool b = false) : title(t) , isBorrowed(b) {}
    void borrowMedia() {
        if(isBorrowed) {
            cout << "\"" << title << "\"" << " is Already Borrowed!" << endl;
        }
        else {
            isBorrowed = true;
            cout << "\"" << title << "\"" << " has been Borrowed!" << endl;
        }
    }
    void returnMedia() {
        if(!isBorrowed) {
            cout << "\"" << title << "\"" << " was not Borrowed!" << endl;
        }
        else {
            isBorrowed = false;
            cout << "\"" << title << "\"" << " has been returned!" << endl;
        }
    }
    virtual void displayInfo() const {
        cout << "Title: " << title << endl;
        cout << "Borrowed: " << (isBorrowed ? "Yes" : "No") << endl;
    }
    virtual ~Media() {}
    void setTitle(const string& t) {
        title = t;
    }
    void setBorrow(bool b) {
        isBorrowed = b;
    }
    string getTitle() const {
        return title;
    }
    bool getBorrowed() const {
        return isBorrowed;
    }
};

class BookAttributes {
    string author;
    public:
    BookAttributes(const string& a = "") : author(a) {}
    void displayBookInfo() const {
        cout << "Author: " << author << endl;
    }
    void setAuthor(const string& a) {
        author = a;
    }
    string getAuthor() const {
        return author;
    }
};

class MagazineAttributes {
    int issueNumber;
    public:
    MagazineAttributes(int i = 0) : issueNumber(i) {}
    void displayMagazineInfo() const {
        cout <<  "Issue Number: " << issueNumber << endl;
    }
    void setIssueNumber(int i) {
        issueNumber = i;
    }
    int getIssueNumber() const {
        return issueNumber;
    }
};

class DVDAttributes {
    string director;
    public:
    DVDAttributes(const string& d = "") : director(d) {}
    void displayDVDInfo() const {
        cout << "Director: " <<director << endl;
    }
    void setDirector(const string& d) {
        director = d;
    }
    string getDirector() const {
        return director;
    }
};

class Book : virtual public Media, public BookAttributes {
    public:
    Book(const string& t, bool b, const string& a) : Media(t, b), BookAttributes(a) {}
    void displayInfo() const override {
        cout << "Book Details: " << endl;
        Media :: displayInfo();
        displayBookInfo();
        cout << endl;
    }
};

class Magazine : virtual public Media, public MagazineAttributes {
    public:
    Magazine(const string& t, bool b, int i) : Media(t, b), MagazineAttributes(i) {}
    void displayInfo() const override {
        cout << "Magazine Details: " << endl;
        Media :: displayInfo();
        displayMagazineInfo();
        cout << endl;
    }
};

class DVD : virtual public Media, public DVDAttributes {
    public:
    DVD(const string& t, bool b, const string& d) : Media(t, b), DVDAttributes(d) {}
    void displayInfo() const override {
        cout << "DVD Details: " << endl;
        Media :: displayInfo();
        displayDVDInfo();
        cout << endl;
    }
};

int main() {
    Book book("The Great Gatsby", false, "F. Scott Fitzgerald");
    Magazine magazine("National Geographic", false, 202);
    DVD dvd("Inception", false, "Christopher Nolan");

    book.borrowMedia();
    book.displayInfo();

    book.returnMedia();
    book.displayInfo();
    
    magazine.displayInfo();
    dvd.displayInfo();

    return 0;
}