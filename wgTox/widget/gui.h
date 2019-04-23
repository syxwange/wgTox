

#ifndef GUI_H
#define GUI_H

#include <QObject>

class QWidget;

class GUI : public QObject
{
    Q_OBJECT
public:
    static GUI& getInstance();
    static QWidget* getMainWidget();
    static void clearContacts();
    static void setEnabled(bool state);
    static void setWindowTitle(const QString& title);
    static void reloadTheme();
    static void showUpdateDownloadProgress();
    static void showInfo(const QString& title, const QString& msg);
    static void showWarning(const QString& title, const QString& msg);
    static void showError(const QString& title, const QString& msg);
    static bool askQuestion(const QString& title, const QString& msg, bool defaultAns = false,
                            bool warning = true, bool yesno = true);

    static bool askQuestion(const QString& title, const QString& msg, const QString& button1,
                            const QString& button2, bool defaultAns = false, bool warning = true);

    static QString itemInputDialog(QWidget* parent, const QString& title, const QString& label,
                                   const QStringList& items, int current = 0, bool editable = true,
                                   bool* ok = nullptr, Qt::WindowFlags flags = nullptr,
                                   Qt::InputMethodHints hints = Qt::ImhNone);

    static QString passwordDialog(const QString& cancel, const QString& body);

private:
    explicit GUI(QObject* parent = nullptr);

private slots:
    // Private implementation, those must be called from the GUI thread
    void _clearContacts();
    void _setEnabled(bool state);
    void _setWindowTitle(const QString& title);
    void _reloadTheme();
    void _showInfo(const QString& title, const QString& msg);
    void _showWarning(const QString& title, const QString& msg);
    void _showError(const QString& title, const QString& msg);
    void _showUpdateDownloadProgress();
    bool _askQuestion(const QString& title, const QString& msg, bool defaultAns = false,
                      bool warning = true, bool yesno = true);
    bool _askQuestion(const QString& title, const QString& msg, const QString& button1,
                      const QString& button2, bool defaultAns = false, bool warning = true);
    QString _itemInputDialog(QWidget* parent, const QString& title, const QString& label,
                             const QStringList& items, int current = 0, bool editable = true,
                             bool* ok = nullptr, Qt::WindowFlags flags = nullptr,
                             Qt::InputMethodHints inputMethodHints = Qt::ImhNone);
    QString _passwordDialog(const QString& cancel, const QString& body);
};

#endif // GUI_H
