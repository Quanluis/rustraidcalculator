#include <iostream>
using namespace std;

int main(){

    //variables

    int wooden,
        sheetMetal,
        woodenBreak,
        sheetMetalBreak,
        armored,
        armoredBreak,
        finalResults;

    cout << "Wooden? " << endl;

    cin >> wooden;

        woodenBreak = wooden * 2;

    cout << "SheetMetal? " << endl;

        cin >> sheetMetal;

        sheetMetalBreak = sheetMetal * 4;

    cout << "Armored?" << endl;

        cin >> armored;

        armoredBreak = armored * 12;

        finalResults = woodenBreak + sheetMetalBreak + armoredBreak;

        cout << "Players will need " << finalResults << " satchels to raid base.";

    return 0;
}
