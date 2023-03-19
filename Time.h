//
// Created by MyHomeDesktop on 2023-03-19,019.
//

#ifndef STUDYCPPOBJECT_TIME_H
#define STUDYCPPOBJECT_TIME_H


class Time {
public:
    void set_time();
    void show_time() const;
private:
    int hour;
    int minute;
    int sec;
};


#endif //STUDYCPPOBJECT_TIME_H
