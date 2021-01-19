#ifndef ANIMAL_H
#define ANIMAL_H

#include <QObject>
#include <QDebug> //include QDebug

class Animal : public QObject
{
    Q_OBJECT
public:
    explicit Animal(QObject *parent = 0);

    //add a method and refactor it in its implementation file
    void speak(QString message);

signals:

public slots:
};

#endif // ANIMAL_H
