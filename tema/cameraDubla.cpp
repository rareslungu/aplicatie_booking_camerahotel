//
// Created by Raresssssssssss on 1/19/2022.
//

#include "cameraDubla.h"
#include <stdio.h>

void cameraDubla::afisare(std::ostream &out) const {
    camera::afisare(out);
    if(balcon==0)
        out<<" fara balcon";
    else
        out<<" cu balcon";
    out<<"\n";
}

std::shared_ptr<camera> cameraDubla::clone() const {
    return std::make_shared<cameraDubla>(*this);
}
void cameraDubla::calcPretCam() {
    pret = 100;
    if(balcon == 1)
        pret+=25;
}

cameraDubla::cameraDubla(const std::string &nrCamera, int tipCamera, bool ocupat, int capacitatePersoane, int pret,
                         const std::string &tipCameraStr, bool balcon) : camera(nrCamera, tipCamera, ocupat,
                                                                                capacitatePersoane, pret, tipCameraStr),
                                                                         balcon(balcon) {}
