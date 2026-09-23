#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string s, string t)
{
    if (s.length() != t.length())
    {
        return false;
    }

    int count[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string s1 = "anagram";
    string t1 = "nagaram";

    cout << "Test Case 1: "
         << (isAnagram(s1, t1) ? "true" : "false") << endl;

    string s2 = "rat";
    string t2 = "car";

    cout << "Test Case 2: "
         << (isAnagram(s2, t2) ? "true" : "false") << endl;

    return 0;
}