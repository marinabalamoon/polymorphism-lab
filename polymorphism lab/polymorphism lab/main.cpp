//
//  main.cpp
//  polymorphism lab
//
//  Created by Marina Balamoon on 3/22/26.
//

#include <iostream>
#include <vector>

using namespace std;

class instrument {
protected:
    string name;
    string sound;

public:
    instrument(string n, string s) : name(n), sound(s) {

    }

    virtual void play() {
        cout << name << ": " << sound << endl;
    }
};

class trumpet : public instrument {
public:
    trumpet() : instrument("Trumpet", "doot") {}

    void play() {
        cout << name << ": ";
        for (int i = 0; i < 3; i++) {
            cout << sound << " ";
        }
        cout << endl;
    }
};

class violin : public instrument {
public:
    violin() : instrument("Violin", "vwa") {}

    void play() {
        cout << name << ": ";
        for (int i = 0; i < 5; i++) {
            cout << sound << " ";
        }
        cout << endl;
    }
};

class piano : public instrument {
public:
    piano() : instrument("Piano", "Dee") {}

    void play() {
        cout << name << ": ";
        for (int i = 0; i < 2; i++) {
            cout << sound << " ";
        }
        cout << endl;
    }
};

class trombone : public instrument {
public:
    trombone() : instrument("Trombone", "Dwooooo~") {}

    void play() {
        cout << name << ": " << sound << endl;
    }
};

class singer : public instrument {
public:
    singer() : instrument("Singer", "Blah") {}

    void play() {
        cout << name << ": ";
        for (int i = 0; i < 6; i++) {
            cout << sound << " ";
        }
        cout << endl;
    }
};

int main() {

    trumpet t1;
    violin v1;
    piano p1;
    trombone tb1;
    trumpet t2;
    singer s1;

    vector<instrument*> v;

    v.push_back(&t1);
    v.push_back(&v1);
    v.push_back(&p1);
    v.push_back(&tb1);
    v.push_back(&t2);
    v.push_back(&s1);

    for (instrument* i : v) {
        i->play();
    }
}
