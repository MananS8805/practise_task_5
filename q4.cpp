#include<iostream>
using namespace std;

class book{
    protected:
    string title;
    string author;
    double price;
    public:
    book(string t,string a,double p): title(t),author(a),price(p){}
    book(book& b)
    {
        title=b.title;
        author=b.author;
        price=b.price;
        cout<<"Book copied"<<endl;
    }

    void display()
    {
        cout<<"Title is "<<title<<endl;
        cout<<"author is "<<author<<endl;
        cout<<"price is "<<price<<endl;
    }
};
int main()
{
    book b1("Harry potter","JK rowling",580);
    book b2(b1);
    b1.display();
    b2.display();
}