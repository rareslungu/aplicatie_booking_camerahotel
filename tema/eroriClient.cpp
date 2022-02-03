//
// Created by Raresssssssssss on 2/3/2022.
//

#include "eroriClient.h"

eroriClient::eroriClient(const std::string &arg) : runtime_error("Eroare!" + arg) {

}

eroare::eroare() : eroriClient("Nationalitatea clientului banata!") {
}
