#ifndef NOTE_H
#define NOTE_H

#include <QObject>
#include <QPainter>
#include <QGraphicsItem>
class Note : public QGraphicsItem
{
public:
    Note(float value);
    QRectF boundingRect() const;
    QPainterPath shape() const;
    void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0);
    float noteValue;
protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    const qreal xRad = 20;
    const qreal yRad = 30;
};

#endif // NOTE_H