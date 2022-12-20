#include <iostream>
using namespace std;
string name,movie,f="Fahsai: ",whtevr,day;
long long int id;
int main() {
cout << f << "Sawadee ka...Can you tell me your name? \n";
cout << "?????: ";
getline(cin,name);
cout << f << "Wow!!! " << name << " is a really cool name.\n";
cout << f << "I think you are an Engineering student. What is your student ID?\n";
cout << name << ": " ; cin >> id ;
cout << f << "I think you may be GEAR " << id/10000000 - 12 <<". I have a free movie ticket for you.\n";
cout << f << "Let's go to the cinema together!!!\n";
cout << f << "What movie do you want to watch?\n";
cout << name << ": " ;
cin.ignore();
getline(cin,movie);
cout << f << "So....which day are you free to go with me?\n";
cout << name << ": " ; getline(cin,day);
cout << f << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you.\n";
cout << name << ": " ; getline(cin,whtevr);
cout << f << "555+ see you " << day << ". Bye Bye \\(^ ^)/";
 

}