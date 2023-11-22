#include <iostream>
using namespace std;

class FLIGHT {
    private int FlightNo;
    private char Destination[50];
    private float Distance;
    private float Fuel=13.2;
    float CALFUEL(float dist){
    	if(dist<=1000){
    		Fuel=500;
		}
		else if(dist>1000 && dist<=2000){
			Fuel=1100;
		}
		else if(dist>2000){
			Fuel=2200;
		}
		return Fuel;
    	
    }
public:
    info_desk(){
    	cout<<"ENTER FLIGHT NUMBER: ";
    	cin>>FlightNo;
    	cout<<"ENTER THE DISTANCE: ";
    	cin>>Distance;
    	cout<<"ENTER THE DESTINATION: ";
    	cin>>Destination;
    	Fuel=CALFUEL(Distance);
	}
	display_info(){
		cout<<"\n HERE ARE THE DETAILS OF FLIGHT !!\n";
		cout<<"\nFLIGHT NUMBER- "<<FlightNo;
		cout<<"\nFUEL CAPACITY- "<<Fuel;
		cout<<"\nDESTINATION IS- "<<Destination;
	}
};
int main(){
	FLIGHT x;
	x.info_desk();
	x.display_info();
	return 0;
}

