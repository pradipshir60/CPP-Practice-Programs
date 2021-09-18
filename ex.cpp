#include<iostream>
using namespace std;
int main()
{
  string name;
  cout<<"May I know your Name !";
  getline(cin,name);
  cout<< "Welcome Mr."<<name;
  return 0; 
}