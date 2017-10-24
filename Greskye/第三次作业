#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cstdio>
using namespace std;
int main(){
	char c;
	int count = 0;
	vector<char> text;
	vector<char>::iterator iter = text.end();
	while (count != 2){
		c = getchar();
		if (c == '\n'){
			count++;
			continue;
		}
		text.insert(iter,c);
		iter = text.end();
	}
	map<int,int> record;
	for (int i = 0; i < text.size(); i++){
		record[text[i]]++;
	}
	count = 0;
	for (int i = 0; i < text.size(); i++){
		if (record[text[i]] %2 != 0 ){
			count = 1;
			break;
		}
	}
	count == 1?(cout<< "No" <<endl):(cout<< "Yes" <<endl);
	return 0;
}
