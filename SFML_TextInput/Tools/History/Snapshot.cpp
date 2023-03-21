//
// Created by Sherman Yan on 3/19/23.
//

#include "Snapshot.h"

Snapshot::Snapshot(const std::string &data) : data(data) {}

const std::string &Snapshot::getData() const {
    return data;
}

void Snapshot::setData(const std::string &data) {
    Snapshot::data = data;
}
