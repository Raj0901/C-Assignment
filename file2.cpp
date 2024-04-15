#include<iostream>
#include<fstream>
using namespace std;
class Book
{	
	protected:
			string bname;
			int book_id;
			
	public:
			Book()
			{
				
			}
			Book(string name,int book_id)
			{
				this->bname=bname;
				this->book_id=book_id;
			}
			void display()
			{
				cout<<"Bname : "<<bname;
				cout<<"Book_id : "<<book_id;
				
			}
			
			
};
void writebook(string filename,Book &book)
{
	ofstream fobj;
	fobj.open(filename,ios::binary |ios::app);
	if(fobj.is_open())
	{
		fobj.write((char*)&book,sizeof(book));
	}
	fobj.close();
	cout<<"data written"<<endl;
 } 
 
void readbook(string filename)
{
	ifstream fobj;

	fobj.open(filename,ios::binary|ios::app);
    Book book;
	if(fobj.is_open())
	{
		  while(fobj.read((char *)&book,sizeof(book)))
		{
			book.display();
		}
	}
	fobj.close();
}


int main()
{
	Book b("ssdsd",1);
	writebook("deao.txt",b);
	readbook("deao.txt");
}