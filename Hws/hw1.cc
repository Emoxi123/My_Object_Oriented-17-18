#include<iostream>
#include<string>
#include<sstream>
#include<iomanip>
using namespace std;

int main(){
	int strict, integers_only;

	string argstr;
	int sum = 0;
	double min = -20000, max = 20000, average = 0;
	int error;
	int my_integer;
	double my_float;
	int count, minint, maxint, averageint;
	int error2, error3;

	while(true){
	getline(cin, argstr);
	if(argstr == "END") break;
	if(count==0){
		if(argstr == "END"){
			error = 1;
			//error=1 znachi ERR: PROVIDE AT LEAST ONE NUMBER
		
		}
		if(argstr == "strict"){
			strict =1;
		}
		else if(argstr == "integers-only"){
			integers_only = 1;
		}
		else if(argstr == "strict, integers-only"){
			error = 3;
			//error = 2 v budeshte
		}
	}

		istringstream change(argstr);
		change >> my_float;
		if(!change.fail && change.eof()){
		if(max<my_float){
			max=my_float;
		}
		else if(my_float<min){
			min=my_float;
		}
		count++;
		sum=sum+my_float;	
	}
		average = sum/count;



		if(integers_only==1){
			maxint = max;
			minint = min;
			averageint = average;
			cout << minint << maxint << averageint;
}
		else if(strict==1){
			if(!change.fail){
			cout << min << max << average;
		}
		else cout <<"ERR: PROVIDE ONLY NUMBERS";
	}
		else if(error==1){	
		cout << "ERR: PROVIDE AT LEAST ONE NUMBER";
	}
		else if(error==3){
		if(change.fail){
		error2=1;
		}
		if(change!=(int)change){
		error3=1;
		}
	if(error2==1 && error3==1){
		if(error2==1){	
			cout<< "ERR: PROVIDE ONLY NUMBERS";
			break;
		}
		else if(error3==1){
			cout<<"ERR: PROVIDE ONLY INTEGERS";
			break;
		}
		else{
			maxint = max;
			minint = min;
			averageint = average;
			cout << minint << maxint << averageint;								
		}
	
	return 0;
}
