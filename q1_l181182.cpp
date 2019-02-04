#include<iostream>
#include<fstream>
#include<string>
#include"Header.h"
using namespace std;
//Reading data from including file of users 
void readdatafromfile(gitHubuser *&users, string filepath)
{
	int numofusers = 0;
	ifstream fin("f.txt");
	fin >> numofusers;
	fin.ignore();
	users = new gitHubuser[numofusers];
	for (int i = 0; i < numofusers; i++)
	{
		fin >> users[i].firstname;
		fin.ignore();
		fin >> users[i].username;
		fin.ignore();
		fin >> users[i].email;
		fin.ignore();
		fin >> users[i].foldercount;
		fin.ignore();
		users[i].gitHubfolders = new string[users[i].foldercount];
		for (int j = 0; j < users[i].foldercount; j++)
		{
			fin >> users[i].gitHubfolders[j];
		}
	}
}
//printing data of users about firstname, username, email,foldercont,folder_names,educational_institutes and qualification 
void print(gitHubuser &users)
{
	cout << users.firstname << endl;
	cout << users.username << endl;
	cout << users.email << endl;
	cout << users.foldercount << endl;
	users.gitHubfolders = new string[users.foldercount];
	for (int i = 0; i < users.foldercount; i++)
	{
		cout << users.gitHubfolders[i] << endl;
	}
	cout << users.educational_institute << endl;
	cout << users.qualification;
}
//setting background information of users i.e education institute and qualification
void setBackground(gitHubuser & users)
{
	users.educational_institute = new string;
	users.qualification = new string;
	cout << users.firstname << " enter your educational institute : "<<endl;
	getline(cin, *users.educational_institute);
	cout << users.firstname << " enter your qualification level : " << endl;
	getline(cin,*users.qualification);
}
//Removing the data of data of educational_institute and qualification level
void remove(gitHubuser &users)
{
	*users.educational_institute = nullptr;
	*users.qualification = nullptr ;

}
//copying data of originalarry into a new array called backuparry
void backup(gitHubuser *originalArry, gitHubuser *&backupArry, int userCount)
{

	backupArry = new gitHubuser[userCount];
	for (int i = 0; i < userCount; i++)
	{
		backupArry[i].firstname = originalArry[i].firstname;
		backupArry[i].username = originalArry[i].username;
		backupArry[i].email = originalArry[i].email;
		for (int j = 0; j < userCount; j++)
		{
			backupArry[i].gitHubfolders[j] = originalArry[i].gitHubfolders[j];
		}
	}
}

int main()
{
	gitHubuser* user,users;
	readdatafromfile(user, "f.txt");
	print(users);
	setBackground(users);

	delete[]user;
	system("pause");
}