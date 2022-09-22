#include <iostream>
int check(int arr1[26], int arr2[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (arr1[i] != arr2[i])
           return 0;
    }
    return 1;
}
int permutation(string s, string ss)
{
    int count1[26] = {0}, count2[26] = {0};
    for (int i = 0; i < ss.length(); i++)
    {
        count1[ss[i] - 'a']++;
    }

    int i = 0;
    while (i < ss.length() && i < s.length())
    {
        count2[s[i] - 'a']++;
        i++;
    }

    if (check(count1, count2))
        return 1;
    while(i<=(s.length()-ss.length()))
    {
        count2[]
    }
}
using namespace std;
int main()
{
    string str, substr;
    getline(cin, str);
    getline(cin, substr);
    permutation(str, substr);
    return 0;
}