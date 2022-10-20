#pragma once



class Mystring {

private:
	char* str;

public:
	Mystring();  //No Args-Constructor

	Mystring(const char* s); //OverLoaded-Constructor

	Mystring(const Mystring& source);

	Mystring(const Mystring&& source);

	Mystring &operator=(const Mystring& rhs);

	Mystring& operator=(const Mystring&& rhs);
	Mystring operator-() const;  //make lower case 
	Mystring operator+(const Mystring& rhs) const;
	bool operator==(const Mystring& rhs) const;

	~Mystring();

	void Display() const;
	int get_length() const;
	const char* get_str() const ;
	

};