#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

unordered_map<char, int> get_freqency(string s){
    unordered_map<char, int> freq;
    for (int i = 0; i < s.length(); i++){
        freq[s[i]]++;
    }
    return freq;
}


bool valid_anagram(string s, string t){
    return get_freqency(s) == get_freqency(t);
}

int main(){

    string s = "anagram";
    string t = "nagara";

    if (valid_anagram(s, t)){
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }


    return 0;
}




