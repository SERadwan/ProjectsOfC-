#include <iostream>
#include <string>
using namespace std;
enum enNumberType {Odd = 1 , Even = 2 };
int ReadNumber(){
    int number ;
    cout << "\nenter you're number : " << endl;
    cin >> number ;
    return number ;
}
enNumberType CheckType (int Number){
    
    int Reference = Number % 2 ;
    if (Reference == 0 )
        return enNumberType:: Even ;
    else 
       return enNumberType :: Odd ;
}
void PrintNumber (enNumberType NumberType) {

    if ( NumberType == enNumberType::Even)
        cout << "\nyour number is : Even \n" << endl << "******************"<< endl;
    else
        cout << "\nyour number is : Odd \n " << endl << "******************"<< endl;
}
int NumberOfNumber() {
    int NumberOfnumber; 
    cout << "How many do you want of check " << endl;
    cin >> NumberOfnumber ;
    return NumberOfnumber;
}
int ForLoops (int number){
     for ( int i = 1 ; i <= number ; i++)
        PrintNumber(CheckType(ReadNumber()));
    
    return 0 ; 
}


int main()
{
    ForLoops(NumberOfNumber());
    return 0;
}