#include <iostream>
#include <string>

using namespace std;

struct patrons{
	string full_name;
	double fund;
};

int main()
{
	int patrons_number;
	patrons *ppatrons;
	cout << "How many patrons? ";
	cin >> patrons_number;
	cin.get();
	ppatrons = new patrons[patrons_number];
	int id = 0;
	bool empty = true;
	cout << "Starting to input patrons'info:" << endl;
	while(id<patrons_number)
	{
		cout << "Enter the full name of patrons: ";
		getline(cin,ppatrons[id].full_name);
		cin>>ppatrons[id].fund;
		cin.get();
		id++;
		cout<<"Continue to input, or press(f) to finished."<<endl;
		if(cin.get()=='f') break;
	}
	cout << "Grand Patrons" <<endl;
	for(int i; i<patrons_number;i++)
	{
		if(ppatrons[i].fund >= 1000)
        {
            cout << ppatrons[i].full_name << ":" << ppatrons[i].fund << endl;
            empty = false;
        }
	}
    if (empty) cout << "NONE" << endl;
    empty = false;
    cout << "Patrons" << endl;
    for (int i = 0; i < patrons_number; ++i) {
        if (ppatrons[i].fund <1000){
            cout << ppatrons[i].full_name << ": " << ppatrons[i].fund << endl;
        }
    }
    if (empty) cout<<"NONE"<<endl;
    delete []ppatrons;
    return 0;
}
