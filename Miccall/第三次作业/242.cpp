    
#include <iostream>
#include <map>
using namespace std;

        bool isAnagram(string s, string t) {
        
        if(s.size() != t.size()) return false ;
        
        map<char,int> m_map ;
        for(int i = 0 ; i < s.size() ; i++ )
            m_map[ s[i] ] ++;
        
        for(int i = 0 ; i < t.size() ; i++ )
        {    
            if( m_map[ t[ i ] ] > 0 )
                m_map[ t[ i ] ] -- ;
            else
                return false ;
        }
        
        return true ;
    }

int main()
{
    cout<< isAnagram("2","2")<<endl;
    return 0 ;
}