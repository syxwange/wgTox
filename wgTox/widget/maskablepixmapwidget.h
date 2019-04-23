

#ifndef MASKABLEPIXMAPWIDGET_H
#define MASKABLEPIXMAPWIDGET_H

#include <QLabel>

class MaskablePixmapWidget final : public QLabel
{
    Q_OBJECT
public:
    MaskablePixmapWidget(QWidget* parent, QSize size, QString maskName = QString());
    ~MaskablePixmapWidget() override;
    void autopickBackground();
    void setClickable(bool clickable);
    void setPixmap(const QPixmap& pmap);
    QPixmap getPixmap() const;
    void setSize(QSize size);

signals:
    void clicked();

protected:
    void mousePressEvent(QMouseEvent*) final override;

private:
    void updatePixmap();

private:
    QPixmap pixmap, mask, unscaled;
    QPixmap* renderTarget;
    QString maskName;
    bool clickable;
};

#endif // MASKABLEPIXMAPWIDGET_H
