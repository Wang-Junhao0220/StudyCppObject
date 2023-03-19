//
// Created by MyHomeDesktop on 2023-03-19,019.
//
#include <bits/stdc++.h>
#include "Time.h"
using namespace std;
int main() {
    Time *t=new Time;
    t->set_time();
    t->show_time();
    delete t;
    return 0;
}