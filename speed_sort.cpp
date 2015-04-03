#include <vector>
#include <deque>
#include <list>
#include <chrono>
#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>
#include <algorithm>

#define N 10000000

struct BigData{
	int data[1000];
	BigData(int a){data[0]=a;}

};


using namespace std;

int main(){
	vector<BigData> data;
	srand((int)time(NULL));
	for(int i=0;i<N;i++){
		data.push_back(BigData{rand()});
	}
	{
		auto start=chrono::system_clock::now();
		auto end=chrono::system_clock::now();
		auto during=end-start;
		cout<<chrono::duration_cast<chrono::milliseconds>(during).count()<<endl;
	}
	{
		vector<int> Vector;
		for(int i=0;i<N;i++)Vector.push_back(data[i]);
		auto start=chrono::system_clock::now();
		sort(Vector.begin(),Vector.end());
		auto end=chrono::system_clock::now();
		auto during=end-start;
		cout<<chrono::duration_cast<chrono::milliseconds>(during).count()<<endl;
	}
	{
		deque<int> Deque;
		for(int i=0;i<N;i++)Deque.push_back(data[i]);
		auto start=chrono::system_clock::now();
		sort(Deque.begin(),Deque.end());
		auto end=chrono::system_clock::now();
		auto during=end-start;
		cout<<chrono::duration_cast<chrono::milliseconds>(during).count()<<endl;
	}
	{
		list<int> List;
		for(int i=0;i<N;i++)List.push_back(data[i]);
		auto start=chrono::system_clock::now();
		List.sort();
		auto end=chrono::system_clock::now();
		auto during=end-start;
		cout<<chrono::duration_cast<chrono::milliseconds>(during).count()<<endl;
	}

	return 0;
}
