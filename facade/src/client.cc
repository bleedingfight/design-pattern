#include "client.h"
void Client::order() { process(); }
void Client::process() {
  makeProcess();
  getPlatform()->processNeed();
  getBusiness()->processOrder();
  getLogistics()->processTransport();
}
