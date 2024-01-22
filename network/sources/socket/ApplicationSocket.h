#ifndef APPLICATIONSOCKET_H
#define APPLICATIONSOCKET_H

#include <QObject>

class ApplicationSocket : public QObject {

    Q_OBJECT

    public:
        explicit ApplicationSocket(QObject *parent = nullptr);

    signals:

};

#endif // APPLICATIONSOCKET_H
