
/************************************************************************************************************************************************************
* Name                : Matthew Ramirez
* Assignment #6.2     : Comparison of Time Object, and Assignment Operator Practice
* Class               : CS 37
* Section             : 6:00pm - 10:00 pm
* Date                : 10/1/2016
*************************************************************************************************************************************************************/

#include "Time.h"
#include <iostream>

/************************************************************************************************************************************************************
*
*                                  HW #6.2 Comparison of Time Objects, and Assignment Operator Practice 
_____________________________________________________________________________________________________________________________________________________________
* This program instantiates two Time objects using a constructor with 3 formal parameters (doubles) and  assigns them to member variables hour, min, and sec. The 
* get method getTime() is then invoked to populate the 3 local variables with the first Time object's instance variable values. The local variables are then compared to the
* instance variables in the second object  via the compare() method. The value returned is used in a conditional statement that determines whether one of two strings
* will be displayed on screen (Whether the times are equal, or unequal). Object 2 is then assigned to object 1, and object 1 is compared to the variables declared in main. 
* The process is then repeated, and the program alerts the user as to whether the time values are equal or not.
_____________________________________________________________________________________________________________________________________________________________________
*   Inputs                   :
*         NONE               : All values are inputted manually when Time constructord invoked.
*
*   Outputs                  :
*        NONE                : Two strings are outputted, and are dependent upon the result of the compare() method.
*
*   Processing
*        localH              : int variable assigned the values of the 2 Time obeject instance variables hour.
*        localM              : int variable assigned the values of the 2 TIme object instance variables min.
*        localS              : int variable assigned the values of the 2 Time object instance variables sec.
*        compareResults      : bool variable that is assigned the return value of the compare() method.
*        time1               : Time object that is instantiated with 3 paramteres inputted by the user.
*        time2               : Time object that is instantiated with 3 parameters inputted by the user.
*
/********************************************************************************************************************************************************************/
using namespace std;

int main() {
	int localH;                                                 //  int variable that is assigned the values of Time1/TIme2's hour.
	int localM;                                                 //  int variable that is assigned the values of Time1/Time2's min.
	int localS;                                                 //  int variable that is assigned the values og Time1/Time2's sec
	bool compareResult;                                         //  bool variable that is assigned the value that is returned by the compare() method. 

	Time time1(5, 5, 5);                                        // instantiation and initialization of Time object using a constructor that has 3 formal paremeters.
	Time time2(6, 6, 6);                                        // instantiation and initialization of second Time object using a construcor that has 3 formal parameters. 
	time1.getTime(localH, localM, localS);                      // getTime() method is called and passes the three local variables by reference. THey will be assigned the values of Time1's instance variables.
	compareResult = time2.compare(localH, localM, localS);      // compare() method is called and the resulting value is assigned to CompareResult. (true if time values are equal, or false if they aren't).

	if (compareResult) {                                        // bool value held in compareResult is used as condition for the output message.
		cout << "The times are equal!" << endl;
	}
	else {
		cout << "The times are not equal" << endl;
	}

	time1 = time2;                                              // time1 is assigned time2. time1 's instance variables now equal time2's instance variables.

	time1.getTime(localH, localM, localS);                      // same process as mentioned in the above comments.
	compareResult = time2.compare(localH, localM, localS);      

	if (compareResult) {                                        // CompareResults is now True, due to the assignment of time2 to time1. 
		cout << "The times are equal!" << endl;
	}
	else {
		cout << "The times are not equal" << endl;

	}
}