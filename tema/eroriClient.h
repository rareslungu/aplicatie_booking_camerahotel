//
// Created by Raresssssssssss on 2/3/2022.
//

#ifndef TEMA_ERORICLIENT_H
#define TEMA_ERORICLIENT_H


#include <stdexcept>
class eroriClient : public std::runtime_error{
public:
    eroriClient(const std::string &arg);
};

class eroare : public eroriClient{
public:
    eroare();
};




#endif //TEMA_ERORICLIENT_H
