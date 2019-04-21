
#ifndef NEXUS_H
#define NEXUS_H

#include <QObject>
class Widget;
class Profile;
class Core;

class Nexus : public QObject
{
    Q_OBJECT
public:
    void start();
    void showMainGUI();

    static Nexus& getInstance();
    static void destroyInstance();
    static Core* getCore();
    static Profile* getProfile();
    static void setProfile(Profile* profile);
    static Widget* getDesktopGUI();

public slots:
    void showLogin();

private:
    explicit Nexus(QObject* parent = nullptr);
    ~Nexus();

private:
    Profile* profile;
    Widget* widget;
};

#endif // NEXUS_H
