//
// Created by Raresssssssssss on 1/21/2022.
//

#include "erori.h"




erori::erori(const std::string &arg) : runtime_error("EROARE!"+arg) {

}

eroare_pret::eroare_pret() : erori("Incearca alta camera!") {


}
