/*
Improve pembelajaran tanggal 07-05-2025
*/

//Coba kita improve pembelajaran dengan menggunakan input dari user dan akan menampikan data tersebut ke user
#include <iostream>
using namespace std;


main(){
    string frist_name;
    string last_name;
    int age;
    const int bot_age = 50;

    cout << "Hi, nama saya adalah ITHNP AI, saya adalah AI yang dapat membantu kamu dalam pembelajaran.\nTapi sebelum itu, siapa nama depan kamu ?";
    cin >> frist_name;
    cout << "Kemudian, Siapa nama belakang kamu ?";
    cin >> last_name;

    cout << "Baik, salam kenal " << frist_name << " " << last_name;

    cout << "\n Berapa umur kamu >";
    cin >> age;


    if (age > bot_age)
    {
        int different = age - bot_age;
        cout << "Wah, ternyata kamu cukup tua dari saya. Saya berumur " << bot_age << " Tahun dan kamu lebih tua " << different << " Tahun dari saya.";
    }else{
        int different = bot_age - age;
        cout << "Wah, ternyata kamu cukup muda dari saya. Saya berumur " << bot_age << " tahun dan kamu lebih muda " << different << " Tahun dari saya";
    }
}