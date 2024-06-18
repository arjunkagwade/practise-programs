using System;

using namespace std;

class stringpalindrome
{
    Console.Write("Enter a string to Check Palindrome : ");
    string name = Console.ReadLine();
    string reverse = string.Empty;
    foreach(char c in name)
    {
        reverse = c + reverse;
    }
if (name.Equals(reverse, StringComparison.OrdinalIgnoreCase))
{
    Console.WriteLine($"{name} is Palindrome");
}
else
{
    Console.WriteLine($"{name} is not Palindrome");
}
Console.ReadKey();
};


