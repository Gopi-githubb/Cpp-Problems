#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int subseq(string input, string output[])
{
    if (input.empty())
    {
        cout << " ";
        return 1;
    }
    string start = input.substr(1);
    int smalloutput = subseq(start, output);
    for (int i = 0; i < smalloutput; i++)
    {
        output[i + smalloutput] = input[0] + output[i];
    }
    return 2 * smalloutput;
}
int main()
{
    string input;
    cin >> input;
    int n = input.size();
    int m = pow(2, n);
    string *output = new string[m];
    int answer = subseq(input, output);
    /*  for (int i = answer - 1; i >= 0; i--) {
    cout << output[i] << endl;
     }
   b*/
    for (int i = 0; i < answer; i++)
    {
        cout << output[i] << endl;
    }
    delete[] output;
    return 0;
}
/* #include <iostream>
#include <cmath>
#include <string>
using namespace std;

int subseq(string input, string output[]) {
    if (input.empty()) {
        output[0] = "";
        return 1;
    }

    string start = input.substr(1);
    int smalloutput = subseq(start, output);

    for (int i = smalloutput - 1; i >= 0; i--) {
        output[2 * i] = input[0] + output[i];
        output[2 * i + 1] = output[i];
    }

    return 2 * smalloutput;
}

int main() {
    string input;
    cin >> input;

    int n = input.size();
    int m = pow(2, n);
    string *output = new string[m];

    int answer = subseq(input, output);

    for (int i = 0; i < answer; i++) {
        cout << output[i] << endl;
    }

    delete[] output;
    return 0;
}
*/