#include <iostream>
#include <vector>
#include <string>
int main()
{
    int n;
    std :: cin >> n;
    std :: vector<std :: string> v;
    v.push_back("one");
    v.push_back("two");
    v.push_back("three");
    v.push_back("four");
    v.push_back("five");
    v.push_back("six");
    v.push_back("seven");
    v.push_back("eight");
    v.push_back("nine");
    if(n >= 1 && n <= 9)
    {
        std :: cout << v[n - 1];
    }
    else
    {
        std :: cout << "Greater than 9";
    }
    return 0;
}