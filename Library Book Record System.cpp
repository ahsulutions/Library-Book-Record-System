//**************LIBRARY MANAGEMENT SYSTEM RECORD***************//
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
using namespace std;
struct classstudent
{
int bookID;
char title[30];
char authorofbook[30];
int costofbook;
};
const int books=5;
int arr;
classstudent classstudentobj[books];

void Add_Book()
{
if(arr < books)
{
cout<<"---***Enter  the Details of Books---***"<<endl;
cout<<"Enter a book id="<<endl;
cin>>classstudentobj[arr].bookID;
cout<<"Enter book title="<<endl;
cin>>classstudentobj[arr].title;
cout<<"Enter name of author="<<endl;
cin>>classstudentobj[arr].authorofbook;
cout<<"Enter the cost of book="<<endl;
cin>>classstudentobj[arr].costofbook;
arr++;
}
else
   {
    cout<<"No more space in system for another"<<endl;

   }
}

void Display_Books()
{

for(int i=0; i < arr; i++)
{
cout<<"---***Detail of all books in liabrary***---";
cout<<"Book ID="<<classstudentobj[i].bookID<<endl;
cout<<"Book Title is="<<classstudentobj[i].title<<endl;
cout<<"Author Name="<<classstudentobj[i].authorofbook<<endl;
cout<<"cost of book="<<classstudentobj[i].costofbook<<endl;
}
}

void Book_Author()
{
char search_book[30];
cout<<"Enter the name of Author="<<endl;
cin>>search_book;
int i=0;
while(i<arr)
{
if(strcmp(search_book,classstudentobj[i].authorofbook)==0)
{
cout<<endl;
   cout<<"Book ID="<<classstudentobj[i].bookID<<endl;
   cout<<"Book Title is="<<classstudentobj[i].title<<endl;
   cout<<"Author Name="<<classstudentobj[i].authorofbook<<endl;
   cout<<"cost of book="<<classstudentobj[i].costofbook<<endl;
i++;
}
}
}

int main()
{
int choice;
char input;
do
{
cout<<"***---Library Book Record System***--"<<endl;
cout<<"Press 1 to enter a book record:"<<endl;
cout<<"press 2 to Display all Records of books:"<<endl;
cout<<"press 3 to search book by author name:"<<endl;
cout<<"press 4 to count total books in library:"<<endl;
cout<<"press 5 to Exist from the system:"<<endl;
cout<<"Enter the choice:"<<endl;
cin>>choice;

switch(choice)
{
case 1:
Add_Book();
break;
case 2:
   Display_Books();
break;
   case 3:
   Book_Author();
break;
case 4:
   cout<<"Total Number of books in library are:"<<arr<<endl;
break;
case 5:
   exit(0);
default:
cout<<"invalid choice please try again";
}
cout<<"Are you want to continue,please press y or Y"<<endl;
cin>>input;

}while(input=='y'||input=='Y');
}

