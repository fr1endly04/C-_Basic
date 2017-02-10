#pragma once

class om
{
	char *name;
	float h, g;
public:
	char* get_name();
	void setname(char *);
	float get_inaltime();
	void seth(double);
	float get_greutate();
	void setg(double);
	om();//ex.3
	om(char*, double, double);//ex.3
	~om();//ex.3
};
