#include <iostream>
#include <vector>
using namespace std;

class bookType {
    string title;
    vector <string> authors;
    int authorCount;
    string publisher;
    string isbn;
    double price;
    string year;
    int copiesCount;
    public:
    bookType(const string& t = "", const vector <string>& a = {}, const int& n = 0, const string& pub = "", const string& y ="", const string& i = "", const double& pr = 0, const int& c = 0) : title(t), authors(a), authorCount(n), publisher(pub), year(y), isbn(i), price(pr), copiesCount(c) {}
    void setTitle(const string& t) {
        title = t;
    }
    void setAuthors(const vector <string>& a, const int& n) {
        authors = a;
        authorCount = n;
    }
    void setPublisher(const string& pub) {
        publisher = pub;
    }
    void setPublishYear(const string& y) {
        year = y;
    }
    void setISBN(const string& i) {
        isbn = i;
    }
    void setPrice(const double& pr) {
        price = pr;
    }
    void setCopiesCount(const int& c) {
        copiesCount = c;
    }
    string getTitle() const {
        return title;
    }
    vector <string> getAuthors() const {
        return authors;
    }
    int getAuthorCount() const {
        return authorCount;
    }
    string getPublisher() const {
        return publisher;
    }
    string getPublishYear() const {
        return year;
    }
    string getISBN() const {
        return isbn;
    }
    double getPrice() const {
        return price;
    }
    int getCopiesCount() const {
        return copiesCount;
    }
    void updateCopiesCount(const int& c) {
        copiesCount += c;
    }
    bool isTitle(const string& t) const {
        return title == t;
    }
    bool isISBN(const string& i) const {
        return isbn == i;
    }
};

int main() {
    bookType books[2];

    books[0] = bookType("Halo: The Rubicon Protocol", {"kelly Gay"}, 1, "Gallery Books", "August 9, 2022", "9781982147884", 18.99, 10);
    books[1] = bookType("My Salty Mary", {"Cynthia Hand", "Brodi Ashton", "Jodi Meadows"}, 3, "HarperCollins", "2024", "9780062930125", 29.99, 5);

    for(int i = 0; i < 2; i++) {
        cout << "Details of Book: " << i+1 << endl;
        cout << "Title: " << books[i].getTitle() << endl;
        cout << "Authors: ";
        vector <string> authors = books[i].getAuthors();
        for(const auto& author : authors) {
            cout << author;
            if(&author != &authors.back()) {
                cout << ", ";
            }
        }
        cout << endl;
        cout << "Number of Authors: " << books[i].getAuthorCount() << endl;
        cout << "Publisher: " << books[i].getPublisher() << endl;
        cout << "Year Published: " << books[i].getPublishYear() << endl;
        cout << "ISBN Number: " << books[i].getISBN() << endl;
        cout << "Price: " << books[i].getPrice() << endl;
        cout << "Number of Copies: " << books[i].getCopiesCount() << endl;
        cout << endl;

        return 0;
    }

    string searchTitle = "Halo: The Rubicon Protocol";
    for(const auto& book : books) {
        if(book.isTitle(searchTitle)) {
            cout << "Book Found with Title \"" << book.getTitle() << "\": " << boolalpha << book.isTitle(searchTitle) << endl;
            break;
        }
    }

    string searchISBN = "9780062930125";
    for(const auto& book : books) {
        if(book.isISBN(searchISBN)) {
            cout << "Book Found with ISBN number \"" << book.getISBN() << "\": " << boolalpha << book.isISBN(searchISBN) << endl;
            break;
        }
    }

    books[0].updateCopiesCount(3);
    cout << "Updated Copies in Stock for \"" << books[0].getTitle() << "\": " << books->getCopiesCount() << endl;

    return 0;
}