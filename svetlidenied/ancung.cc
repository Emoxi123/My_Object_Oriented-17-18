
#include<iostream>

using namespace std;

class Foo{

	int bar_;	
	
	public:
	Foo() : bar_(6) {
		cout << "Initializing" << endl;
	}
	
	int get_bar(){
		return bar;
	}






};


int main(void){

	//Foo *ptr = (Foo)malloc(sizeof(Foo));
	Foo* ptr = new Foo();
	cout << ptr->get_bar() << endl;	
	delete ptr;
	//free(ptr);

return 0;
}
