#include "on_state.h"
OnState::OnState(){
    std::cout<<"Light tured on\n";
}
void OnState::on(LightSwitch* ls){
    std::cout<<"Switching light on\n";
    ls->set_state(new OnState());
    delete this;
}
