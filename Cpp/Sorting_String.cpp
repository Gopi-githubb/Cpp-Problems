#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string sentence;
    cin >> sentence;
    for (int i = 0; i < sentence.size(); i++)
    {
        for (int j = i; j < sentence.size(); j++)
        {
            int index = i;
            int length = j - i + 1;
            cout << sentence.substr(index, length) << endl;
        }
    }
}
/*#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(const char* sentence) {
    int len = strlen(sentence);
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            for (int k = i; k <= j; k++) {
                cout << sentence[k];
            }
            cout << endl;
        }
    }
}

int main() {
    const int maxLength = 1000; // Maximum length of the sentence
    char sentence[maxLength];

    cout << "Enter a sentence: ";
    cin.getline(sentence, maxLength);

    printSubstrings(sentence);

    return 0;
}
*/

/*
#include <iostream>
#include <string>
using namespace std;

void printSubstrings(const string& sentence) {
    for (int i = 0; i < sentence.size(); i++) {
        for (int j = i; j < sentence.size(); j++) {
            int index = i;
            int length = j - i + 1;
            cout << sentence.substr(index, length) << endl;
        }
    }
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    printSubstrings(sentence);

    return 0;
}
*/