#include "iostream"

using namespace std;

const std::string red("\033[0;31m");
const std::string green("\033[1;32m");
const std::string yellow("\033[1;33m");
const std::string blue("\033[0;34m");
const std::string magenta("\033[0;35m");
const std::string cyan("\033[0;36m");
const std::string light_gray("\033[0;37m");
const std::string reset("\033[0m");

string getColor(string color){
	string col=color;
	if(col=="red")
       col=red;
       else if(col=="green")
       col=green;
       else if(col=="yellow")
       col=yellow;
       else if(col=="blue")
       col=blue;
       else if(col=="magenta")
       col=magenta;
       else if(col=="cyan")
       col=cyan;
       else{
       col="";
       }
       return col;
	}