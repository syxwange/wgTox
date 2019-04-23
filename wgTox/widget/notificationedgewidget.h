
#ifndef NOTIFICATIONEDGEWIDGET_H
#define NOTIFICATIONEDGEWIDGET_H

#include <QWidget>

class QLabel;

class NotificationEdgeWidget final : public QWidget
{
    Q_OBJECT
public:
    enum Position : uint8_t
    {
        Top,
        Bottom
    };

    explicit NotificationEdgeWidget(Position position, QWidget* parent = nullptr);
    void updateNotificationCount(int count);

signals:
    void clicked();

protected:
    void mouseReleaseEvent(QMouseEvent* event) final override;

private:
    QLabel* textLabel;
};

#endif // NOTIFICATIONEDGEWIDGET_H
