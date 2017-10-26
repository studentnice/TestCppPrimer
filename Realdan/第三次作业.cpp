bool isAnagram(string s,string t)
{
	int i;
	if(s.size()!=t.size())
		return false;
	map<char,int> record;
	for(i=0;i<s.size();i++)
	{
		record[s[i]]++;
	}
	for(i=0;i<t.size();i++)
	{
		if(record[t[i]]==0)
			return false;
		else
			record[t[i]]--;
	}
	return true;
}
