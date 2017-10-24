#include<iostream>
#include<map>
using namespace std;
bool isAnagram(string s, string t){
	map<int,int> record1,record2;
	for (int i = 0; i < s.size(); i++) record1[s[i]]++;
	for (int i = 0; i < t.size(); i++) record2[t[i]]++;
	if (record1 == record2) return true;
	else return false;
}

int main(){
	if (isAnagram("rat","car")) cout<< "Yes" <<endl;
	else cout<< "No" <<endl;
	return 0;
}
