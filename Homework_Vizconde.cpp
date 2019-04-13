#include <iostream>
using namespace std;

int main() {
   
   float d,y;
   int m;
   
  cout<< "INPUT NUMBERS ONLY\n ";
   
   cout<< "Enter DAY: ";
   cin>> d;
   
   cout<< "Enter MONTH: ";
   cin>> m;
   
   cout<< "Enter YEAR: ";
   cin>> y;
   
   switch(m)
   {
   	case 1: if (m=1)
  	cout<< "January " << d << "," << y << endl;	
    break;
 
   case 2: if (m=2)
   {
   
	cout<< "February " << d << ", " << y << endl;
	break;
}
	case 3: if (m=3)
   {
   
	cout<< "March " << d << ", " << y << endl;
	break;
}
	case 4: if (m=4)
   {
   
	cout<< "April " << d << ", " << y << endl;
	break;
}
	case 5: if (m=5)
   {
   
	cout<< "May " << d << ", " << y << endl;
break;
}
	case 6: if (m=6)
   {
   
	cout<< "June " << d << ", " << y << endl;
break;
}
	case 7: if (m=7)
   {
   
	cout<< "July " << d << ", " << y << endl;
break;
}
	case 8: if (m=8)
   {
   
	cout<< "August " << d << ", " << y << endl;
break;
}
	case 9: if (m=9)
   {
   
	cout<< "September " << d << ", " << y << endl;
break;
}
	case 10: if (m=10)
   {
   
	cout<< "October " << d << ", " << y << endl;
break;
}
	case 11: if (m=11)
   {
   
	cout<< "November " << d << ", " << y << endl;
break;
}
	case 12: if (m=12)
   {
   
	cout<< "December " << d << ", " << y << endl;
break;
}
default: 

cout<< "INVALID DATE";
}

	
   return 0;
}
