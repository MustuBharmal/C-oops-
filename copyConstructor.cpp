#include<iostream>
#include<string.h>
using namespace std;
class student
{
	int rno;
	char name[50];
	double fee;
	public:
    // parameterized constuctor
	student(int no,char n[],double f)
	{
		rno=no;
		strcpy(name,n);
		fee=f;
	} 

    //copy constructor
	student(student &copyConst)	 {
		rno = copyConst.rno;
		strcpy(name,copyConst.name);
		fee = copyConst.fee;
	}
	void display()
	{
		cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
	}
	
};
	
int main()
{
	student s(1001,"Manjeet",10000);
	s.display();
	student copyConstructor(s);
	copyConstructor.display();
	return 0;
}
