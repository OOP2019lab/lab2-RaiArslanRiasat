#include<iostream>
#include<string.h>
#include<string>
#include"Header.h"
using namespace std;

bool comparison(gitHubuser a,gitHubuser b) //compare username ,email,firstname of two gitHubusers
{
	bool flag=0;
	if(a.username==b.username)
	{
		flag=1;

	}
	if(a.firstname==b.firstname)
	{
		flag=1;
		
	}	
	if(a.email==b.email)
	{
		flag=1;
	}
	return flag;
}
void inputfromuser(gitHubuser *arr,int size) //Take input fom the user 
{
	arr=new gitHubuser[size];
	for(int i=0;i<size;i++)
	{
		cout<<"First Name of User : "<<i+1<<" ";
		cin >> arr[i].firstname;
		cout<<"User Name of User : "<<i+1<<" ";
		cin>>arr[i].username;
		cout<<"Email of User : "<<i+1<<" ";
		cin>>arr[i].email;
		cout<<"Password of User : "<<i+1<<" ";
		cin>>arr[i].password;
		cout<<"Folders of User : "<<i+1<<" ";
		cin>>arr[i].foldercount;
	}
}
bool exist(gitHubuser *arr,int size,string username) //is newly entered userername exist in gitHubuser
{
	arr=new gitHubuser[size];
	bool flag=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i].username==username)
			flag=1;
	}
	return flag;
}
gitHubuser *searchuser ( gitHubuser *users, int size, string userName) //compare userName with users.username and return adress of users
{
	gitHubuser *ptr=nullptr;
	for(int i=0;i<size;i++)
	{
		if(users[i].username==userName)
		{
			ptr=&users[i];
		}
	}
	return ptr;
}
int main()
{
	gitHubuser *arr;
	int size;
	cout<<"size ";
	cin>>size;
	arr=new gitHubuser[size];
	inputfromuser(arr,size);

	searchuser(arr,size,"Arslan");

	delete [] arr;
	system("pause");
}