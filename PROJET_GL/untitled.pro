TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    personnage.cpp \
    monstre.cpp \
    decouverte.cpp \
    combat.cpp \
    deplacementjoueur.cpp \
    deplacementmonstre.cpp \
    competence.cpp \
    monde.cpp \
    map.cpp

HEADERS += \
    personnage.h \
    monstre.h \
    decouverte.h \
    combat.h \
    deplacementjoueur.h \
    deplacementmonstre.h \
    competence.h \
    monde.h \
    map.h
