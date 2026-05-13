// STRING
#include<iostream>
#include<string>
#include<algorithm>
// #include <bits/stdc++.h>    use to access all library
using namespace std;


int main(){
    string str1="Hello";
    string str2="JECRC";
    cout<<str1<<" "<<str2<<endl;

    // Method of string

    // Length
    int n= str1.length();
    cout<<"Lengthof string is: "<<n<<endl;

    // Append
    cout<<"After append: "<<str1.append("Students")<<endl;

    // emptyString
    cout<<"Is string empty?"<<str2.empty()<<endl;

    // Concatination
    cout<<"After Concatination of string 1: "<<str1+"Bacho"<<endl;
    cout<<"After Concatination of string 2: "<<str1<<endl;

    // Push_back
    str2.push_back('U');
    cout<<"After Push_back: "<<str2<<endl;

    // Pop_back
    str2.pop_back();
    cout<<"After Pop_back: "<<str2<<endl;
    
    // Find
    int index =str1.find("ello");
    cout<<"Index of 'ello' in string 1: "<<index<<endl;

    // Swap
    str1.swap(str2);
    cout<<"After Swapping: "<<endl;
    cout<<"String 1:"<<str1<<endl;
    cout<<"String 2:"<<str2<<endl;

    // Sub_String
    string substr =str2.substr(5,6); // 5 is index and 6 is total length
    cout<<"Substring of string1 from index 5 with length 6: "<<substr<<endl;

    // get line
    string str3;
    cout<<"Enter the line: ";
    getline(cin,str3);
    cout<<"You entered: "<<str3<<endl;

    return 0;

}