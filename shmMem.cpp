#include <iostream>
#include <iomanip>

using namespace std;

void clearDisplay(){
    system("clear");
}

void DisplayHdlcDevice(){
    clearDisplay();
    cout << "\t\t\t HDLC Devices" << endl;
    cout << "\t\t 1. PAC  2. PIC  3. TRS  4. FDU" << endl;
    cout << "\t\t 5. PCU  6. ROOMDOOR  7. Back!" << endl;
    cout << "\t Choose the sub-unit you want to change the SDR." << endl;
    cout << "Input Number : ";
}

void DisplayEthernetDevice(){
    clearDisplay();
    cout << "\t\t\t Ethernet Devices" << endl;
    cout << "\t\t 1. ER  2. RTD  3. CBMU  4. Back!" << endl;
    cout << "\t Choose the sub-unit you want to change the SDR." << endl;
    cout << "Input Number : ";
}

void DisplayMvbDevice(){
    clearDisplay();
    cout << "\t\t\t     MVB Devices" << endl;
    cout << "\t\t 1. BMS  2. SIV  3. C/I  4. Back!" << endl;
    cout << "\t Choose the sub-unit you want to change the SDR." << endl;
    cout << "Input Number : ";

}

void DisplayFDU(){
    clearDisplay();
    cout << "\t\t\t    FDU SDR" << endl;
    cout << "\t\t 1. Start Of Test " << endl;
    cout << "\t Choose the sub-unit you want to change the SDR." << endl;
    cout << "Input Number : ";

}

int main(){
    while(1){
        clearDisplay();
        cout << endl;
        cout << "\t\t To Change SDR Data with ShmMem" << endl;
        cout << endl;
        cout << "\t Choose the communication that the sub-unit uses. " << endl;
        cout << "\t\t 1. HDLC    2.Ethernet    3. MVB" << endl;
        int InputNumber = 0;
        cout << "Input Number : ";
        cin >> InputNumber;
        switch(InputNumber){
            case 1:
                DisplayHdlcDevice();
                cin >> InputNumber;
                break;
            case 2:
                DisplayEthernetDevice();
                cin >> InputNumber;
                break;
            case 3:
                DisplayMvbDevice();
                cin >> InputNumber;
                break;
        }
    }
}