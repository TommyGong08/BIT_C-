#include<fstream>
#include<iostream>
#include<string>
using namespace	std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	string temp;
	ifstream infile;
	ofstream outfile;
	
	/*infile.open("D:\\Clab\\src.txt",ios::in);//读源文件
	outfile.open("D:\\Clab\\obj.txt",ios::app);//写目标文件*/
	
	infile.open("src.txt",ios::in);//读源文件
	outfile.open("obj.txt",ios::app);//写目标文件


	if(!infile)
	{
		cout << "open source file error!" << endl;
		return -1;
	 } 
	 
	else
	{
		while(!infile.eof())
		{
			getline(infile,temp,'\n');
			outfile << temp << endl;
		//	cout << temp <<endl;
		}
		infile.close();
		outfile.close();
	} 
	return 0;
}
