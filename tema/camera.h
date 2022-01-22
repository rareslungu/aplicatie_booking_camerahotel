//
// Created by Raresssssssssss on 1/19/2022.
//

#ifndef TEMA_CAMERA_H
#define TEMA_CAMERA_H
#include <string>
#include <iostream>
#include <vector>
#include <string.h>
#include <memory>

class camera {
protected:
    std::string nrCamera;
    int tipCamera; // 1 pt dubla, 2 pt apartament, 3 pt view room
    bool ocupat; // 1 pt ocupat, 0 pt liber
    int capacitatePersoane;
    int pret;
public:
    camera(const std::string &nrCamera, int tipCamera, bool ocupat, int capacitatePersoane, int pret,
           const std::string &tipCameraStr);

    std::string tipCameraStr;


    friend std::ostream &operator<<(std::ostream &out, const camera &camera);

    static const std::string& intToString(int tipCam);
    virtual void calcPretCam() = 0;

    camera();

    virtual void afisare(std::ostream &out) const;
    virtual std::shared_ptr<camera> clone() const = 0;


    void setNrCamera(const std::string& nrCamera);
    int setTipCamera(int tipCamera);
    int setCapacitatePersoane(int capacitatePersoane);
    void setPret(int pret);
    int setOcupat(int ocupat);


    const std::string& getNrCamera() const;

    const std::string& getTipCameraStr() const;

    bool isOcupat() const;

    void setOcupat1(bool ocupat);

    int getTipCamera();

    int getCapacitatePersoane() const;

    int getPret() const;

    int getOcupat() const;

};


#endif //UNTITLED_CAMERA_H
