//
// Created by Raresssssssssss on 1/19/2022.
//

#include "camera.h"
#include "erori.h"


std::ostream &operator<<(std::ostream &out, const camera &camera) {
    camera.afisare(out);
    return out;
}

//const std::string &camera::intToString(int tipCam) {
//    std::string tipCameraString;
//    if (tipCam == 1)
//        tipCameraString = "CAMERA DUBLA";
//    else if (tipCam == 2)
//        tipCameraString = "APARTAMENT";
//    else tipCameraString = "VIEW ROOM";
//    return tipCameraString;
//}

camera::camera() {}

void camera::setNrCamera(const std::string &nrCamera) {
    camera::nrCamera = nrCamera;
}


int camera::setCapacitatePersoane(int capacitatePersoane) {
    camera::capacitatePersoane = capacitatePersoane;
}

void camera::setPret(int pret) {
    camera::pret = pret;
}

int camera::setOcupat(int ocupat) {
    camera::ocupat = ocupat;
}

const std::string &camera::getNrCamera() const {
    return nrCamera;
}


int camera::getCapacitatePersoane() const {
    return capacitatePersoane;
}

int camera::getPret() const {
    return pret;
}

int camera::getOcupat() const {
    return ocupat;
}



void camera::afisare(std::ostream &out) const {
    const auto &camera = *this;
    out << "numarCamera: " << camera.nrCamera << " disponibilitate: " << camera.ocupat<<" capacitate: "<<camera.capacitatePersoane<<" pret: "<<camera.pret<<" tip camera: "<<camera.tipCamera;
}
//camera &camera::getTipCamera=(camera &cameraGetter) {
//    const auto &camera = *this;
//    return camera.tipCamera;
//}

camera::camera(const std::string &nrCamera, int tipCamera, bool ocupat, int capacitatePersoane, int pret,
               const std::string &tipCameraStr) : nrCamera(nrCamera), tipCamera(tipCamera), ocupat(ocupat),
                                                  capacitatePersoane(capacitatePersoane), pret(pret),
                                                  tipCameraStr(tipCameraStr) {

    if(pret < 50)
        throw eroare_pret();
}

bool camera::isOcupat() const {
    return ocupat;
}

void camera::setOcupat1(bool ocupat) {
    camera::ocupat = ocupat;
}

int camera::getTipCamera() {
    return tipCamera;
}




