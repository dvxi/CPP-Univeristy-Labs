#include "Service.h"
#include "IceMachine.h"
#include <iostream>

using namespace std;

void Service::Test(IceMachine *iceMachine, double iceCreamCount){
    cout << "\n#############################################################\n";
    cout << "### Test serwisowy ###\n\n";
    cout << "1. Wsyp proszek do pelna:\n";
    iceMachine->Reload(iceCreamCount);
    cout << "2. Przebieg testowy: " << iceCreamCount << " porcji:\n";
    iceMachine->Start();
    iceMachine->Make(iceCreamCount);
    iceMachine->Stop();
    cout << "### Koniec testu serwisowego ###\n";
    cout << "#############################################################\n";
}

void Service::TestCopy(IceMachine iceMachine, double iceCreamCount){
    cout << "\n#############################################################\n";
    cout << "### Test serwisowy na egzemplarzu fabrycznym o identycznych parametrach ###\n\n";
    cout << "1. Wsyp proszek do pelna:\n";
    iceMachine.Reload(iceCreamCount);
    cout << "2. Przebieg testowy: " << iceCreamCount << " porcji:\n";
    iceMachine.Start();
    iceMachine.Make(iceCreamCount);
    iceMachine.Stop();
    cout << "### Koniec testu serwisowego ###\n";
    cout << "#############################################################\n";
}