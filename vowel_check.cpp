#include <bits/stdc++.h>
using namespace std;

void isvowel(char x){
    char c = tolower(x);
    if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') cout << "Vowel" << endl;
    else cout << "Consonant" << endl;
}

int main(){
    isvowel('c');
    isvowel('E');
    return 0;
}