#include <iostream>
#include <string>
using namespace std;
struct stInfo{
    int Age ;
    bool HasDriveringLicence ;
};
stInfo ReadInfo(){
    stInfo Info ;
    cout << "How old are you ? " << endl;
    cin >> Info.Age;
    cout << "Are you have A driving license?\n1 = yes \n0 = no " << endl;
    cin >> Info.HasDriveringLicence;
    return Info ;
}
bool Verification (stInfo Info ){
    return (Info.Age >= 21 && Info.HasDriveringLicence);
}
void PrintResult(stInfo Info){
    if (Verification(Info))
        cout << "You have been accepted." << endl;
    else 
        cout << "You have been rejected." << endl;   
}
int main()
{
    PrintResult(ReadInfo());
    return 0;
}