#include <iostream>
#include "Book.h"
#include "PrintBook.h"
#include "Shelf.h"
#include "BShelf.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	system("chcp1251");
	int mode= -1;
	 vector <Bookshelf> bshelfs;
	 BookShelf bshelf;
	 while (mode!=0){
	 	cout <<"-=Menu=-"<<endl;
	 	cout <<"1. Add BookShelf."<<endl;
	 	cout <<"2.Add shelf in BookShelf."<<endl;
	 	cout <<"3.Add book."<<endl;
	 	cout <<"4.Show on screen"<<endl;
	 	cout <<"0.Exit"<<endl;
	 	cout <<"Enter number and push <ENTER>:"<<endl;
	 	cin>>mode;
	 	switch (mode)
	 	{
	 		case 0: continue;
	 		case 1:
	 			bshelfs.push_back(bshelf);
	 			cout<<"BookShelf is added!"<<endl<<endl;
	 			break
	 			cade2:
	 				if(bshelfs.size()>0){
	 					cout<<"Accesible"<<bshels.size
	 					()<<"bookshelfs"<<end1;
	 					cout<<"Enter number of bookshelf(from 1 to"<<bshelfs.size()<<"1:";
					 }
		 }
	 }
}
