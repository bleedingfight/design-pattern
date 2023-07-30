#include "Singleton.h"

#include "Logger.h"
template <typename T>
T& Singleton<T>::getInstance() {
  static T m_instance;
  return m_instance;
}
template Logger& Singleton<Logger>::getInstance();
