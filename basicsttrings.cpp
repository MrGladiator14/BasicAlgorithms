#include<bits/stdc++.h>
#include<climits>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string str = "lebron";
    cout<< str <<endl;
    string s(5, '$');
    string abc(str); //creates copy
    cout<< s<<abc  <<endl;
    getline(cin, s); //to input string with space // ***input***
    cout<< s  <<endl;
    string s1="Tom", s2="&Jerry";
    s1.append(s2);
    cout<< s1  <<endl; 
    s1=s1+s2;
    cout<< s1  <<endl;
    /* some more functions:
    assign(), at(), begin(), clear(), c_str(), empty(), end(), erase(3,3) nincompoop to ninpoop , find(), insert(), 
    length(), resize(), size(), substr(),  
    */
   // s2.compare(s1) == 0 if equal, +ve if s2>s1 else -ve e.g. |"abc"<"xyz"|
   s= " 314159";
   cout<< stoi(s) + 6 << endl;
   int x= 314159;
   cout<< to_string(x) + "6" << endl;
   s=  " 2345*(&2384(*&8&!@#$%^&*()+_)(*&^%$#@!' ";
   sort(s.begin(),s.end());
   cout<< s << endl;
   return 0;
   

}
