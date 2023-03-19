//
// Created by MyHomeDesktop on 2023-03-19,019.
//

#include "Time.h"
#include <bits/stdc++.h>
using namespace std;
void Time::set_time() {
    cin>>hour>>minute>>sec;
}
void Time::show_time() const {
    cout<<hour<<" "<<minute<<" "<<sec<<endl;
}