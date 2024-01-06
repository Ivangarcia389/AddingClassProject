#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;
class Student {
private:
string name;
int id;
string major;
double overAllGPA;
public:
Student() {
name = "";
id = -1;
}
Student(string n, int ID, string m, double G) : name(n), id(ID), major(m), 
overAllGPA(G) {}
void SetName(string n) 
{
name = n; 
}
string GetName() 
{
return name;
}
void SetID(int b)
{
id = b;
}
int GetID()
{
return id;
}
void SetMajor(string m) 
{
major = m;
}
string GetMajor() 
{
return major;
}
void SetGPA(double G)
{
overAllGPA = G;
}
double GetGPA() 
{
return overAllGPA;
}
};
int main()
{
const int NUM_STUDS = 10;
Student studs[NUM_STUDS];
string sName;
int sID;
string sMajor;
double sGPA;
cout << "Populate student info: ";
cout << "\n========================";
for (int i = 0; i < NUM_STUDS; i++)
{
cout << "\nEnter name: ";
getline(cin, sName);
cout << "ID: ";
cin >> sID;
cin.ignore();
cout << "Major:";
getline(cin, sMajor);
cout << "GPA:";
cin >> sGPA;
cin.ignore();
studs[i].SetName(sName);
studs[i].SetID(sID);
studs[i].SetMajor(sMajor);
studs[i].SetGPA(sGPA);
}
cout << endl;
const int COLS = 79;
const int SEP = 4;
const int NAME_LEN = 25;
for (int i = 0; i < COLS; i++) {
cout << "=";
}
cout << endl;
cout << "|" << left << setw(NAME_LEN) << "Name" << setw(SEP) << "|"
 << setw(5) << "ID" << setw(SEP) << "|"
 << setw(25) << "Major" << setw(SEP) << "|"
 << setw(10) << "OverAllGPA" << setw(SEP) << "|";
cout << endl;
for (int i = 0; i < COLS; i++) {
cout << "=";
}
cout << endl;
for (int i = 0; i < NUM_STUDS; i++)
{
cout << left << "|" << setw(NAME_LEN) << studs[i].GetName() << 
setw(SEP) << "|"
<< left << setw(5) << studs[i].GetID() << setw(SEP) << "|"
<< left << setw(25) << studs[i].GetMajor() << setw(SEP) << "|"
<< left << setw(10) << setprecision(3) << studs[i].GetGPA() << setw(0) 
<< "|\n";
}
for (int i = 0; i < COLS; i++) {
cout << "-";
}
cout << endl;
return 0;
}
