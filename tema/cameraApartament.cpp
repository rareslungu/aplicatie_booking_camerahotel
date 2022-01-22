//
// Created by Raresssssssssss on 1/19/2022.
//

#include "cameraApartament.h"


void cameraApartament::afisare(std::ostream &out) const {
    camera::afisare(out);
    out<<" nr camere:"<<nrCamere;
    out<<"\n";
}

std::shared_ptr<camera> cameraApartament::clone() const {
    return std::make_shared<cameraApartament>(*this);
}

void cameraApartament::calcPretCam() {
    pret = 200 + 50 * nrCamere;

}

cameraApartament::cameraApartament(const std::string &nrCamera, int tipCamera, bool ocupat, int capacitatePersoane,
                                   int pret, const std::string &tipCameraStr, int nrCamere) : camera(nrCamera,
                                                                                                     tipCamera, ocupat,
                                                                                                     capacitatePersoane,
                                                                                                     pret,
                                                                                                     tipCameraStr),
                                                                                              nrCamere(nrCamere) {}
