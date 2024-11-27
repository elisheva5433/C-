// שב מלפני החגים.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Survivor.h"
#include "Tribe.h"

using namespace std;
int main()
{
    std::cout << "Hello World!\n";

    /*cout << "how many survivors are rhere in every shevet?";
    int num_of_survivors;
    cin >> num_of_survivors;
    Survivor** s1 = new Survivor*[num_of_survivors];
    Survivor** s2 = new Survivor * [num_of_survivors];
    char survi_name[20];
    int survi_age;
    for (int i = 0; i < num_of_survivors; i++) {
        s1[i] = new Survivor;
        cout << "enter your name of survivor and his age:"<<endl;
        cin >> survi_name >> survi_age;
        s1[i]->setSurvi(survi_name, survi_age);

    }
    for (int i = 0; i < num_of_survivors; i++) {
        s2[i] = new Survivor;
        cout << "enter your name of survivor and his age:" << endl;
        cin >> survi_name >> survi_age;
        s2[i]->setSurvi(survi_name, survi_age);

    }
    for (int i = 0; i < num_of_survivors; i++) {
        s1[i]->printDetails();

    }
    for (int i = 0; i < num_of_survivors; i++) {
        s1[i]->printDetails();
    }
    for (int i = 0; i < num_of_survivors; i++) {
        delete s1[i];
    }
    delete []s1;
    for (int i = 0; i < num_of_survivors; i++) {
        delete s2[i];
    }
    delete []s2;*/


    Tribe t1, t2;
    t1.setTribe("greats", 3);
    t2.setTribe("wells", 2);
    
    char survi_name[20];
    int survi_age;
    for (int i = 0; i < t1.getMaxOfSurvivors(); i++) {
        cout << "enter name of survivor and his age:" << endl;
        cin >> survi_name >> survi_age;
        t1.addSurvivor(survi_name, survi_age);
    }
    for (int i = 0; i < t1.getMaxOfSurvivors(); i++) {
        cout << "enter your name of survivor and his age:" << endl;
        cin >> survi_name >> survi_age;
        t2.addSurvivor(survi_name, survi_age);
    }
    t1.printAllOfSurvivors();
    t2.printAllOfSurvivors();
    cout << "how are you want to free from t1? " << endl;
    char to_free[20];
    cin >> to_free;
    t1.freeSurvivor(to_free);
    cout << "how are you want to free from t2? " << endl;
    char to_free[20];
    cin >> to_free;
    t2.freeSurvivor(to_free);
    t1.printAllOfSurvivors();
    t2.printAllOfSurvivors();
    

}

