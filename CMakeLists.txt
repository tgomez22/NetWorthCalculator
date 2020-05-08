cmake_minimum_required(VERSION 3.16)
project(NetWorthCalculator)

set(CMAKE_CXX_STANDARD 17)

add_executable(NetWorthCalculator main.cpp Person.cpp Person.h Address.cpp Address.h Account.cpp Account.h Node.cpp Node.h Asset.cpp Asset.h RealProperty.cpp RealProperty.h LiquidAsset.cpp LiquidAsset.h tradeableInvestment.cpp tradeableInvestment.h RentalProperty.cpp RentalProperty.h ResidentalRentalProperty.cpp ResidentalRentalProperty.h CommercialRentalProperty.cpp CommercialRentalProperty.h)