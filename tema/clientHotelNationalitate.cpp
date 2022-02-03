//
// Created by Raresssssssssss on 1/21/2022.
//

#include "clientHotelNationalitate.h"
#include <string.h>
#include "eroriClient.h"


void clientHotelNationalitate::afisare(std::ostream &out) const {
    clientHotel::afisare(out);
    out<<" NATIONALITATE: "<<nationalitate<<"\n";
}

std::shared_ptr<clientHotel> clientHotelNationalitate::clone() const {
    return std::make_shared<clientHotelNationalitate>(*this);
}

clientHotelNationalitate::clientHotelNationalitate(const std::string &nume, const std::string &prenume, int id,
                                                   int tipCamera, const std::string &nationalitate) : clientHotel(nume,
                                                                                                                  prenume,
                                                                                                                  id,
                                                                                                                  tipCamera),
                                                                                                      nationalitate(
                                                                                                              nationalitate) {
    if(id < -237467){
        throw eroare();
    }
}



