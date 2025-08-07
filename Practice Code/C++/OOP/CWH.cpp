#include <iostream>
#include <cstring>
using namespace std;

class CWH {
    protected:
    string title;
    float rating;
    public:
    CWH(string s, float r) {
        title = s;
        rating = r;
    }
    virtual void display() {}
};

class CWHVideo: public CWH {
    float vlen;
    public:
    CWHVideo(string s, float r, float vl): CWH(s, r) {
        vlen = vl;
    }
    void display() {
        cout << "Video Title: " << title << endl;
        cout << "Video Rating: " << rating << " Out of 5 Stars" << endl;
        cout << "Video Length: " << vlen << endl;
    }
};

class CWHText: public CWH {
    int wcount;
    public:
    CWHText(string s, float r, int wc): CWH(s, r) {
        wcount = wc;
    }
    void display() {
        cout << "Text Title: " << title << endl;
        cout << "Text Rating: " << rating << " Out of 5 Stars" << endl;
        cout << "Text Word Count: " << wcount << endl;
    }
};

int main() {
    string title = "CPP FULL COURSE";
    float rating = 4.8;
    float vlen = 5.4;

    // CWHVideo vid("CPP", 4, 5.3);
    CWHVideo vid(title, rating, vlen);
    // vid.display();

    title = "C VS CPP";
    rating = 4.9;
    int wcount = 455;

    CWHText text(title, rating, wcount);
    // text.display();

    CWH* ptr[2]; // Creates two ptrs
    ptr[0] = &vid;
    ptr[1] = &text;

    ptr[0] -> display();
    ptr[1] -> display();

    return 0;
}