#include<iostream>
#include<fstream>
using namespace std;
int main()
{
string num,source,source_time,destination,destination_time;
string ch;
    ofstream out;
    out.open("businformation.text",ios::app);
    //out<<"\nBus number"<<"\tSource"<<"\tTime"<<"\tDestination"<<"\tTime\n";
    cout<<"\nBusNumber : ";
    getline(cin,num);
    cout<<"Source : ";
    getline(cin,source);
       cout<<"Source Time : ";
       getline(cin,source_time);
    cout<<"Destination : ";
    getline(cin,destination);
       cout<<"destination_time";
       getline(cin,destination_time);
    out<<"\n"<<num<<"\t\t"<<source<<"\t"<<source_time<<"\t\t"<<destination<<"\t"<<destination_time;
    out.close();
   ifstream in("businformation.text");
     //getline(cin,num);
   // getline (in,num);

   while(!in.eof())
   {
       getline(in,ch); //read single character from file
       cout<<ch<<endl;
   }
        in.close();


return 0;
}
