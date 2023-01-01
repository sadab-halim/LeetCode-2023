bool wordPatter(string pattern, string s){
    vector<string> words;
    int i = 0;
    string temp = "";
    
    while(i < s.size()){
        if(s[i] == ' '){
            words.push_back(temp);
            temp = "";
        } else {
            temp += s[i];
        }
        i++;
    }
    //for the last word
    words.push_back(temp);

    if(words.size() != pattern.size())
        return false;
    
    unordered_map<char, string> mapp;
    set<string> st;

    for(int i = 0; i < pattern.size(); i++){
        if(mapp.find(pattern[i]) != mapp.end()){
            if(mapp[pattern[i]] != words[i]){
                return false;
            }
        } else {
            if(st.count(mapp[i] > 0)){
                return false;
            }
            mapp[pattern[i]] = words[i];
            st.insert(words[i]);
        }
    }
    return true;
}