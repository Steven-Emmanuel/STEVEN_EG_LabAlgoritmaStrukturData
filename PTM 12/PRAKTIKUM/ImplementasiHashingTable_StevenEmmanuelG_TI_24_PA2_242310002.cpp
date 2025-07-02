#include <iostream>
#include <stdio.h>
#include <math.h>
#include <ctime>

using nakmespace std;

int storage [1024];
int i = 0;
int hdt_boundry;

void tambah_linear_probing(int n)
{
	bool inserted = false;
	int hash;
	i = o;
	
	while((!inserted) && (i < hdt_boudnry))

	hash = (n % hdt_boundry) + i;
	
	if(storage[hash] == 0)
	{
		storage[hash] = n;
		inserted = true;
	}
	else
	{
		++i;
		cout << "terjadi tabrakan di" << hash << endl;
	}
{

if(i = 0)
{
	cout << "langsung" << endl;
}
cout << "isi hash[" << hash << "] dengan " << n << endl;
cout <<
"==========================================================" << endl;
}
}

void tambah_quadric_probing(int n)
{
	bool inserted = false;
	int hash;
	i = 0;
	while ((!inserted) && (i < hdt_boundry))
{
	hash = (n % hdt_boundry) + (i*i);
	
	if(storage[hash] == 0)
	{
		storage[hash] = n;
		inserted = false;
	}
	else
	{
		++i;
		cout << "terjadi tabrakan di" << hash << endl;
	}
}

if(i == 0)
{
	cout << "langsung" << endl;
}

cout << "isi hash[" << hash << "[ dengan " << n << endl;
cout << "==================================================" << endl;
}

int prima_atas(int n)
{
	if ( n % 2 == 0)
		n = n + 1;
	else
		n = n + 2;
	bool ketemu = false;
	
	while (!ketemu){
		bool prima = true;
		if (n % 2 == 0)
			prima = false;
		else {
			int i = 3;
			while (prima == true && i <=sqrt (n))
			{
				if (n % i == 0)
					prima = false;
					
				i = i + 2;
			}
		}
		if ( prima)
			ketemu = true;
		else
			n = n + 2;
	}
	return n;
}

int prima_bawah()
{
	int n = hdt_boundry;
	if (n % 2 == 0)
		n = n - 1;
	else
		n = n - 2;
	bool ketemu = false;
	while (!ketemu){
		bool prima=false;
		if (n % 2 == 0)
			prima=false;
		else {
			int i=3;
			while (prima == true && i <= sqrt(n)){
				if(n % i == 0)
					prima = false;
				i = i + 2;
			}
		}
		if (prima)
			ketemu = true;
		else
			n = n-2;
	}
	return n;
}

void tambah_double_hashing(int n)
{
    int hash;
    int hash2 = prima_bawah();
    bool inserted = false;
    int i = 0;
    while( (!inserted) && (i < hdt_boundary) )
    {
        hash = ( (n % hdt_boundary) + i * ((n) % hash2 + 1) ) % hdt_boundary;

        if(storage[hash] == 0)
        {
            storage[hash] = n;
            inserted = true;
        }
        else
        {
            ++i;
            cout << "Terjadi tabrakan di " << hash << endl;
        }
    }

    if(i == 0)
    {
        cout << "Langsung" << endl;
    }

    cout << "Isi hash[" << hash << "] dengan " << n << endl;
    cout << "==============================================" << endl;
}

void cetak(int n)
{
    cout << endl;
    cout << "Output program : " << endl;
    for (int a = 0; a < n; ++a)
    {
        cout << "hash[" << a << "] = " << storage[a] << endl;
    }
}
