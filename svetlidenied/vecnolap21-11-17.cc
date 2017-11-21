//shte se pravi vectoor qsno
//vectorut svobodno moje da dostupva vseki element a spisukut moje; vutreshno se realizira taka: vutre imame dinamichen masiv s kletki v koito shte zapisvame pamet kato se zapulni tozi spisuk shte trqbva da zadelim nova pamet s po-golqm razmer; trqq da kopirame vsichki stoinosti v noviq vektor, triem stariq vector trqq data da sochi kum noviq i nakraq da se dobavi nov element; mojem da dobavim element po sredata kato hvanem stoinostite ot dqsno na tova mqsto i gi vlachim edno nasam; v spisukut ne trqq da mestim nishto;
//za clear: imame nqkva pamet i znaem che size e edi kolko si
//size-a go setvame 0 i ne ni interesuva kakvo ima v masiva


#include <iostream>



using namespace std;

class exception{

};


class Vector {
	int capacity_;
	int size_;
	int* buffer_;



public:
	Vector(int capacity=10);
	
		Vector(int capacity=10):
		capacity_(capacity),
		size_(0),
		buffer(new int[capacity])
	{}




	int size() const{
		return size_;
	}


	bool empty() const{
		return size_ == 0;
	}


	int& operator[](int n){
	return buffer_[n];	

	if(n>=0 && n<size_){
			throw exception();
		}
	}
	
	
	const int& operator[](int n) const{
		const int& a = buffer_[n];
		return a;
	}


	void clear(){
		size_ = 0;
	}


	int capacity() const{
			return capacity;
	}





	int& front(){
		return buffer_[0];
	}


	const int& front() const{
		const int& a = buffer_[0];
		return a;
	}


	int& back(){
		return bufffer_[size_];
	}


};


	



	










int main(){




return 0;
}
