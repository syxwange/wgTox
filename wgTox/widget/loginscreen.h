
#ifndef LOGINSCREEN_H
#define LOGINSCREEN_H

#include <QShortcut>
#include <QToolButton>
#include <QDialog>

class Profile;

namespace Ui {
class LoginScreen;
}

class LoginScreen : public QDialog
{
    Q_OBJECT

public:
    LoginScreen(QString selectedProfile = QString(), QWidget* parent = nullptr);
    ~LoginScreen();
    void reset(QString selectedProfile = QString());
    Profile* getProfile() const;

    bool event(QEvent* event) final override;

signals:
    void windowStateChanged(Qt::WindowStates states);
    void closed();

protected:
    virtual void closeEvent(QCloseEvent* event) final override;

private slots:
    void onAutoLoginToggled(int state);
    void onLoginUsernameSelected(const QString& name);
    void onPasswordEdited();
    // Buttons to change page
    void onNewProfilePageClicked();
    void onLoginPageClicked();
    // Buttons to submit form
    void onCreateNewProfile();
    void onLogin();
    void onImportProfile();

private:
    void retranslateUi();
    void showCapsIndicator();
    void hideCapsIndicator();
    void checkCapsLock();

private:
    Ui::LoginScreen* ui;
    QShortcut quitShortcut;
    Profile* profile{nullptr};
};

#endif // LOGINSCREEN_H
