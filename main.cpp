#include <QCoreApplication>
#include "animal.h"  //including Animal class

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //creating instances of Animal class
    Animal cat;
    Animal dog;
    Animal birds;

    //calling their methods, passing respective parameter
    cat.speak("meow");
    dog.speak("Bark");
    birds.speak("Call");

    return a.exec();
}
