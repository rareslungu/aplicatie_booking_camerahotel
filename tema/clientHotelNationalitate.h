//
// Created by Raresssssssssss on 1/21/2022.
//

#ifndef TEMA_CLIENTHOTELNATIONALITATE_H
#define TEMA_CLIENTHOTELNATIONALITATE_H


#include "clientHotel.h"

class clientHotelNationalitate:public clientHotel {
private:
    //int nation;  //1 - roman, 2 - alta nationalitate
    std::string nationalitate;
public:
    clientHotelNationalitate(const std::string &nume, const std::string &prenume, int id, int tipCamera,
                             const std::string &nationalitate);

    void afisare(std::ostream &out) const override;
    std::shared_ptr<clientHotel> clone() const override;

};


#endif //TEMA_CLIENTHOTELNATIONALITATE_H
