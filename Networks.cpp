// Networks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


class Network
{
public:
	string _IP = "";
	int _NumOfNetwork;
	int _NumOfHost;
	long long _NetworkID;
	long long _BrodcastIP;
	long long _FirstIP;
	long long _LastIP ;


	/*
	void FindNetworkID() {
		_BrodcastIP;
	}

	void FindProdcastID() {

	}
	
	void FindFirstIP() {

	}

	void FindLastIP() {

	}


	void FindNextNetwork() {

	}
	*/

	void sIP() {
		string ip;

		for (short i = 0; i < 12; i++)
		{
			ip += _IP[i];

		}
		
		_IP = ip;
	}

	void FirstNetwork() {

		_NetworkID = 000;
		_BrodcastIP = _NetworkID + (_NumOfHost - 1);

		cout << "\n-------- NETWORK " << 1 << " --------\n";

		cout << "Network ID  : " << _IP << _NetworkID << "\n";
		cout << "Brodcast ID : " << _IP << _BrodcastIP << "\n";
		cout << "First ID    : " << _IP << _NetworkID + 1 << "\n";
		cout << "Last ID     : " << _IP << _BrodcastIP - 1 << "\n";

		cout << "\n------------------------------------\n";



	}

	void Start() {
		cout << "\nEnter the IP: ";
		cin >> _IP;
		sIP();
		cout << "\nEnter the number of Networks: ";
		cin >> _NumOfNetwork;


		_NumOfHost = 256 / _NumOfNetwork;
		cout << "\nNumber of network : " << _NumOfNetwork;
		cout << "\nNumber of host    : " << _NumOfHost;


		FirstNetwork();
		for (int i = 1; i < _NumOfNetwork; i++)
		{
			long long X = _NetworkID += _NumOfHost;
			long long Y = _BrodcastIP += _NumOfHost;
			long long Z = _FirstIP = _NetworkID + 1;
			long long M = _LastIP = _BrodcastIP - 1;

			cout << "\n-------- NETWORK " << i + 1 << " --------\n";

			cout << "Network ID  : " << _IP << X << "\n";
			cout << "Brodcast ID : " << _IP << Y << "\n";
			cout << "First ID    : " << _IP << Z << "\n";
			cout << "Last ID     : " << _IP << M << "\n";

			cout << "\n------------------------------------\n";

		}
	}

private:

};


int main()
{
	Network N1;

	N1.Start();




    return 0;
}