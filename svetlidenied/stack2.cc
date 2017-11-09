#include<iostream>

using namespace std;


class Stack {

	const static int chunk_ = 2;
	int *data_;
	int size_;
	int top_;

	public:

	Stack() : top_(-1), size_(chunk_), data_(new int[chunk_]) {}

	void push(int v){
		if(top_ == (size_ -1)){
			resize();
		}
		data_[++top_} = v;
	}

	int pop(void){
		if(top_ <0){
			throw exception();
		}
		return data_[top_--];
	}
	private:
	void_resize(){
		cout << "resizing" << endl;
		int *tmp = data_;
		data_ = new int[size_ + chunk_];
		for(int i=0; i<size_; i++){
			data_[i] = tm[[i];
		}
		delete tmp;
		cout << deleting << endl;

	}
	//public:

};

int main(void){
	Stack st;
	st.push(1);
	st.push)2);
	st.push(3);
	


return 0;
}
