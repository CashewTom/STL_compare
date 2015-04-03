#include <vector>
#include <deque>
#include <list>
#include <chrono>
#include <iostream>

#define N 100000000


using namespace std;

int main(){
	long long sum;
	{
		auto start=chrono::system_clock::now();
		auto end=chrono::system_clock::now();
		auto during=end-start;
		cout<<chrono::duration_cast<chrono::milliseconds>(during).count()<<endl;
	}
	{
		vector<int> Vector;
		for(int i=0;i<N;i++)Vector.push_back(i);
		sum=0;
		auto start=chrono::system_clock::now();
		for(auto &it:Vector)sum+=it;
		auto end=chrono::system_clock::now();
		auto during=end-start;
		cout<<chrono::duration_cast<chrono::milliseconds>(during).count()<<endl;
	}
	{
		deque<int> Deque;
		sum=0;
		for(int i=0;i<N;i++)Deque.push_back(i);
		auto start=chrono::system_clock::now();
		for(auto &it:Deque)sum+=it;
		auto end=chrono::system_clock::now();
		auto during=end-start;
		cout<<chrono::duration_cast<chrono::milliseconds>(during).count()<<endl;
	}
	{
		list<int> List;
		for(int i=0;i<N;i++)List.push_back(i);
		sum=0;
		auto start=chrono::system_clock::now();
		for(auto &it:List)sum+=it;
		auto end=chrono::system_clock::now();
		auto during=end-start;
		cout<<chrono::duration_cast<chrono::milliseconds>(during).count()<<endl;
	}

	return 0;
}
