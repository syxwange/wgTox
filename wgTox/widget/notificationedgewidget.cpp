

#include "notificationedgewidget.h"
#include "style.h"
#include <QBoxLayout>
#include <QLabel>

#include <QDebug>

NotificationEdgeWidget::NotificationEdgeWidget(Position position, QWidget* parent)
    : QWidget(parent)
{
    setAttribute(Qt::WA_StyledBackground); // Show background.
    setStyleSheet(Style::getStylesheet("notificationEdge/notificationEdge.css"));
    QHBoxLayout* layout = new QHBoxLayout(this);
    layout->addStretch();

    textLabel = new QLabel(this);
    textLabel->setMinimumHeight(textLabel->sizeHint().height()); // Prevent cut-off text.
    layout->addWidget(textLabel);

    QLabel* arrowLabel = new QLabel(this);

    if (position == Top)
        arrowLabel->setPixmap(QPixmap(Style::getImagePath("chatArea/scrollBarUpArrow.svg")));
    else
        arrowLabel->setPixmap(QPixmap(Style::getImagePath("chatArea/scrollBarDownArrow.svg")));

    layout->addWidget(arrowLabel);
    layout->addStretch();

    setCursor(Qt::PointingHandCursor);
}

void NotificationEdgeWidget::updateNotificationCount(int count)
{
    textLabel->setText(tr("Unread message(s)", "", count));
}

void NotificationEdgeWidget::mouseReleaseEvent(QMouseEvent* event)
{
    emit clicked();
    QWidget::mousePressEvent(event);
}
