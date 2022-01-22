//
// Created by Raresssssssssss on 1/21/2022.
//

#ifndef TEMA_ERORI_H
#define TEMA_ERORI_H

#include <stdexcept>
class erori : public std::runtime_error{
public:
    erori(const std::string &arg);
};

class eroare_pret : public erori{
public:
    eroare_pret();
};


#endif //TEMA_ERORI_H
