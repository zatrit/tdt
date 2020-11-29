#include "colors.cpp"
#include "utils.cpp"

int main(int argsL, const char** args){
string a="*";
string b="#";
string c="";
string col="";
cout << "Args length: " << argsL << endl;
if(argsL>1)
      a=args[1];
if(argsL>2)
     b=args[2];
if(argsL>3)
{
	   col=args[3];
       col=getColorA(col);
       if(col=="")
        cout  << yellow << "Invalid color \"" << args[3] << "\". Type " << green << args[0] << " --help " << yellow << "for help" << reset << endl;
}
if(starts_with(a,"--"))
if(a=="--help")
 {
 	cout << green << "Short guide about" << yellow << " \"Triangle Drawer Tool\"" << reset << endl;
     cout << "Command structure: " << endl;
     cout << args[0] << " [first char] [second char] [color]" << endl;
     cout << "Colors: " << endl;
     cout << "   " << red << "red" << endl;
     cout << "   " << green << "green" << endl;
     cout << "   "<< yellow << "yellow" << endl;
     cout << "   " << blue << "blue" << endl;
     cout << "   " << magenta << "magenta" << endl;
     cout << "   " << cyan << "cyan" << endl << reset;
      return 1;
 }else{
 	cout  << yellow << "Invalid argument \"" << a << "\". Type " << green << args[0] << " --help " << yellow << "for help" << reset << endl;
 return 1;
 }
for(int i=0;i<10;i++){
     for(int j=10;j>0;j--){
      if(j>i)
            cout << col << a << " ";
      else cout << col << b << " ";
      }
      cout << endl << reset;
}
}