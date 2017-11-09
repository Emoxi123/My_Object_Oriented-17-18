//ako definirame masiv int * darr = new int[]; - pri toq sluchai
//pametta ima dve chasti: stack i heap; 
//vlizaiki v stack-a predi purviqt red shte ima argumenti - argc i argv.
//ako imame promenliva int size=10 i funkciq foo(size) shte ima kopie na size-a. v stack-a sled tova shte ima foo: array i posle foo:*
//mejduvremenno v heep-a pametta shte si ostane a v stacka kato izleze ot scope-a shte se iztriqt;
//destructur ni e nujen. definira se s tilda i imeto na klasa.Nujen nin e shtoto pametta koqto e v heep-a ne se osvobojdava sama; 
//trqq da izmislim solution pointera koito sochi datata


#include<stdlib>
#include<iostream>

using namespace std;

class Stack{
public:
//konstruktur:

	Stack(const Stack& other) : top_(other.top_), sizie_ (other.size_), data_{new int[other.size_])
		{
			for(int i=0; i<size; i++){
			data_[i] = other_data[i];
			cout << "other constructor" << endl;
		}

	}

};

double average(Stack stack){
	int count = stack.length()l
	int sum=0;
	while(!stack.empty()){
		sum += stack.pop)_;
	}
	return ((double) sum )/count;
}



int main(void){
	Stack st;
	st.push(1);
	for (int i=0; i<10; i++){
		st.push(i*47);
	}
	
	cout << "" << endl;
	cout << "Average: " << avetage(st) << endl;
	try{
		cout<< st.pop() << endl;
		cout<< st.pop() << endl;
		cout<< st.pop() << endl;
   	} catch(const.exception & e){
		cout<< "exception () catched in pop .. " << endl;
	}
	


return 0;
}
