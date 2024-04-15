#include <iostream>
#include   <fstream>  
using namespace std;

class Book
{
    private:
        int id;
        string bname;

    public:
        Book(){}

        Book(int id, string bname)
        {
            this->id = id;
            this->bname = bname;
        }

        void Display()
        {
            cout << id << " "<<  bname << endl;
        }
};

void writeBook(string filename,Book &book)
{
    ofstream fobj;

    fobj.open(filename, ios::binary | ios::app);

    if(fobj.is_open()) 
    {
        fobj.write((char *)&book, sizeof(book));
    }    
    fobj.close();
    cout << "Date is Written" << endl;
}

void readbook(string filename)
{
    ifstream fobj;

    fobj.open(filename, ios::binary|ios::app);
    Book book;

    if(fobj.is_open())
    {
        while(fobj.read((char *)&book,sizeof(book)))
        {
            book.Display();
        }
    }
    fobj.close();
}

int main()
{

    Book B(1,"asdsf");

    writeBook("demo.txt",B);
    readbook("demo.txt");

    return 0;
}

