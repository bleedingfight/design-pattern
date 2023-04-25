include_directories(${CMAKE_SOURCE_DIR}/include)
add_library(currency SHARED CurrencyRate_o.cpp)
add_library(utils SHARED Context.cpp CurrencyRate.cpp ICurrencyStrategy.cpp ICurrencyStrategyFactory.cpp USCurrencyStrategy.cpp USCurrencyStrategyFactory.cpp RussiaCurrencyStrategy.cpp RussiaCurrencyStratrgyFactory.cpp)