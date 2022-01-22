//
// Created by Raresssssssssss on 1/21/2022.
//

#ifndef TEMA_CLIENTHOTEL_H
#define TEMA_CLIENTHOTEL_H

#include <string>
#include <ostream>
#include <memory>


class clientHotel {
protected:
    std::string nume;
    std::string prenume;
    int id;
    int tipCamera;
public:
    clientHotel(const std::string &nume, const std::string &prenume, int id, int tipCamera);
    clientHotel();

    friend std::ostream &operator<<(std::ostream &os, const clientHotel &hotel);

    int getTipCamera() const;

    virtual void afisare(std::ostream &out) const;
    virtual std::shared_ptr<clientHotel> clone() const = 0;

};


#endif //TEMA_CLIENTHOTEL_H
