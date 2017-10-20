#include<iostream>
#include<string>
#include<sstream>
#include<iomanip>
using namespace std;

int main(){
	int strict=0, integers_only=0;

	string argstr;
	int sum = 0;
	double min , max , average = 0;
	int error=0;
	
	double my_float;
	int count=0;


	int error2, error3;

	while(true){
	cin>> argstr;
	if(argstr == "END") break;
	if(count==0){
		
		
		
		if(argstr == "strict"){
			strict =1;
		}
		else if(argstr == "integers-only"){
			integers_only = 1;
			}
		
		}

//if(num == static_cast<int>num)
		
	


		istringstream change(argstr);
		change >> my_float;
		
			if(change.fail()){
			error = 1;
		}
		else if(!change.fail()){
		
		if(max<my_float){
			max=my_float;
		}
		 if(my_float<min){
			min=my_float;
		}
		count++;
		sum=sum+my_float;	
	 
   }
	
  }
		average = sum/count;



		if(count<1){
		cout<< "ERR: PROVIDE AT LEAST ONE NUMBER";
	}
		else if(count>1){

		if(strict ==0 && integers_only==0){
			cout << min << " " << max << " " << setprecision(4) << average;
		}
		else if(strict ==0 && integers_only == 1){
		cout <<(int)min << " " << (int)max << " " << (int)average;			
	}



		else if(strict == 1 && integers_only==0){
				if(error == 1) cout<< "ERR: PROVIDE ONLY NUMBERS";
				
		}
	}

	
	return 0;
}
