#pragma once
class Some
{
private:
	int* _array;
	int _length;
public:
	Some()
	{
		_length = 0;
		_array = nullptr;
	}
	Some(int length) {
		_length = length;
		_array = new int[_length] {};
	}

	void Show();
	
	~Some()
	{
		 
	}

};

