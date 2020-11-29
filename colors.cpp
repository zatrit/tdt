#include "includes.cpp"

#if defined(__GNUC__)||defined(__unix__)
const std::string red("\033[0;31m");
const std::string green("\033[1;32m");
const std::string yellow("\033[1;33m");
const std::string blue("\033[0;34m");
const std::string magenta("\033[0;35m");
const std::string cyan("\033[0;36m");
const std::string light_gray("\033[0;37m");
const std::string reset("\033[0m");
#elif defined(WIN32)||defined(_WIN32)
const std::string red("");
const std::string green("");
const std::string yellow("");
const std::string blue("");
const std::string magenta("");
const std::string cyan("");
const std::string light_gray("");
const std::string reset("");
#endif

static string getColorA(string color){
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