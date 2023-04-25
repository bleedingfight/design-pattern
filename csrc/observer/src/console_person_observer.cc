#include "console_person_observer.h"
ConsolePersonObserver::field_changed(Person&source,const std::string& field_name){
    std::cout<<"Person's "<<field_name<<" has changed to "<<source.get_age()<<".\n";

}
