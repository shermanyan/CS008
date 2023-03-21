//
// Created by Sherman Yan on 3/19/23.
//

#ifndef TEXTINPUT_SNAPSHOT_H
#define TEXTINPUT_SNAPSHOT_H

#include <string>
class Snapshot {
private:
    std::string data;

public:
    explicit Snapshot(const std::string &data);

    const std::string &getData() const;

    void setData(const std::string &data);

};


#endif //TEXTINPUT_SNAPSHOT_H
