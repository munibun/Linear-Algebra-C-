#include<iostream>
#include<vector>
using namespace std;

class Matrix{
	private:
		int num_row, num_column;
		bool square,symmetric;
	public:
		vector<vector <int>> value;
		Matrix(int m=0, int n=0){
			num_row=m;num_column=n;
			value.resize(num_row,vector<int>(num_column,0));
			square=(num_row==num_column)?true:false;
		}
	void set_value(){
			cout<<"---------------------------------------"<<endl;			
			for (int ind1=0;ind1<num_row;ind1++){
				for (int ind2=0;ind2<num_column;ind2++){
					cout<<"Matrix["<<ind1<<"]["<<ind2<<"]=";
					cin>>value[ind1][ind2];
				}
			}
			cout<<"---------------------------------------"<<endl;
	}
	void print(){
		if(num_row!=0 && num_column!=0){
			cout<<"---------------------------------------"<<endl;
			for (int ind1=0;ind1<num_row;ind1++){
				cout<<"\t";
				for (int ind2=0;ind2<num_column;ind2++){
					cout<<value[ind1][ind2]<<" ";
				}
				cout<<endl;
			}
			cout<<"---------------------------------------"<<endl;
		}
	}
	Matrix operator+(Matrix const &obj){
		if (num_row==obj.num_row && num_column==obj.num_column){
			Matrix result(num_row,num_column);
			for (int ind1=0;ind1<num_row;ind1++){
				for (int ind2=0;ind2<num_column;ind2++){
					result.value[ind1][ind2]=value[ind1][ind2]+obj.value[ind1][ind2];
				}
			}		
			return result;
		}
		else{
			cout<<"Error:To add two matrix both matrix have to be of same dimension."<<endl;
			Matrix result;		
			return result;
		}
	}
	Matrix operator+(int const &scaler){
			Matrix result(num_row,num_column);
			for (int ind1=0;ind1<num_row;ind1++){
				for (int ind2=0;ind2<num_column;ind2++){
					result.value[ind1][ind2]=value[ind1][ind2]+scaler;
				}
			}
			return result;
	}
	friend Matrix operator+(int const &scaler, Matrix const &obj){
			Matrix result(obj.num_row,obj.num_column);
			for (int ind1=0;ind1<obj.num_row;ind1++){
				for (int ind2=0;ind2<obj.num_column;ind2++){
					result.value[ind1][ind2]=obj.value[ind1][ind2]+scaler;
				}
			}
			return result;
	}
	Matrix operator*(Matrix const &obj){
		if (num_column==obj.num_row){
			Matrix result(num_row,obj.num_column);
			for(int ind1=0;ind1<num_row;ind1++){
				for(int ind2=0;ind2<obj.num_column;ind2++){
					for(int ind3=0;ind3<num_column;ind3++){
						result.value[ind1][ind2]=result.value[ind1][ind2]+value[ind1][ind3]*obj.value[ind3][ind2];
					}				
				}
			}	
			return result;
		}
		else{
			cout<<"Error: Dimension mismatch for two Matrix multiplication."<<endl;
			Matrix result;		
			return result;
		}
	}
	Matrix operator*(int const &scaler){
			Matrix result(num_row,num_column);
			for (int ind1=0;ind1<num_row;ind1++){
				for (int ind2=0;ind2<num_column;ind2++){
					result.value[ind1][ind2]=value[ind1][ind2]*scaler;
				}
			}
			return result;
	}
	friend Matrix operator*(int const &scaler, Matrix const &obj){
			Matrix result(obj.num_row,obj.num_column);
			for (int ind1=0;ind1<obj.num_row;ind1++){
				for (int ind2=0;ind2<obj.num_column;ind2++){
					result.value[ind1][ind2]=obj.value[ind1][ind2]*scaler;
				}
			}
			return result;
	}
	void is_square(){
		string result=(square)?"Square Matrix":"Not Square Matrix";
		cout<<result<<endl;
	}		
	Matrix transpose(){
		Matrix result(num_column,num_row);
		for(int ind1=0; ind1 <num_row;ind1++){
			for (int ind2=0;ind2<num_column;ind2++){
				result.value[ind2][ind1]=value[ind1][ind2];
			}
		}
		return result;
	}
	bool is_equal(Matrix obj){
		if(num_row!=obj.num_row || num_column!=obj.num_column){ return false;}
		else{
			int k=0;
			for (int ind1=0;ind1<num_row;ind1++){
				for(int ind2=0;ind2<num_column;ind2++){
					if(value[ind1][ind2]==obj.value[ind1][ind2]){k++;}
				}
			}
			if (k==num_row*num_column){return true;}
			else {return false;}
		}
	}
	void is_symmetric(){
		if(square && is_equal(transpose())){symmetric=true; cout<<"Symmetric Matrix"<<endl;}
		else{symmetric=false; cout<<"Not Symmetric Matrix"<<endl;}
	}
	void zero(){
			for (int ind1=0;ind1<num_row;ind1++){
				for(int ind2=0;ind2<num_column;ind2++){
					value[ind1][ind2]=0;
				}
			}
	}
	void one(){
			for (int ind1=0;ind1<num_row;ind1++){
				for(int ind2=0;ind2<num_column;ind2++){
					value[ind1][ind2]=1;
				}
			}
	}
	int get_value(int m,int n){ 
		if(m<num_row && n<num_column){
			return value[m][n];}
		else{cout<< "Matrix index out of bound"<<endl;}
	}
					
};
Matrix eye(int m){
	Matrix result(m,m);
	for(int ind=0;ind<m;ind++){
		result.value[ind][ind]=1;
	}
	return result;
}
Matrix eye(int m,int n ){
	Matrix result(m,n);
	for(int ind=0;ind<m;ind++){
		result.value[ind][ind]=1;
	}
	return result;
}

