#include "off_state.h"
OffState::OffState(){
    std::cout<<"Light turned off\n";
}
void OffState::off(LightSwitch*ls){
    std::cout<<"Switching light off\n";
    ls->set_state(new OffState());
    delete this;

}
