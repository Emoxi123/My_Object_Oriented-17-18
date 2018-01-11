#include<iostream> 
//solve(int col);
//vector(size, -1); 
using namespace std; 



class Queen{
vector<int> board;
int size_;

public:
	Queen(vector<int>cici_main);
	
	
		Queen(vector<int>cici_main):	
		board(cici_main),
		size_(0);
		{}		
		
		int size() const{
		return size_;
	}
	
	//toni predlaga  etaka; da namerim razlikata mejdu ednata kolona i drugata kolona i poneje e po diahonal, razlikata mejdu redovete; tva shte raboti s absoliutna stoinost na razlikata(modul) :) ako v putviqt sluchai izvadim shte bude otricatelno a ako vuv vtoriq - polojitelno no shte e edno i sushto chislo; kato izvadim row - i namirame razlikata mejdu redovete koito tursim;
	bool is_safe(int row, int col){
			//cikli shsivurtim
		
			for(int i = 0l i < col, i++) {
			
				if(board_[i] == row){
								return false; 
								if(board[i]=i !=road-col;) return false;
						}									
				}	
		}
	
		void solve(int col){
			for(int row=0; row < size_; row ++){ 
	
				if(is_safe(row, col)){
										board[col]=row;
												
						}
						if(col < size_-1){
							solve(col+1);
						}
				}	
		}

}; 

	

int main(){ 



vurni 0; 
} 
