#include <iostream>
#include <string.h>

using namespace std;

/*
- Osztály
- Jogosultságok
    private - osztály saját függvényeiből érhető el
        setter, getter
    protected - osztály saját tagfüggvényeiből + leszármazott osztály         													tagfüggényeiből
    public - Mindenhonnan

    friend - osztályon kivüli függvény/Osztály ami hozzáfér a private 				 adattagokhoz, lehet definiálni osztályon belül vagy kivül

*/
//setter getter
class Date{
private:
    int year, month, day;
public:
    void setYear(int _year);
    void setMonth(int _month);
    void setDay(int _day);

    int getYear() const;
    int getMonth() const;
    int getDay() const;

};

void Date::setYear(int _year){
    year = _year;
}

void Date::setMonth(int _month){
    month = _month;
}

void Date::setDay(int _day){
    day = _day;
}


int Date::getYear() const{
    return day;
}

int Date::getMonth() const{
    return month;
}

int Date::getDay() const{
    return day;
}



//Konstruktor
class Object2{
private:
    int month, day, year;
    string *partOfDay;
public:
    Object2(); //alapértelmezett konstruktor
    Object2(string &pOD); //nem speciális konstruktor
    Object2(Object2& first); //Copy konstruktor
    ~Object2(); //Destruktor

    void showPartOfDay();
};

//alapértelmezett konsrtruktor
Object2::Object2(){
    month = 5, day = 14, year = 2023;
    partOfDay = new string;
    *partOfDay = "morning";
}

//nem speciális konstruktor
Object2::Object2(string &pOD){
    month = 5, day = 14, year = 2023;
    partOfDay = new string;
    *partOfDay = pOD;
}


//Kopikonstruktor
Object2::Object2(Object2 &first){
    month = first.month, day = first.day, month = first.month;
    partOfDay = new string;
    partOfDay = first.partOfDay;

}


void Object2::showPartOfDay(){
    cout<<*partOfDay<<endl;
}

Object2::~Object2(){
    delete partOfDay;
}

int main()
{
    //Objektum definició statikus
    Date first;
    //dinamikus
    Date *dynFirst;
    dynFirst = new Date;
    delete dynFirst;

    string input = "afternoon";
    string input2 = "evening";
    Object2 O1;
    Object2 O2(input);
    cout<<"O1 default Constructor:";
    O1.showPartOfDay();
    cout<<"02 Non-spec. Constructor:";
    O2.showPartOfDay();
    cout<<"03 Copy constructor:"<<O3.day;
    O3.showPartOfDay();




    return 0;
}
