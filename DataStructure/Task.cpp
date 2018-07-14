/*
 * Task.cpp
 *
 *  Created on: 11-Apr-2018
 *      Author: tapesh
 */

#include"Task.h"

class task
{
	int prio;
public:
	task():prio(0){}
	task(int p):prio(p){}
	bool operator >(task &op)
	{

		return this->prio > op.prio;

	}
	int get()
	{
		return prio;
	}
};

class player:public task
{
public:
	explicit player(int p):task(p){}
	void display()
	{
		cout<<"Prio "<<get()<<endl;
	}

};

atomic<int> vec;

class testing
{

	std::mutex mu;
	std::condition_variable cond;
	atomic<int> po;
	atomic<bool> ready;
public:
	testing():ready(false)
{
}
	testing(const testing &ob)
	{

	}
	testing operator=(testing &)=delete;
	void read();
	void write();
};

void testing::read()
{
	while(1)
	{
		std::unique_lock<mutex> lk(mu);
		cout<<"Reader Thread start"<<endl;

		cond.wait(lk,[&](){return ready.load();});
		ready.store(false);
		cout<<"Reader Thread cond "<<vec.load()<<endl;

		po.store(vec.load());
		vec.store(0);
		lk.unlock();
		cond.notify_all();
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
}
void testing::write()
{
	while(1)
	{
		cout<<"Write Thread start"<<endl;
		std::unique_lock<mutex> lk(mu);

		int  p =po.load();
		vec.store(100);
		lk.unlock();
		ready.store(true);
		cond.notify_all();

		cout<<"Write Thread start--"<<endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
}
int main()
{
	/*MesgQ<player> ob;
	player o1(1),o2(6),o3(3);

	ob.push(o1);
	ob.push(o2);
	ob.push(o3);
	auto at = ob.top();
	while(!ob.empty())
	{

		at = ob.top();
		at.display();
		ob.pop();
	}*/
	testing obj;
	thread th1(&testing::read,obj);
	thread th2(&testing::write,obj);

	if(th2.joinable())
	{
		th2.join();
	}
	if(th1.joinable())
	{
		th1.join();
	}

	return 0;
}