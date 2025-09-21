#include<iostream>
#include<string.h>
using namespace std;

class Sample
{
	int	_id;
	char*	_name;
   public:
	Sample():_id(0),_name(nullptr)
	{
	    cout<<"Defalult constructor get called"<<endl;
	}

	Sample(int id,const char* name):_id(id)
	{
	    cout<<"Argument constructor get called"<<endl;
		_name = new char[strlen(name)+1];
		strcpy(_name,name);
	}

	Sample(const Sample& obj)
	{
	    cout<<"Copy constructor get called"<<endl;
		_id = obj._id;
		_name = new char[strlen(obj._name)+1];
		strcpy(_name,obj._name);
	}

	Sample& operator=(const Sample& ob)
	{
		if(this != &ob)
		{
			_id = ob._id;
			delete[] _name;
			_name = new char[strlen(ob._name)+1];
			strcpy(_name,ob._name);			
		}
		cout<<"Overloaded assignment constructor get called"<<endl;
		return *this;
	}

	Sample(Sample&& obj) noexcept
	{
	    cout<<"Move constructor get called"<<endl;
		_id = obj._id;
		obj._id = 0;

		_name = obj._name;
		obj._name = nullptr;
	}

	Sample& operator= (Sample&& ob) noexcept
	{
		if( this != &ob)
		{
			_id = ob._id;
			ob._id = 0;

			delete[] _name;
			_name = ob._name;
			ob._name = nullptr;
		}
		cout<<"Move assignment get called"<<endl;
		return *this;
	}

	~Sample()
	{
		if(_name != nullptr)
		{
			delete[] _name;
			_name = nullptr;
			
		}
		cout<<"Destructor get called"<<endl;
	}
};

int main()
{
	Sample obj;
	Sample obj2(101, "vinay Kumar");
	Sample obj3(obj2);
	Sample obj4;
    	obj4 = obj3;

	Sample obj5 = move(obj4);
	
	Sample obj6;
	obj6 = move(obj5);
	return 0;
}

