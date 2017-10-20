#include<iostream>
#include<string>
#include<sstream>
#include<iomanip>
using namespace std;

int main(){
	int strict=0, integers_only=0;

	string argstr;
	char arg_sym;
	bool arg_is_int=1;
	double sum = 0;
	double min , max , average = 0;
	int error=0;
	
	double my_float;
	int count=0;
	int decc=1;


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
		else if(argstr == "strict, integers-only" || argstr== "strict:integers-only"){
				strict =1;
				integers_only=1;
			}
	
		
		}

//if(num == static_cast<int>num)
		
				
		

		istringstream change(argstr);
		change >> my_float;
		
		if(my_float!=(int)my_float){
				decc=0;
			}
		
		if(change.fail() && count > 0){
			arg_is_int = 0;
		}
		

		if(count==0){
			min= my_float;
			max= my_float;
		}

		if(max<=my_float){
			max=my_float;
		}
		 if(my_float<=min){
			min=my_float;
		}
		count++;
		sum=sum+my_float;	
		
	 		/*	
			for(int i=0; i<argstr.size(); i++){
					arg_sym = argstr[i];
					
					if(arg_sym<=48 || arg_sym>= 57 || arg_sym!=46 || arg_sym!= 45 ){
						arg_is_int = 0;
						cout << ;
						
				}
							
		}
				
*/
	
		
		
  }
		average = sum/count;
			


		if(count<1){
		cout<< "ERR: PROVIDE AT LEAST ONE NUMBER";
	}
		else if(count>=1){

		if(strict ==0 && integers_only==0){
			cout << min << " " << max << " " << setprecision(4) << average;
		}
		else if(strict ==0 && integers_only == 1){
		
		cout <<(int)min << " " << (int)max << " " << (int)average;			
	}



		else if(strict == 1 && integers_only==0){
				if(arg_is_int == 0) cout<< "ERR: PROVIDE ONLY NUMBERS";
			else if(arg_is_int ==1) cout << min << " " << max << " " << setprecision(4) << average;	
				
		}
			else if(strict==1 && integers_only==1){
				if(decc==0){
					cout<< "ERR: PROVIDE ONLY INTEGERS";
		}
			else cout << min << " " << max << " " << setprecision(4) << average;
		




		}

	}

	
	return 0;
}
