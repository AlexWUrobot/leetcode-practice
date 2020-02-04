#include<iostream>
#include<vector>
using namespace std;

class solution{
public:	
	void rotate(vector<vector<int>>& m){
		int n = m.size();
		int re, ce, t;
		for(int r = 0; r < n/2; r++){
			for (int c = 0; c < (n+1)/2; c++){
				re = n - 1 - r;	
				ce = n - 1 - c;
				t = m[ce][r];
				m[ce][r] = m[re][ce];
				m[re][ce] = m [c][re];
				m[c][re] = m[r][c]; 
				m[r][c] = t;	
			}
		}
		/*
		r c        c  re
		ce r      re ce
		*/
		
	}
	
};


int main(){
	vector<vector<int>> matrix = {{1,2,3},{4,5,6,},{7,8,9}};
	for (int i = 0; i < matrix.size(); i++){
		for (int j = 0; j < matrix[0].size(); j++){
			printf("%d, ", matrix[i][j]);
		}
		printf("\n");
	}
	printf("=========== \n");
	solution test1;
	test1.rotate(matrix);
	for (int i = 0; i < matrix.size(); i++){
		for (int j = 0; j < matrix[0].size(); j++){
			printf("%d, ", matrix[i][j]);
		}
		printf("\n");
	}	
	
	
	
	
}
