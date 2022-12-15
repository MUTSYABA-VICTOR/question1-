#include <iostream>

using namespace std;


//int main()
//{
//for (int i=0; i<10; i++)
//    cout<< number_word(i)<<endl;
//}


string number_word(int Num){

string number_word;

switch (Num){
	
	case 0:
		
     number_word="zero";
	
	cout<< number_word(0)<<endl;
	 break;

	case 1:
	
	  number_word="one";
	cout<< number_word(1)<<endl;
	 break;

	case 2:
	  number_word="two";
	cout<< number_word(2)<<endl;
	 break;

	case 3:
	  number_word="three";
	cout<< number_word(3)<<endl;
	 break;

	case 4:
	  number_word="four";
	cout<< number_word(4)<<endl;
	 break;

	case 5:
	  number_word="five";
	cout<< number_word(5)<<endl;
	 break;

	case 6:
	  number_word="six";
	cout<< number_word(6)<<endl;
	 break;

	case 7:
	  number_word="seven";
	cout<< number_word(7)<<endl;
	 break;

	case 8:
	  number_word="eight";
	cout<< number_word(8)<<endl;
	 break;
	 
	 	case 9:
	  number_word="nine";
	cout<< number_word(9)<<endl;
	 break;
	 
	default:
		cout<<"Invalid Number";

}
  
}

int main(){
	
number_word(0);	
	
	
}








