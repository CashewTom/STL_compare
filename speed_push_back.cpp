#include <vector>
#include <deque>
#include <list>
#include <chrono>
#include <iostream>

#define N 100000000


using namespace std;

int main(){
	{
		auto start=chrono::system_clock::now();
		auto end=chrono::system_clock::now();
		auto during=end-start;
		cout<<chrono::duration_cast<chrono::milliseconds>(during).count()<<endl;
	}
	{
		vector<int> Vector;
		auto start=chrono::system_clock::now();
		for(int i=0;i<N;i++)Vector.push_back(i);
		auto end=chrono::system_clock::now();
		auto during=end-start;
		cout<<chrono::duration_cast<chrono::milliseconds>(during).count()<<endl;
	}
	{
		deque<int> Deque;
		auto start=chrono::system_clock::now();
		for(int i=0;i<N;i++)Deque.push_back(i);
		auto end=chrono::system_clock::now();
		auto during=end-start;
		cout<<chrono::duration_cast<chrono::milliseconds>(during).count()<<endl;
	}
	{
		list<int> List;
		auto start=chrono::system_clock::now();
		for(int i=0;i<N;i++)List.push_back(i);
		auto end=chrono::system_clock::now();
		auto during=end-start;
		cout<<chrono::duration_cast<chrono::milliseconds>(during).count()<<endl;
	}

	return 0;
}
