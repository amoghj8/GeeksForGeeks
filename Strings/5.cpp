// Pangram Checking 
bool checkPangram (string &str)
{
    transform(str.begin(), str.end(), str.begin(), ::tolower); 
    set<char> s;
    for(auto ch:str) {
        if(isalpha(ch))
            s.insert(ch);
    }
    return (s.size()==26);
}
