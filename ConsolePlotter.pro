TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        AbstractFigure.cpp \
        AbstractPlotter.cpp \
        Circle.cpp \
        ConsolePlotter.cpp \
        Line.cpp \
        Point.cpp \
        Rectangle.cpp \
        Triangle.cpp \
        main.cpp

HEADERS += \
    AbstractFigure.h \
    AbstractPlotter.h \
    Circle.h \
    Color.h \
    ConsolePlotter.h \
    Line.h \
    Point.h \
    Rectangle.h \
    Triangle.h
