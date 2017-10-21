
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	vector <vector <int>> b(10, vector <int> (5));
	//迭代器遍历
	cout<< "迭代器遍历" <<endl;
	for (vector <vector <int>>::iterator iter = b.begin(); iter != b.end();iter++){
		for (vector <int>::iterator iter1 = (*iter).begin(); iter1 != (*iter).end(); iter1++){
			cout<< *iter1 <<",";
      }
	cout << endl;
	}
  
	//普通方式访问
	cout<< "普通方式访问" <<endl;
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 5; j++){
			cout<< b[i][j] <<",";
 	  }
	cout << endl;
	}
	return 0;
}
