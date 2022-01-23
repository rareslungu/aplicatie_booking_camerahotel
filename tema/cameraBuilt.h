//
// Created by Raresssssssssss on 1/22/2022.
//

#ifndef TEMA_CAMERABUILT_H
#define TEMA_CAMERABUILT_H


#include <string>

class cameraBuilt {
    int nrDormitoare;
    int nrBai;
    bool bucatarie;
    std::string tipBalcon;
    std::string tipCada;
    friend class cameraBuilt_builder;
public:
    cameraBuilt() = default;
};

class cameraBuilt_builder {
private:
    cameraBuilt d;
public:
    cameraBuilt_builder() = default;
    cameraBuilt_builder& nrDormitoare(int nr) {
        d.nrDormitoare = nr;
        return *this;
    }
    cameraBuilt_builder& nrBai(int nr) {
        d.nrBai = nr;
        return *this;
    }
    cameraBuilt_builder& bucatarie(bool adevarat) {
        d.bucatarie = adevarat;
        return *this;
    }
    cameraBuilt_builder& tipBalcon(const std::string& tip) {
        d.tipBalcon = tip;
        return *this;
    }
    cameraBuilt_builder& tipCada(const std::string& tip) {
        d.tipCada = tip;
        return *this;
    }
    cameraBuilt build() {
        return d;
    }
};


#endif //TEMA_CAMERABUILT_H
