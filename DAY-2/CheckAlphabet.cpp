// #include<iostream>
// using namespace std;

// int main(){
//     char ch;
//     cout<<"Enter an alphabet: ";
//     cin>>ch;

//     (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
//      ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
//         ? cout<<"Vowel"
//         : cout<<"Not a Vowel";

//     return 0;
// }



#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter an alphabet: ";
    cin>>ch;

    switch(ch){
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            cout<<"Vowel";
            break;
        default:
            cout<<"Not a Vowel";
    }

    return 0;
}