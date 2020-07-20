#include"matrix.h"
int main(){
//	Matrix A(3,4);
//	A.set_value();
//	A.print();
//	A.is_square();
//	Matrix B=A.transpose();
//	B.print();
//	if(A.is_equal(B.transpose())){cout<<"Equal"<<endl;}
//	Matrix C(3,3);
//	C.set_value();
//	if(A.is_equal(C)){cout<<"Equal"<<endl;} else {cout<<"Not Equal"<<endl;} 
//	C.is_symmetric();
//	A.zero();
//	A.print();
//	A.one();
//	A.print();
	Matrix D=eye(5);
	D.print();
	D=eye(6,7);
	D.print();
	cout<<D.get_value(6,6);
}