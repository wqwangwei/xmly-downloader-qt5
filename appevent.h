#ifndef APPEVENT_H
#define APPEVENT_H

#include <QObject>

class AppEvent : public QObject {
  Q_OBJECT

 public:
  static AppEvent *getInstance() {
    static AppEvent appEvent;
    return &appEvent;
  }

 private:
  AppEvent() {}

 signals:
  void SetFileLength(int id, long length);
};

#endif  // APPEVENT_H
